
#include "tetris.h"

void place_tetrimino_I(int row, int col, int *orientation) {
    // *orientation = (*orientation + 1) % 2;
    clear_tetrimino(row, col);

    if (*orientation == 0) { // Vertical
        if (row >= 0 && row + 3 < ROWS && col >= 0 && col < COLS) {
            place_vertical(row, col, 4);
        }
    } 
    
    else if (*orientation == 1) { // Horizontal
        if (row >= 0 && row < ROWS && col >= 0 && col + 3 < COLS) {
            place_horizontal(row, col, 4);
        }
    }
}
