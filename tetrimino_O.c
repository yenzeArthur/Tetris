#include "tetris.h"

void place_tetrimino_O(int row, int col){
    int j;
    if(row >= 0 && row <= ROWS && col >= 0 && col + 2 <= COLS){
        //the first horizontal part of the "0"
        for(j=0; j<2; j++){
            if(grid[row][col + j] == '.'){
                grid[row][col + j] = '#';
            }
        }
        //the bottom half of the "O"
        for(j=0; j<2; j++){
            if(grid[row + 1][col + j] == '.'){
                grid[row + 1][col + j] = '#';
            }
        }
    }
}