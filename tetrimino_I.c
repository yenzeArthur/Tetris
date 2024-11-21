#include "tetris.h"

void place_tetrimino_I(int row, int col) {
    if(row >= 0 && row + 4 <= ROWS && col >= 0 && col <= COLS){
        for (int i = 0; i < 4; i++) {
            if(grid[i + row][col] == '.'){
                grid[i + row][col] = '#';
            }
        }
    }
}