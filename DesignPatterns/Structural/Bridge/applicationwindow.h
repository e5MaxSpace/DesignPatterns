#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include "window.h"

class ApplicationWindow : public Window
{
public:
    ApplicationWindow(View *contents);

    virtual void DrawContents();
};

#endif // APPLICATIONWINDOW_H
