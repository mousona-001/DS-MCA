/*Write a program that reads two 2D matrices from the console, verifies if matrices
multiplication is possible or not. Then multiplies the matrices and prints the 3rd matrices.*/
#include<stdio.h>
#define MAX 10
int main(){
  int matrix1[MAX][MAX];
  int matrix2[MAX][MAX];
  int sum[MAX][MAX];
  int row1, col1, row2, col2;
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &row1, &col1);
  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &row2, &col2);
  if(col1 != row2){
    printf("Matrix multiplication is not possible\n");
    return 0;
  }
  printf("Enter the elements of the first matrix: \n");
  for(int i = 0; i < row1; i++){
    for(int j = 0; j < col1; j++){
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter the elements of the second matrix: \n");
  for(int i = 0; i < row2; i++){
    for(int j = 0; j < col2; j++){
      scanf("%d", &matrix2[i][j]);
    }
  }
  printf("The first matrix is: \n");
  for(int i = 0; i < row1; i++){
    for(int j = 0; j < col1; j++){
      printf("%d ", matrix1[i][j]);
    }
    printf("\n");
  }
  printf("The second matrix is: \n");
  for(int i = 0; i < row2; i++){
    for(int j = 0; j < col2; j++){
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }
  for(int i = 0; i < row1; i++){
    for(int j = 0; j < col2; j++){
      sum[i][j] = 0;
      for(int k = 0; k < col1; k++){
        sum[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  printf("The resultant matrix is: \n");
  for(int i = 0; i < row1; i++){
    for(int j = 0; j < col2; j++){
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
  return 0;
}