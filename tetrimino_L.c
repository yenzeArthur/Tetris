#include "tetris.h"

void place_tetrimino_L(int row, int col, int *orientation) {
    *orientation = (*orientation + 1) % 4;
    clear_tetrimino(row, col);

    if (*orientation == 0) { //L as we know it
        if (row >= 0 && row + 2 < ROWS && col >= 0 && col + 1 < COLS) {
            place_vertical(row, col, 3);           
            grid[row + 2][col + 1] = '#'; 
        }
    } 
    
    else if (*orientation == 1) { //L slept! L facing down
        if (row >= 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row, col, 3);  
            grid[row + 1][col + 2] = '#';
        }
    } 
    
    else if (*orientation == 2) { //L flipped and facing left. What in the J! 
        if (row >= 0 && row + 2 < ROWS && col > 0 && col < COLS) {
            place_vertical(row, col, 3);
            grid[row + 2][col - 1] = '#'; 
        }
    } 
    
    else if (*orientation == 3) { //L praising the Lord (facing up)
        if (row > 0 && row + 1 < ROWS && col >= 0 && col + 2 < COLS) {
            place_horizontal(row + 1, col, 3);
            grid[row - 1][col] = '#';      
        }
    }
}