#include "tetris.h"

void place_tetrimino_J(int row, int col){
    if(row >= 0 && row + 3 <= ROWS && col >= 1 && col <= COLS - 1){
        // place the row part of "J"
        for (int i = 0; i < 3; i++) {
            if(grid[row + i][col] == '.'){
                grid[row + i][col] = '#';
            }
        }
        // place a point before the start position in line with the last # to make it look like J
        if(grid[row + 2][col - 1] == '.'){
            grid[row + 2][col - 1] = '#';
        }
    }
}