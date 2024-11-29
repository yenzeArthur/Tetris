
#include "tetris.h"
#include <stdio.h>

int orientation = 1;

int main() {
    init_display();
    place_tetrimino_O(1, 4);
    show_screen();
    return 0;
}

#include <stdlib.h>
#include <time.h>
#include "tetris.h"

// Function to check if a position is valid
int is_valid_position(int row, int col, int *orientation, void (*place_tetrimino)(int, int, int *)) {
    // Temporarily place the tetrimino and check for collisions
    clear_tetrimino(row, col);
    place_tetrimino(row, col, orientation);
    // Check grid boundaries or overlap
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (grid[i][j] == '#' && (i >= ROWS || j >= COLS || j < 0)) {
                return 0;
            }
        }
    }
    return 1;
}

// Main game loop
int main() {
    srand(time(NULL)); // Seed random generator
    init_display();
    int row = 0, col = COLS / 2; // Start in the middle
    int orientation = 0;
    void (*current_piece)(int, int, int *) = place_tetrimino_I; // Example: use I-piece

    while (1) {
        clear_tetrimino(row, col);
        if (is_valid_position(row + 1, col, &orientation, current_piece)) {
            row++; // Move down
        } else {
            current_piece(row, col, &orientation); // Lock piece in place
            break; // Generate new piece after locking
        }
        current_piece(row, col, &orientation);
        show_screen();
        // Add delay for better visualization
    }
    return 0;
}
