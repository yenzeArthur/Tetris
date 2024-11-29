
#include "tetris.h"

void place_tetrimino_J(int row, int col, int *orientation) {
    clear_tetrimino(row, col);

    if (*orientation == 0) { // Default J
        if (row + 2 < ROWS && col > 0 && col < COLS) {
            place_vertical(row, col, 3);
            grid[row + 2][col - 1] = '#';
        }
    } 
    else if (*orientation == 1) { // J flipped up
        if (row > 0 && row < ROWS && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row - 1][col] = '#';
        }
    } 
    else if (*orientation == 2) { // J rotated right
        if (row + 2 < ROWS && col + 1 < COLS) {
            place_vertical(row, col, 3);
            grid[row][col + 1] = '#';
        }
    } 
    else if (*orientation == 3) { // J facing down
        if (row + 1 < ROWS && col + 2 < COLS) {
            place_horizontal(row, col, 3);
            grid[row + 1][col + 2] = '#';
        }
    }
}
