#ifndef CHARACTER_H
#define CHARACTER_H

#include "glyph.h"

class Character : public Glyph
{
public:
    explicit Character(char ch);

    virtual void Draw(Window *win, GlyphContext &gc);

private:
    char _charcode;
};

#endif // CHARACTER_H
