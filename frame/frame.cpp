#include "frame.h"
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <X11/Xproto.h>
#include <X11/Xatom.h>

#include <iostream>
#include <list>

using namespace std;

Frame::Frame(QWidget *parent) : QFrame(parent)
{

    init();
    create_borders();
    update_style();
    XReparentWindow(QX11Info::display(), c_win, winId(), 2, top_bdr_height);
    //resize(600, 400);
    //XResizeWindow(QX11Info::display(), c_win, 800, 600);
}

Frame::~Frame()
{
}

void Frame::init()
{
    QProcess *p;
    p = new QProcess();
    p->start("xterm");
    c_pid = p->pid();
    qDebug()<<c_pid;
    XWindowFinder *finder;
    finder = new XWindowFinder(c_pid);
    while(!finder->findresult()){
        delete finder;
        finder = new XWindowFinder(c_pid);
    }
    finder->print();
    std::vector<Window> tt;
    tt = finder->result();
    std::vector<Window>::iterator hehe = tt.begin();
    c_win = *hehe;
}

void Frame::read_settings()
{
    title_color = QColor(255,0,0);         // frame title color
    header_active_pix = "active";  // frame header pixmap
    header_inactive_pix = "inactive";// frame header pixmap
    close_pix = "close";          // frame close pixmap
    minmax_pix = "minmax";         // frame minmax pixmap
    top_bdr_height = 15;         // parent top border height
    bottom_bdr_height = 5;      // parent top border height
    uchar tt[10]="angle.png";
    QImage img(tt, 10, 10, QImage::Format_ARGB32);
    wicon = QPixmap::fromImage(img);             // window icon
    wm_name = "My Frame";            // WM_NAME property or res_name
    diff_border_h=top_bdr_height+bottom_bdr_height;
    diff_border_w=2;
}

void Frame::update_style()
{
    read_settings();
    tl_bdr->setFixedSize(top_bdr_height, top_bdr_height);
    tr_bdr->setFixedSize(top_bdr_height, top_bdr_height);
    //tm_bdr->set_pixmap(QPixmap(header_active_pix), QPixmap(header_inactive_pix), title_color);
    tm_bdr->setFixedHeight(top_bdr_height);
    bm_bdr->setFixedHeight(bottom_bdr_height);
    bl_bdr->setFixedSize(top_bdr_height, bottom_bdr_height);
    br_bdr->setFixedSize(top_bdr_height, bottom_bdr_height);
    //get_client_geometry();
    XWindowAttributes attr;
    XGetWindowAttributes(QX11Info::display(), c_win, &attr);
    int client_x = attr.x;
    int client_y = attr.y;
    int client_w = attr.width;
    int client_h = attr.height;
    //set_frame_geometry();
    move(client_x, client_y);
    resize(client_w+diff_border_w*3, client_h+diff_border_h);
    //XResizeWindow(QX11Info::display(), c_win, client_w-diff_border_w, client_h-diff_border_h); //client
    //XMoveWindow(QX11Info::display(), c_win, client_x+diff_border_w, client_y+diff_border_h);
    //resize(frame_w, frame_h); //update frame
}

void Frame::create_borders()
{
    layout = new QGridLayout(this); // 3x3 grid for window borders
    layout->setMargin(0);
    layout->setSpacing(0);
    setLayout(layout);

    // center frame where client apps is shown
    c_bdr = new Border(this);
    layout->addWidget(c_bdr, 1, 1);
    // top left border (icon)
    tl_bdr = new Border(this);
    tl_bdr->setToolTip(tr("Minimize(L)/Maximize(R)"));
    tl_bdr->setFixedSize(top_bdr_height, top_bdr_height);
    tl_bdr->setPixmap(minmax_pix);
    tl_bdr->setScaledContents(true);
    tl_bdr->setAlignment(Qt::AlignCenter);
    layout->addWidget(tl_bdr, 0, 0);
    // top right border (icon)
    tr_bdr = new Border(this);
    tr_bdr->setToolTip(tr("Close"));
    tr_bdr->setFixedSize(top_bdr_height, top_bdr_height);
    tr_bdr->setPixmap(close_pix);
    tr_bdr->setScaledContents(true);
    tr_bdr->setAlignment(Qt::AlignCenter);
    layout->addWidget(tr_bdr, 0, 2);
    // top mid header border (header frame)
    tm_bdr = new Header(cl_icon(), cl_name(), this);
    tm_bdr->set_pixmap(QPixmap(header_active_pix), QPixmap(header_inactive_pix), title_color);
    tm_bdr->setFixedHeight(top_bdr_height);
    layout->addWidget(tm_bdr, 0, 1);
    // bottom mid border
    bm_bdr = new Border(this);
    bm_bdr->setFixedHeight(bottom_bdr_height);
    bm_bdr->setCursor(Qt::SizeVerCursor);
    layout->addWidget(bm_bdr, 2, 1);
    // bottom left border
    bl_bdr = new Border(this);
    bl_bdr->setFixedSize(top_bdr_height, bottom_bdr_height);
    bl_bdr->setCursor(Qt::SizeBDiagCursor);
    layout->addWidget(bl_bdr, 2, 0);
    // bottom right border
    br_bdr = new Border(this);
    br_bdr->setFixedSize(top_bdr_height, bottom_bdr_height);
    br_bdr->setCursor(Qt::SizeFDiagCursor);
    layout->addWidget(br_bdr, 2, 2);
    // left border
    l_bdr = new Border(this);
    l_bdr->setCursor(Qt::SizeHorCursor);
    layout->addWidget(l_bdr, 1, 0);
    // right border
    r_bdr = new Border(this);
    r_bdr->setCursor(Qt::SizeHorCursor);
    layout->addWidget(r_bdr, 1, 2);

    if (frame_type == "Dialog") // no Max/Min on Dialog frames
    {
        tl_bdr->setEnabled(false);
    }

    // top left (icon)
    connect(tl_bdr, SIGNAL(mouse_left_press()), this, SLOT(iconify_it()));
    connect(tl_bdr, SIGNAL(mouse_right_press()), this, SLOT(maximize_it()));
    // top right (icon)
    connect(tr_bdr, SIGNAL(mouse_left_press()), this, SLOT(destroy_it()));
    // top mid (title bar)
    connect(tm_bdr, SIGNAL(mouse_double_click()), this, SLOT(iconify_it()));
    connect(tm_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_top_mid(QMouseEvent *)));
    connect(tm_bdr, SIGNAL(mouse_right_press()), this, SLOT(maximize_it()));
    connect(tm_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_top_mid(QMouseEvent *)));
    // bottom left
    connect(bl_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_bottom_left(QMouseEvent *)));
    connect(bl_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_bottom_left(QMouseEvent *)));
    // bottom right
    connect(br_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_bottom_right(QMouseEvent *)));
    connect(br_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_bottom_right(QMouseEvent *)));
    // bottom mid
    connect(bm_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_bottom_mid(QMouseEvent *)));
    connect(bm_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_bottom_mid(QMouseEvent *)));
    // left
    connect(l_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_left(QMouseEvent *)));
    connect(l_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_left(QMouseEvent *)));
    // right
    connect(r_bdr, SIGNAL(mouse_left_press(QMouseEvent *)), this, SLOT(press_right(QMouseEvent *)));
    connect(r_bdr, SIGNAL(mouse_move(QMouseEvent *)), this, SLOT(move_right(QMouseEvent *)));
}

void Frame::press_top_mid(QMouseEvent *event)
{
    mousepos = event->pos()+tm_bdr->pos();  // offset
}

void Frame::move_top_mid(QMouseEvent *event)
{
    QPoint p(event->globalPos()-mousepos);
    move(p.x(), p.y());
    //XMoveWindow(QX11Info::display(), c_win, p.x(), p.y());
}

////////// BOTTOM LEFT RESIZE //////////////
void Frame::press_bottom_left(QMouseEvent *event)
{
    mousepos = event->globalPos();
}

void Frame::move_bottom_left(QMouseEvent *event)
{
    QPoint dpos = event->globalPos()-mousepos;
    int resw = width()-dpos.x();
    int resh = height()+dpos.y();
    int resx = x()-resw+width();
    //move and resize parent
    move(resx, y());
    resize(resw, resh);
    XResizeWindow(QX11Info::display(), c_win, resw-diff_border_w*3, resh-diff_border_h); //client
    //XMoveWindow(QX11Info::display(), c_win, resx, y());
    mousepos = event->globalPos();
    //XWindowChanges a;
    //a.x = resx;
    //a.y = y();
    //a.height = resw-diff_border_w;
    //a.width = resh-diff_border_h;
    //a.stack_mode = Above;
    //a.sibling =c_bdr->winId();
    //cout<<c_bdr->winId()<<endl;
    // XConfigureWindow(QX11Info::display(), c_win, CWSibling|CWStackMode, &a );
}

////////// BOTTOM RIGHT RESIZE //////////////

void Frame::press_bottom_right(QMouseEvent *event)
{
    mousepos = event->globalPos();
}

void Frame::move_bottom_right(QMouseEvent *event)
{
    QPoint dpos = event->globalPos()-mousepos;
    int resw = width()+dpos.x();
    int resh = height()+dpos.y();
    //move and resize parent
    move(x(), y());
    resize(resw, resh);
    XResizeWindow(QX11Info::display(), c_win, resw-diff_border_w*3, resh-diff_border_h); //client
    mousepos = event->globalPos();
}

////////// BOTTOM MID RESIZE //////////////

void Frame::press_bottom_mid(QMouseEvent *event)
{
    mousepos = event->globalPos();
}

void Frame::move_bottom_mid(QMouseEvent *event)
{
    QPoint dpos = event->globalPos()-mousepos;
    int resh = height()+dpos.y();
    int resw = width();
    //move and resize parent
    move(x(), y());
    resize(resw, resh);
    XResizeWindow(QX11Info::display(), c_win, resw-diff_border_w*3, resh-diff_border_h);
    mousepos = event->globalPos();
}

////////// RIGHT RESIZE //////////////

void Frame::press_right(QMouseEvent *event)
{
    mousepos = event->globalPos();
}

void Frame::move_right(QMouseEvent *event)
{
    QPoint dpos = event->globalPos()-mousepos;
    int resw = width()+dpos.x();
    int resh = height();
    //move and resize parent
    move(x(), y());
    resize(resw, resh);
    XResizeWindow(QX11Info::display(), c_win, resw-diff_border_w*3, resh-diff_border_h); //client
    mousepos = event->globalPos();
}

////////// LEFT RESIZE //////////////

void Frame::press_left(QMouseEvent *event)
{
    mousepos = event->globalPos();
}

void Frame::move_left(QMouseEvent *event)
{
    QPoint dpos = event->globalPos()-mousepos;
    int resw = width()-dpos.x();
    int resh = height();
    int resx = x()-resw+width();
    //move and resize parent
    move(resx, y());
    resize(resw, resh);
    XResizeWindow(QX11Info::display(), c_win, resw-diff_border_w*3, resh-diff_border_h); //client
    //XMoveWindow(QX11Info::display(), c_win, resx, y());
    mousepos = event->globalPos();
}

void Frame::dragEnterEvent(QDragEnterEvent *event)
{
    qDebug() << "dragEnterEvent";
    qDebug() << "Proposed action:" << event->proposedAction() << " [1:Copy - 2:Move - 4:Link]";
    event->acceptProposedAction();
    qDebug() << "Drag enter contents:" << event->mimeData()->text().toLatin1().data();
}

void Frame::dragMoveEvent(QDragMoveEvent *event)
{
    qDebug() << "dragMoveEvent";
    qDebug() << "Proposed action:" << event->proposedAction() << " [1:Copy - 2:Move - 4:Link]";
    event->acceptProposedAction();
    qDebug() << "Drag move contents:" << event->mimeData()->text().toLatin1().data();
}

void Frame::dropEvent(QDropEvent *event)
{
    qDebug() << "dropEvent";
    qDebug() << "Proposed action:" << event->proposedAction() << " [1:Copy - 2:Move - 4:Link]";
    event->acceptProposedAction();
    qDebug() << "Drop event contents:" << event->mimeData()->text().toLatin1().data();
}

void Frame::iconify_it()
{
    if (frame_type != "Dialog") // no iconify on Dialog frames
    {
        //desktop->add_deskicon(this);  // add Application icon (small pixmap) on Desktop
        //XUnmapWindow(QX11Info::display(), winId());
        //XUnmapWindow(QX11Info::display(), c_win);
        //set_state(3);
        //state = "IconicState";
        //qDebug() << "Frame iconify:" << winId() << "Name:" << wm_name << "Client:" << c_win << "State:" << state;
        //dockbar->remove_dockicon(this);  // remove Dockicon from Dockbar
    }
}

void Frame::maximize_it()
{
    //if (! maximized)
    {
        // save parent dimension
        //n_px = x();
        //n_py = y();
        //n_pw = width();
        //n_ph = height();
        //// maximize parent with vertex and screen dimension-dockbar height
        //m_pw = QApplication::desktop()->width();
        //m_ph = QApplication::desktop()->height()-dock_height;
        //if (dock_position == 0) // bottom
        //    move(QApplication::desktop()->x(), QApplication::desktop()->y());
        //else // top
        //    move(QApplication::desktop()->x(), QApplication::desktop()->y()+dock_height);
        //resize(m_pw, m_ph);
        //raise();
        // maximize client
        //XResizeWindow(QX11Info::display(), c_win, width()-diff_border_w, height()-diff_border_h);
        //maximized = true;
    }
    //else
    {
        // set last parent dimension
        //move(n_px, n_py);
        //resize(n_pw, n_ph);
        //raise();
        // set last client dimension
        //XResizeWindow(QX11Info::display(), c_win, width()-diff_border_w, height()-diff_border_h);
        //maximized = false;
    }
}

void Frame::destroy_it()
{
    //if (prot_delete)
    {
        //qDebug() << "--> Send wm_delete_window";
        //Atom wm_delete_window = XInternAtom(QX11Info::display(), "WM_DELETE_WINDOW", FALSE);
        //send_wm_protocols(wm_delete_window, CurrentTime);
    }
    //else
    {
        //qDebug() << "--> Call XKillClient";
        //XKillClient(QX11Info::display(), c_win);
        //XSync(QX11Info::display(), FALSE);
    }
}









