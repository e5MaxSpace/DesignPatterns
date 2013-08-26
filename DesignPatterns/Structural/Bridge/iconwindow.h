#ifndef ICONWINDOW_H
#define ICONWINDOW_H

#include "window.h"

class IconWindow : public Window
{
public:
    IconWindow(View *contents);

    virtual void DrawContents();

private:
    std::string m_bitmapName;
};

#endif // ICONWINDOW_H
