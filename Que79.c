/*Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse diagonals starting from the first row
    for (int line = 1; line <= (rows + cols - 1); line++) {
        int start_col = (line <= cols) ? 1 : (line - cols + 1);
        int count = (line <= cols) ? line : (cols - start_col + 1);

        for (int j = 0; j < count; j++) {
            int row = (line <= cols) ? j : (start_col + j - 1);
            int col = (line <= cols) ? (line - j - 1) : (cols - j - 1);
            printf("%d ", matrix[row][col]);
        }
    }

    printf("\n");
    return 0;
}
