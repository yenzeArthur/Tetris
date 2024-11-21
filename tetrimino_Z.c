#include "tetris.h"

void place_tetrimino_Z(int row, int col){
    int j;
    if(row >= 0 && row <= ROWS && col >= 0 && col + 2 <= COLS){
        for(j=0; j<2; j++){
            if(grid[row][col - j] == '.'){
                grid[row][col - j] = '#';
            }
        }

        for(j=0; j<2; j++){
            if(grid[row + 1][col + j] == '.'){
                grid[row + 1][col + j] = '#';
            }
        }
    }
}