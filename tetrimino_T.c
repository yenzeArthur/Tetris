
#include "tetris.h"

void place_tetrimino_T(int row, int col, int *orientation) {
    *orientation = (*orientation + 1) % 4;
    clear_tetrimino(row, col);

    if (*orientation == 0) { // Up
        if (row >= 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row + 1][col + 1] = '#';
        }
    } 
    
    else if (*orientation == 1) { // Right
        if (row >= 0 && row + 2 < ROWS && col >= 0 && col + 1 < COLS) {
            place_vertical(row, col + 1, 3);
            grid[row + 1][col] = '#';
        }
    } 
    
    else if (*orientation == 2) { // Down
        if (row >= 0 && row + 1 < ROWS && col > 0 && col + 2 < COLS) {
            place_horizontal(row + 1, col, 3);
            grid[row][col + 1] = '#';
        }
    } 
    
    else if (*orientation == 3) { // Left
        if (row > 0 && row + 2 < ROWS && col >= 0 && col < COLS) {
            place_vertical(row, col, 3);
            grid[row + 1][col + 1] = '#';
        }
    }
}