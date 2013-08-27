#ifndef SCANNER_H
#define SCANNER_H

#include <istream>

class Scanner
{
public:
    Scanner(std::istream &is);
    virtual ~Scanner();

private:
    std::istream & _inputStream;
};

#endif // SCANNER_H
