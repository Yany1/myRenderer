#include <utility>
#include "line.h"
#include "tgaImage.h"

Line::Line(std::pair<int, int> _start, std::pair<int, int> _end, TGAColor _color)
    : start(_start), end(_end), color(_color)
{ }

/**
 * Note on Brensenham:
 * 
 * p0 = 2 * dy - dx
 * pi + 1 = pi + 2dy - 2dx(yi+1 - yi)
 */
void Line::draw(TGAImage& image) {
    int dx = end.first - start.first;
    int dy = end.second - start.second;

    int p = 2 * dy - dx;
    if (abs(dy) > abs(dx)) {
        for (int y = start.second, x = start.first; y <= end.second; y++) {
            image.set(x, y, color);

            if (p > 0) {
                x++;
                p = p + 2 * dx - 2 * dy;
            }
            else
                p = p + 2 * dx;
        }
    }
    else {
        for (int x = start.first, y = start.second; x <= end.first; x++) {
            image.set(x, y, color);

            if (p > 0) {
                y++;
                p = p + 2 * dy - 2 * dx;
            }
            else
                p = p + 2 * dy;
        }
    }
}