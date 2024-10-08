/************************************
 * Автор: Важенин С.С               *
 * Дата:  08.10.2024                *
 * Название: Лабораторная работа №5 *
 ************************************/
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    srand(time(0));
    
    int matrixSize;
    matrixSize = rand() % 10 + 1;
    
    int matrix[matrixSize][matrixSize];

    cout << "Размер квадратной матрицы - " << matrixSize << endl;
    
    for (int matrixRow = 0; matrixRow < matrixSize; ++matrixRow) {
        for (int matrixColumn = 0; matrixColumn < matrixSize; ++matrixColumn) {
            matrix[matrixRow][matrixColumn] = rand() % 10;
        }
    }
    
    cout << "Данная матрица: " << endl;
    for (int matrixRow = 0; matrixRow < matrixSize; ++matrixRow) {
        for (int matrixColumn = 0; matrixColumn < matrixSize; ++matrixColumn) {
            cout << matrix[matrixRow][matrixColumn] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    int count = 0;
    
    for (int matrixRow = 1; matrixRow < matrixSize; ++matrixRow) {
        for (int matrixColumn = 0; matrixColumn < matrixRow; ++matrixColumn) {
            sum += matrix[matrixRow][matrixColumn];
            count++;
        }
    }

    cout << "Сумма элементов под главной диагональю: " << sum << endl;
    cout << "Количество элементов под главной диагональю: " << count << endl;
}