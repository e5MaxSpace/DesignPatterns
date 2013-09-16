#ifndef OPENCOMMAND_H
#define OPENCOMMAND_H

#include "command.h"
#include "application.h"

#include <string>

class OpenCommand : public Command
{
public:
    // ͨ�����캯�����ø�command��receiver
    explicit OpenCommand(Application *app);
    virtual void Execute();

protected:
    virtual std::string AskUser();

    Application *m_app; // receiver
};

#endif // OPENCOMMAND_H
