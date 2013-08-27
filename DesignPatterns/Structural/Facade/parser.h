#ifndef PARSER_H
#define PARSER_H

#include "scanner.h"
#include "programnodebuilder.h"

class Parser
{
public:
    Parser();
    virtual ~Parser();

    virtual void Parse(Scanner &scanner, ProgramNodeBuilder &builder);
};

#endif // PARSER_H
