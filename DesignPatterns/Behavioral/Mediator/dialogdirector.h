#ifndef DIALOGDIRECTOR_H
#define DIALOGDIRECTOR_H

class M_Widget;
class DialogDirector
{
public:
    virtual ~DialogDirector();

    virtual void ShowDialog();
    virtual void WidgetChanged(M_Widget *) = 0;

protected:
    DialogDirector();
    virtual void CreateWidgets() = 0;
};

#endif // DIALOGDIRECTOR_H
