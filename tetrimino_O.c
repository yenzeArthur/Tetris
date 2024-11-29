#include "tetris.h"

void place_tetrimino_O(int row, int col){
    if(row >= 0 && row <= ROWS && col >= 0 && col + 2 <= COLS){
        place_horizontal(row, col, 2);
        place_horizontal(row + 1, col, 2);
    }
}