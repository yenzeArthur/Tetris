#include "tetris.h"

void place_tetrimino_T(int row, int col) {
    if(row >= 0 && row <= ROWS && col >= 0 && col + 3 <=COLS){
        // Place the horizontal part of the "T"
        for (int j = 0; j < 3; j++) {
            if(grid[row][col + j] == '.'){
                grid[row][col + j] = '#';
            }
        }

        // Place the vertical part of the "T"
        if(grid[row + 1][col + 1] == '.'){
            grid[row + 1][col + 1] = '#';
        }
    }
}