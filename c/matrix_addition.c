#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
      for (i = 0; i < 3; i++) {
          for (j = 0; j < 3; j++) {
              matrix[i][j] = i + j;
          }
      }
    printf("Matrix created using a nested for loop:\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matrix[i][j]);
            }
    printf("\n");
        }
    return 0;
}
