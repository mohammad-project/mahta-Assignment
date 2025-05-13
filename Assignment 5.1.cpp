#include <iostream>
void takeNumber(int** matrix, int row,int col);
void display(int** matrix, int row,int col);
void doAll(int** matrix, int row,int col);
void displayCal(int* rowSum,int* colSum, int total,int mainD, int secD, int max, int min , int row , int col);
int main(){
  int row;
  int col;
  std:: cout << "give me row ";
  std:: cin >> row;
  std:: cout << "give me col";
  std:: cin>> col;
 int** matrix = new int* [row];
 for(int i =0; i < row; i++){
  matrix[i] = new int[col];
 }
 takeNumber(matrix,row,col);
 display(matrix,row,col);
 doAll(matrix, row, col);

}
void takeNumber(int** matrix, int row,int col){
  for(int i = 0 ; i <row; i++){
    for(int j = 0; j< col; j++){
      std::cout << "Element [" << i+1 << "][" << j+1 << "]: ";
      std::cin>> matrix[i][j];
    }
  }
}
void display(int** matrix, int row,int col){
  for(int i = 0 ; i <row; i++){
    for(int j = 0; j< col; j++){
      std::cout<< matrix[i][j] << ' ';
    }
    std::cout<< "\n";
  }
}
void doAll(int** matrix, int row,int col){
  int* rowSum = new int[row];
  int* colSum= new int[col];
  int total;
  int mainDiagonal;
  int secDiagonal;
  int max = matrix[0][0];
  int min = matrix[0][0];
  for(int i = 0 ; i <row; i++){
    for(int j = 0; j< col; j++){
      rowSum[i] += matrix[i][j];
      colSum[j] += matrix[i][j];
      total+= matrix[i][j];
      if(i == j){
        mainDiagonal += matrix[i][j];
      }
      if ( i + j == col - 1){
        secDiagonal += matrix [i][j];
      }
      if(matrix[i][j] > max){
        max = matrix[i][j];
      }
      if (matrix[i][j] < min){
        min = matrix[i][j];
      }
    }
  }
  displayCal( rowSum, colSum, total, mainDiagonal,  secDiagonal ,  max,  min , row ,col );
}
void displayCal(int* rowSum,int* colSum, int total,int mainD, int secD, int max, int min , int row , int col){
   for(int i =0; i < row; i++){
    std:: cout << " the sum of " << i+ 1 << "th row is: " << rowSum[i] << "\n";
 }
 for(int i =0; i < col; i++){
    std:: cout << " the sum of " << i+ 1 << "th col is: " << colSum[i] << "\n";
 }
 std:: cout << " the total sum of is : " << total << "\n";
 std:: cout << " the total sum of the main diagonal is : " << mainD << "\n";
 std:: cout << " the total sum of the second diagonal is : " << secD << "\n";
 std:: cout << "max element is : " << max << "\n";
 std:: cout << "min element is : " << min << "\n";
}