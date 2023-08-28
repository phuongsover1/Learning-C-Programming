#include <stdio.h>

int main() {
  int mat[2][3] = {{1, 3, 5}, {2, 4, 6}};

  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 3; j++)
      printf("Memory representation for mat[%d][%d] = %#x\n", i, j, &mat[i][j]);
  return 0;
}
