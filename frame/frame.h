#ifndef FRAME_H
#define FRAME_H

#include "defs.h"
#include "border.h"
#include "header.h"
#include "xwindowfinder.h"

class Header;

////////////////////////////////////////

class Frame : public QFrame
{
    Q_OBJECT

public:
    Frame(QWidget *parent=0);
    ~Frame();
    void init();
    void update_style();
    void create_borders();
    QString cl_name()
        {
            return(wm_name);
        }
    QPixmap cl_icon()
        {
            return(wicon);
        }

public slots:
    void press_top_mid(QMouseEvent *);          // top mid border press
    void move_top_mid(QMouseEvent *);           // top mid border move
    void press_bottom_left(QMouseEvent *);      // bottom left border press
    void move_bottom_left(QMouseEvent *);       // bottom left border move
    void press_bottom_right(QMouseEvent *);     // bottom right border press
    void move_bottom_right(QMouseEvent *);      // bottom right border move
    void press_bottom_mid(QMouseEvent *);       // bottom mid border press
    void move_bottom_mid(QMouseEvent *);        // bottom mid border move
    void press_right(QMouseEvent *);            // right border press
    void move_right(QMouseEvent *);             // right border move
    void press_left(QMouseEvent *);             // left border press
    void move_left(QMouseEvent *);              // left border move
    void destroy_it();                          // destroy client
    void maximize_it();                         // maximize client
    void iconify_it();                          // iconify client
    void dragEnterEvent(QDragEnterEvent *);
    void dragMoveEvent(QDragMoveEvent *);
    void dropEvent(QDropEvent *);

private:


    int diff_border_h;          // height space between parent frame (qt) and client frame
    int diff_border_w;          // width space between parent frame (qt) and client frame
    QColor title_color;         // frame title color
    QString header_active_pix;  // frame header pixmap
    QString header_inactive_pix;// frame header pixmap
    QString close_pix;          // frame close pixmap
    QString minmax_pix;         // frame minmax pixmap
    int top_bdr_height;         // parent top border height
    int bottom_bdr_height;      // parent top border height
    QPoint mousepos;            // mouse position at button press
    WId c_win;                  // client window
    QString frame_type;         // frame type (Normal, Splash, Dialog, Desktop..)
    Header *tm_bdr;             // top mid window border (for window move)
    Border *tl_bdr;             // top left window border (icon)
    Border *tr_bdr;             // top right window border (icon)
    Border *bm_bdr;             // bottom mid window border
    Border *bl_bdr;             // bottom left window border
    Border *br_bdr;             // bottom right window border
    Border *l_bdr;              // left window border
    Border *r_bdr;              // right window border
    Border *c_bdr;              // center window border (client apps)
    QGridLayout *layout;
    QPixmap wicon;              // window icon
    QString wm_name;            // WM_NAME property or res_name
};
#endif
