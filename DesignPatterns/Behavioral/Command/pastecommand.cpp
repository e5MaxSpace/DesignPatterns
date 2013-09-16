#include "pastecommand.h"

PasteCommand::PasteCommand(Document *doc)
    : m_doc(doc)
{
}

void PasteCommand::Execute()
{
    m_doc->Paste();
}
