#ifndef GLYPH_H
#define GLYPH_H

class Glyph
{
public:
    virtual ~Glyph();

    virtual void Draw(Window *win, GlyphContext &gc);

    virtual void SetFont(Font* font, GlyphContext &gc);
    virtual void GetFont(GlyphContext &gc);

    virtual void First(GlyphContext &gc);
    virtual void Next(GlyphContext &gc);

    virtual bool IsDone(GlyphContext &gc);
    virtual Glyph* Current(GlyphContext &gc);

    virtual void Insert(Glyph *glyph, GlyphContext &gc);
    virtual void Remove(GlyphContext &gc);

protected:
    Glyph();
};

#endif // GLYPH_H
