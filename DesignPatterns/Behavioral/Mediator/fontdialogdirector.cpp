#include "fontdialogdirector.h"

#include "button.h"
#include "listbox.h"
#include "entryfield.h"

FontDialogDirector::FontDialogDirector()
{
}

FontDialogDirector::~FontDialogDirector()
{
}

void FontDialogDirector::WidgetChanged(M_Widget * theChangedWidget)
{
    if (theChangedWidget == _fontList)
    {
        _fontName->SetText(_fontList->GetSelection());
    }
    else if (theChangedWidget == _ok)
    {

    }
    else if (theChangedWidget == _cancel)
    {

    }
}

void FontDialogDirector::CreateWidgets()
{
    _ok = new Button(this);
    _cancel = new Button(this);

    _fontList = new ListBox(this);
    _fontName = new EntryField(this);

    // ....
}
