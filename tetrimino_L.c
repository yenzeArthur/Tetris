#include "tetris.h"

void place_tetrimino_L(int row, int col, int *orientation) {
    clear_tetrimino(row, col);

    if (*orientation == 0) { // L facing down
        if (row + 2 < ROWS && col + 1 < COLS) {
            place_vertical(row, col, 3);
            grid[row + 2][col + 1] = '#';
        }
    } 
    else if (*orientation == 1) { // L facing right
        if (row + 1 < ROWS && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row + 1][col] = '#';
        }
    } 
    else if (*orientation == 2) { // L flipped, facing up
        if (row + 2 < ROWS && col > 0) {
            place_vertical(row, col, 3);
            grid[row][col - 1] = '#';
        }
    } 
    else if (*orientation == 3) { // L flipped, facing left
        if (row > 0 && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row - 1][col + 2] = '#';
        }
    }
}
