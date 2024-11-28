#include "tetris.h"

void place_tetrimino_S(int row, int col, int *orientation) {
    *orientation = (*orientation + 1) % 2;
    clear_tetrimino(row, col);

    if (*orientation == 0) { //S as we know it
        if (row >= 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row, col + 1, 2);
            place_horizontal(row + 1, col, 2);
        }
    } 
    
    else if (*orientation == 1) { //S standing (receiving a standing ovation)
        if (row >= 0 && row + 2 < ROWS && col >= 0 && col + 1 < COLS) {
            place_vertical(row, col + 1, 2);       
            place_vertical(row + 1, col, 2);
        }
    }
}