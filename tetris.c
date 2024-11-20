#include <stdio.h>

#define ROWS 20
#define COLS 10

char grid[ROWS][COLS];

int start_row = 0;            // Top row
int start_col = COLS / 2 - 1; // Center horizontally

void init_display();
void show_screen();
void place_tetrimino_I();
void place_tetrimino_T();
void place_tetrimino_O();
void place_tetrimino_J();
void place_tetrimino_L();
void place_tetrimino_S();
void place_tetrimino_Z();
void place_tetrimino_N();

int main() {
    init_display();
    place_tetrimino_N();
    show_screen();
    return 0;
}

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

void place_tetrimino_I() {
    for (int i = 0; i < 4; i++) {
        grid[i][start_col] = '#';
    }
}

void place_tetrimino_T() {

    // Place the horizontal part of the "T"
    for (int j = 0; j < 3; j++) {
        grid[start_row][start_col + j] = '#';
    }

    // Place the vertical part of the "T"
    grid[start_row + 1][start_col + 1] = '#';
}

void place_tetrimino_O(){
    //the first horizontal part of the "0"
    int j;
    for(j=0; j<2; j++){
        grid[start_row][start_col + j] = '#';
    }
    //the bottom half of the "O"
    for(j=0; j<2; j++){
        grid[start_row + 1][start_col + j] = '#';
    }
}

void place_tetrimino_J(){
    // place the row part of "J"
    for (int i = 0; i < 3; i++) {
        grid[i][start_col] = '#';
    }
    // place a point before the start position in line with the last # to make it look like J
    grid[start_row + 2][start_col - 1] = '#';
}

void place_tetrimino_L(){
    // place the row part of "L"
    for (int i = 0; i < 3; i++) {
        grid[i][start_col] = '#';
    }
    // place a point after the start position in line with the last # to make it look like J
    grid[start_row + 2][start_col + 1] = '#';
}

void place_tetrimino_S(){
    int j;

    for(j=0; j<2; j++){
        grid[start_row ][start_col + j] = '#';
    }

    for(j=0; j<2; j++){
        grid[start_row + 1][start_col - j] = '#';
    }
}

void place_tetrimino_Z(){
    int j;

    for(j=0; j<2; j++){
        grid[start_row ][start_col - j] = '#';
    }

    for(j=0; j<2; j++){
        grid[start_row + 1][start_col + j] = '#';
    }
}

void place_tetrimino_N(){
    int i;
    for (i = 0; i < 2; i++) {
        grid[i][start_col] = '#';
    }

    for (i = 0; i < 2; i++) {
        grid[i + 1][start_col - 1] = '#';
    }
}