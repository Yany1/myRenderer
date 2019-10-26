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

    image.write_tga_file("temp.tga");

    return 0;
}