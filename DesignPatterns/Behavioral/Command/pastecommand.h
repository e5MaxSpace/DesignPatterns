#ifndef PASTECOMMAND_H
#define PASTECOMMAND_H

#include "command.h"

#include "document.h"

class PasteCommand : public Command
{
public:
    // ͨ�����캯�����ø�command��receiver
    explicit PasteCommand(Document *doc);

    virtual void Execute();

private:
    Document *m_doc; // receiver
};

#endif // PASTECOMMAND_H
