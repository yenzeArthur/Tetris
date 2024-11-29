
#include "tetris.h"
#include <stdio.h>

int orientation = 1;

int main() {
    init_display();
    place_tetrimino_O(1, 4);
    show_screen();
    return 0;
}
