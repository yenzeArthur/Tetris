
#include "tetris.h"

void place_tetrimino_T(int row, int col, int *orientation) {
    clear_tetrimino(row, col);

    if (*orientation == 0) { // the T as we know it
        if (row >= 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row + 1][col + 1] = '#';
        }
    } 
    
    else if (*orientation == 1) { // the T vertical facing the left
        if (row > 0 && row + 2 < ROWS && col > 0 && col + 1 < COLS) {
            place_vertical(row, col + 1, 3);
            grid[row + 1][col] = '#';
        }
    } 
    
    else if (*orientation == 2) { // the T flipped on iss back facing up
        if (row >= 0 && row + 1 < ROWS && col > 0 && col + 2 < COLS) {
            place_horizontal(row + 1, col, 3);
            grid[row][col + 1] = '#';
        }
    } 
    
    else if (*orientation == 3) { // the only time T gets to be right
        if (row >= 0 && row + 2 < ROWS && col >= 0 && col < COLS) {
            place_vertical(row, col, 3);
            grid[row + 1][col + 1] = '#';
        }
    }
}