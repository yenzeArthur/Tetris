
#include "tetris.h"

void place_tetrimino_I(int row, int col, int *orientation) {
    clear_tetrimino(row, col);

    if (*orientation == 0) { // I as we know it
        if (row + 3 < ROWS && col < COLS) {
            place_vertical(row, col, 4);
        }
    } 
    else if (*orientation == 1) { // I asleep
        if (row < ROWS && col + 3 < COLS) {
            place_horizontal(row, col, 4);
        }
    }
}
