#include "border.h"

Border::Border(QWidget *parent) : QLabel(parent)
{
    this->setAutoFillBackground (true);
    QPalette palette;
    palette.setColor(QPalette::Active, QPalette::Background, QColor(64,64,64));
    this->setPalette(palette);
}

Border::~Border()
{}

void Border::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::RightButton)
    {
        emit mouse_right_press();
    }
    else if (event->button() == Qt::LeftButton)
    {
        emit mouse_left_press(event);
        emit mouse_left_press();
    }
    else if (event->button() == Qt::MidButton)
    {
        emit mouse_mid_press();
    }
}

void Border::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::LeftButton) // to block right button mouse move
    {
        emit mouse_move(event);
    }
}

