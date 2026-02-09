#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 15

int maze[ROWS][COLS];

void generateMaze() {
    srand(time(NULL));
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            maze[i][j] = (rand() % 3 == 0) ? 1 : 0; // 1=牆, 0=路
        }
    }
    maze[0][0] = 0;          // 起點
    maze[ROWS-1][COLS-1] = 0; // 終點
}

void printMaze() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0 && j == 0)
                printf("S"); // Start
            else if (i == ROWS-1 && j == COLS-1)
                printf("E"); // End
            else if (maze[i][j] == 1)
                printf("#"); // Wall
            else
                printf("."); // Path
        }
        printf("\n");
    }
}

int main() {
    generateMaze();
    printMaze();
    printf("\nThis is your random maze!\n");
    return 0;
}
