/**
 * Write a program to multiply two matrices taking user inputs for
 * matrix size and matrix elements using function and pointer.
 */

#include <stdio.h>

void getMatrixSize(char name, int *row, int *column);
int validateSize(int row, int column);
void getMatrixElements(char name, int row, int column, int (*matrix)[10]);
void multiplyMatrices(int row, int column, int iteration, int first[][10], int second[][10], int (*product)[10]);
void printMatrixElements(int row, int column, int matrix[][10]);

int main()
{
  int first[10][10], second[10][10], product[10][10], r1, c1, r2, c2, isValid;

  getMatrixSize('A', &r1, &c1);
  getMatrixSize('B', &r2, &c2);

  isValid = validateSize(c1, r2);

  if (isValid == 0)
  {
    printf("Error!!!\nPlease check the size of rows and columns.");
  }
  else
  {

    getMatrixElements('A', r1, c1, first);
    getMatrixElements('B', r2, c2, second);

    multiplyMatrices(r1, c2, r2, first, second, product);

    printMatrixElements(r1, c2, product);
  }

  return 0;
}

void getMatrixSize(char name, int *row, int *column)
{
  printf("Enter rows and columns for matrix %c:\n", name);
  scanf("%d%d", row, column);
}

int validateSize(int row, int column)
{
  if (row == column)
    return 1;
  else
    return 0;
}

void getMatrixElements(char name, int row, int column, int (*matrix)[10])
{
  int i, j;

  printf("Enter elements for matrix %c:\n", name);
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("%c[%d][%d]=", name, i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
    }
  }
}

void multiplyMatrices(int row, int column, int iteration, int first[][10], int second[][10], int (*product)[10])
{
  int i, j, k, sum;

  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      sum = 0;
      for (k = 0; k < iteration; k++)
      {
        sum += first[i][k] * second[k][j];
      }
      product[i][j] = sum;
    }
  }
}

void printMatrixElements(int row, int column, int matrix[][10])
{
  int i, j;

  printf("Product of given matrices:\n");
  for (i = 0; i < row; i++)
  {
    for (j = 0; j < column; j++)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}
