
#include "tetris.h"
#include <stdio.h>

int orientation = 0;

int main() {
    init_display();
    place_tetrimino_T(0, 4, &orientation);
    show_screen();
    return 0;
}
