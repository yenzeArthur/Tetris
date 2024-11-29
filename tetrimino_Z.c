#include "tetris.h"

void place_tetrimino_Z(int row, int col, int *orientation) {
    clear_tetrimino(row, col);

    if (*orientation == 0) { // Z as we know it.
        if (row >= 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row, col, 2);          
            place_horizontal(row + 1, col + 1, 2); 
        }
    } 
    
    else if (*orientation == 1) { // Z flipped to make N
        if (row >= 0 && row + 2 < ROWS && col > 0 && col < COLS) {
            place_vertical(row, col, 2);           
            place_vertical(row + 1, col - 1, 2);   
        }
    }
}