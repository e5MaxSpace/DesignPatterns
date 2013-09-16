#ifndef OPENCOMMAND_H
#define OPENCOMMAND_H

#include "command.h"
#include "application.h"

#include <string>

class OpenCommand : public Command
{
public:
    // 通过构造函数配置该command的receiver
    explicit OpenCommand(Application *app);
    virtual void Execute();

protected:
    virtual std::string AskUser();

    Application *m_app; // receiver
};

#endif // OPENCOMMAND_H
