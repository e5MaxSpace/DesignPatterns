#include "iconwindow.h"

#include "windowimp.h"

IconWindow::IconWindow(View *contents)
    : Window(contents)
{
}

void IconWindow::DrawContents()
{
    WindowImp *imp = GetWindowImp();
    if (imp != 0)
    {
        imp->DeviceBitmap(m_bitmapName, Point(0.0, 0.0));
    }
}
