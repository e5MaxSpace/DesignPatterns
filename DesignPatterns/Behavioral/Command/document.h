#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document
{
public:
    explicit Document(const std::string &fileName);

    void Open();
    void Paste();

};

#endif // DOCUMENT_H
