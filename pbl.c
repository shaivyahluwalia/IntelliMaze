#include <stdio.h>
#define N 5

int maze[N][N] = {
    {1, 0, 1, 1, 1},
    {1, 1, 1, 0, 1},
    {0, 0, 0, 1, 1},
    {1, 1, 1, 1, 0},
    {1, 0, 0, 1, 1}
};
int solution[N][N];

int isSafe(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}
int solveMaze(int x, int y) {
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) {
        solution[x][y] = 1;
        return 1;
    }
    if (isSafe(x, y)) {
        if (solution[x][y] == 1) return 0; 
        solution[x][y] = 1;
        if (solveMaze(x + 1, y)) return 1;
        if (solveMaze(x, y + 1)) return 1;
        if (solveMaze(x - 1, y)) return 1;
        if (solveMaze(x, y - 1)) return 1;
        solution[x][y] = 0;
        return 0;
    }
    return 0;
}

void printSolution() {
    printf("Solution Path (red 1 = path taken, 0 = blocked):\n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (solution[i][j] == 1)
                printf("\033[1;32m%d \033[0m", solution[i][j]); 
            else
                printf("\033[2;31m%d \033[0m", solution[i][j]);
        }
        printf("\n");
    }
}

int main() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            solution[i][j] = 0;

    if (solveMaze(0, 0))
        printSolution();
    else
        printf("No solution found!\n");

    return 0;
}
