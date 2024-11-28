
#ifndef TETRIS_H
    #define TETRIS_H
    
    #define ROWS 20
    #define COLS 10

    char grid[ROWS][COLS];

    extern int orientation;

    void init_display();
    void show_screen();
    void clear_tetrimino(int row, int col);
    void place_tetrimino_O(int row, int col);
    void place_vertical(int row, int col, int length);
    void place_horizontal(int row, int col, int length);
    void place_tetrimino_I(int row, int col, int *orientation);
    void place_tetrimino_T(int row, int col, int *orientation);
    void place_tetrimino_J(int row, int col, int *orientation);
    void place_tetrimino_L(int row, int col, int *orientation);
    void place_tetrimino_S(int row, int col, int *orientation);
    void place_tetrimino_Z(int row, int col, int *orientation);

#endif 