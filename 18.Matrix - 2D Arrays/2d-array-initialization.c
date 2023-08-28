#include <stdio.h>

int main() {
  int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int mat1[2][3] = {{5, 6}, {7}};

  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      printf("mat1[%d][%d] = %d\n", i, j, mat1[i][j]);

  printf("\n");

  int mat2[4][3] = {{1, 2}, {4, 5, 6}, {10}};
  for (int i = 0; i < 4; i++)
    for (int j = 0; j < 3; j++)
      printf("mat2[%d][%d] = %d\n", i, j, mat2[i][j]);

  printf("\n");

  double mat3[3][2] = {{}, {5.2, 1.0}, {3.3}};
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 2; j++)
      printf("mat3[%d][%d] = %.1f\n", i, j, mat3[i][j]);

  printf("\n");

  int mat4[2][3] = {5, 3, 1, 6, 5};
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      printf("mat4[%d][%d] = %d\n", i, j, mat4[i][j]);
  return 0;
}
