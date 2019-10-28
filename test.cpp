#include <utility>
#include "line.h"
#include "tgaImage.h"

int main(int argc, char** argv) {
    TGAImage image(500, 500, 4);
    TGAColor green(0, 255, 0);
    TGAColor white(255, 255, 255);
    image.set(100, 100, green);
    image.set(100, 200, white);
    image.set(100, 300, green);
    image.set(200, 100, white);
    image.set(300, 300, white);

    Line l1(std::make_pair(200, 200), std::make_pair(400, 200), white);
    Line l2(std::make_pair(200, 200), std::make_pair(400, 300), green);
    Line l3(std::make_pair(200, 200), std::make_pair(200, 400), white);
    Line l4(std::make_pair(200, 200), std::make_pair(250, 450), green);

    l1.draw(image);
    l2.draw(image);
    l3.draw(image);
    l4.draw(image);

    image.write_tga_file("temp.tga");

    return 0;
}