#include "opencommand.h"

OpenCommand::OpenCommand(Application *app)
    : m_app(app)
{
}

void OpenCommand::Execute()
{
    const std::string fileName = AskUser();
    if (!fileName.empty())
    {
        Document *doc = new Document(fileName);
        m_app->Add(doc);
        doc->Open();
    }
}

std::string OpenCommand::AskUser()
{
    return "fileName";
}
