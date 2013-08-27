#ifndef GLYPHCONTEXT_H
#define GLYPHCONTEXT_H

class GlyphContext
{
public:
    GlyphContext();
    virtual ~GlyphContext();

    virtual void Next(int step = 1);
    virtual void Insert(int quantity = 1);

    virtual Font *GetFont();
    virtual void SetFont(Font *font, int span = 1);

private:
    int _index;
    BTree* _fonts;
};

#endif // GLYPHCONTEXT_H
