#ifndef PASTECOMMAND_H
#define PASTECOMMAND_H

#include "command.h"

#include "document.h"

class PasteCommand : public Command
{
public:
    // 通过构造函数配置该command的receiver
    explicit PasteCommand(Document *doc);

    virtual void Execute();

private:
    Document *m_doc; // receiver
};

#endif // PASTECOMMAND_H
