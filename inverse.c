#include <stdio.h>

#define N 4

// Function to get cofactor of mat[p][q] in cof[][]. n is
// current dimension of mat[][]
void getCof(int mat[N][N], int cof[N][N], int p, int q, int n)
{
  int i = 0, j = 0;
  for (int row = 0; row < n; row++)
  {
    for (int col = 0; col < n; col++)
    {
      if (row != p && col != q)
      {
        cof[i][j++] = mat[row][col];
        if (j == n - 1)
        {
          j = 0;
          i++;
        }
      }
    }
  }
}

// Recursive function for finding determinant of matrix mat of dimension n
int getDet(int mat[N][N], int n)
{
  if (n == 1)
    return mat[0][0];
  int det = 0;

  int cof[N][N];
  int sign = 1;
  for (int f = 0; f < n; f++)
  {
    getCof(mat, cof, 0, f, n);
    det += sign * mat[0][f] * getDet(cof, n - 1);
    sign = -sign;
  }
  return det;
}

// Function to get adjoint of mat in adj
void adjoint(int mat[N][N], double adj[N][N])
{
  if (N == 1)
  {
    adj[0][0] = 1;
    return;
  }

  int sign = 1;
  int cof[N][N];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      getCof(mat, cof, i, j, N);
      sign = ((i + j) % 2 == 0) ? 1 : -1;
      adj[j][i] = sign * getDet(cof, N - 1);
    }
  }
}

// Function to calculate and store inverse, returns 0 if matrix is singular
int inverse(int mat[N][N], double inv[N][N])
{
  int det = getDet(mat, N);
  if (det == 0)
  {
    printf("Singular matrix, can't find its inverse\n");
    return 0;
  }

  double adj[N][N];
  adjoint(mat, adj);

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      inv[i][j] = adj[i][j] / det;

  return 1;
}

int main()
{
  int mat[N][N] = {{5, -2, 2, 7},
                   {1, 0, 0, 3},
                   {-3, 1, 5, 0},
                   {3, -1, -9, 4}};

  double adj[N][N];
  double inv[N][N];

  // Print the input matrix
  printf("Input matrix is:\n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  // Print the adjoint matrix
  printf("\nThe Adjoint is:\n");
  adjoint(mat, adj);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%lf ", adj[i][j]);
    }
    printf("\n");
  }

  // Print the inverse matrix if it exists
  printf("\nThe Inverse is:\n");
  if (inverse(mat, inv))
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        printf("%lf ", inv[i][j]);
      }
      printf("\n");
    }
  }
  return 0;
}
