#ifndef LINE_H
#define LINE_H

#include <utility>
#include "tgaImage.h"

class Line {
    std::pair<int, int> start;
    std::pair<int, int> end;
    TGAColor color;

public:
    Line(std::pair<int, int> _start, std::pair<int, int> _end, TGAColor _color);

    /**
     * draw the line onto the TGA image object
     */
    void draw(TGAImage& image);
};

#endif // LINE_H