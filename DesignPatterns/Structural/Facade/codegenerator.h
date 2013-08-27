#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H

//#include "statementnode.h"
//#include "expressionnode.h"

class StatementNode;
class ExpressionNode;
class CodeGenerator
{
public:
    virtual ~CodeGenerator();
    virtual void Visit(StatementNode *node);
    virtual void Visit(ExpressionNode *node);

protected:
    CodeGenerator();

    //BytecodeStream & _output;
};

#endif // CODEGENERATOR_H
