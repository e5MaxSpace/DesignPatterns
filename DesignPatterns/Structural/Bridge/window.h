#ifndef WINDOW_H
#define WINDOW_H

#include "../SharedFiles/point.h"
#include <string>

class View;
class WindowImp;
class Window
{
public:
    explicit Window(View *contents);
    virtual ~Window();

    virtual void DrawContents();

    virtual void Open();
    virtual void Close();
    virtual void Iconify();
    virtual void Deiconify();

    virtual void SetOrigin(const Point& at);
    virtual void SetExtent(const Point& extent);

    virtual void Raise();
    virtual void Lower();

    virtual void DrawLine(const Point& from, const Point& to);
    virtual void DrawRect(const Point& bottomLeft, const Point& topRight);
    virtual void DrawPolygon(const PointList& points);
    virtual void DrawText(const std::string, const Point& at);

protected:
    WindowImp *GetWindowImp() const;
    View *GetView() const;

private:
    WindowImp *m_windowImp;
    View *m_contents;
};

#endif // WINDOW_H
