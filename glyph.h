#ifndef GLYPH_H
#define GLYPH_H


class Glyph
{
public:
    Glyph();
    ~Glyph();
	
	// appearance
	virtual void Draw(Window*);
	virtual void Bounds(Rect&);
	
	// hit detection
	virtual bool Intersects(const Point&);
	
	// structure
	virtual void Insert(Glyph*, int);
	virtual void Remove(Glyph*);
	virtual Glyph* Child(int);
	virtual Glyph* Parent();
};

#endif // GLYPH_H
