#ifndef FONTDIALOGDIRECTOR_H
#define FONTDIALOGDIRECTOR_H

#include "dialogdirector.h"

class Button;
class ListBox;
class EntryField;
class FontDialogDirector : public DialogDirector
{
public:
    FontDialogDirector();
    virtual ~FontDialogDirector();

    virtual void WidgetChanged(M_Widget *theChangedWidget);

protected:
    virtual void CreateWidgets();

private:
    Button *_ok;
    Button *_cancel;
    ListBox *_fontList;
    EntryField *_fontName;
};

#endif // FONTDIALOGDIRECTOR_H
