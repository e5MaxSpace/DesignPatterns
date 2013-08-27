#ifndef PROGRAMNODE_H
#define PROGRAMNODE_H

#include "codegenerator.h"

class ProgramNode
{
public:
    virtual ~ProgramNode();
    virtual void GetSourcePosition(int &line, int &index);

    virtual void Add(ProgramNode *node);
    virtual void Remove(ProgramNode *node);

    //virtual void Traverse(CodeGenerator &cg);

protected:
    ProgramNode();
};

#endif // PROGRAMNODE_H
