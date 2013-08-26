#include "applicationwindow.h"

#include "view.h"

ApplicationWindow::ApplicationWindow(View *contents)
    : Window(contents)
{
}

void ApplicationWindow::DrawContents()
{
    GetView()->DrawOn();
}
