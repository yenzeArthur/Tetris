#include <stdio.h>
#include "tetris.h"

void init_display() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            grid[i][j] = '.';
        }
    }
}

void show_screen() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}

void clear_tetrimino(int row, int col) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == '#') {
                grid[i][j] = '.'; 
            }
        }
    }
}

void place_horizontal(int row, int col, int length) {
    for (int j = 0; j < length; j++) {
        if (col + j < COLS) {
            grid[row][col + j] = '#';
        }
    }
}

void place_vertical(int row, int col, int length) {
    for (int i = 0; i < length; i++) {
        if (row + i < ROWS) {
            grid[row + i][col] = '#';
        }
    }
}