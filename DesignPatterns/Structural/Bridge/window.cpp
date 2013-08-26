#include "window.h"

#include "view.h"
#include "windowimp.h"

Window::Window(View *contents)
    : m_contents(contents)
{
}

Window::~Window()
{
}

void Window::DrawContents()
{
}

void Window::Open()
{
}

void Window::Close()
{
}

void Window::Iconify()
{
}

void Window::Deiconify()
{
}

void Window::SetOrigin(const Point &at)
{
}

void Window::SetExtent(const Point &extent)
{
}

void Window::Raise()
{
}

void Window::Lower()
{
}

void Window::DrawLine(const Point &from, const Point &to)
{
}

void Window::DrawRect(const Point &bottomLeft, const Point &topRight)
{
    WindowImp *imp = GetWindowImp();
    if (imp)
    {
        imp->DeviceRect(bottomLeft.m_x, bottomLeft.m_y, topRight.m_x, topRight.m_y);
    }
}

void Window::DrawPolygon(const PointList &points)
{
}

void Window::DrawText(const std::string, const Point &at)
{
}

View *Window::GetView() const
{
    return m_contents;
}

WindowImp *Window::GetWindowImp() const
{
    return m_windowImp;
}
