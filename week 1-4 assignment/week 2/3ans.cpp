//3. 2D Array - Matrix Addition
// Write a C++ program that:
// - Takes two 2x2 matrices as input.
// - Adds the matrices.
// - Displays the resulting matrix.

#include <iostream>

int main() {
    const int SIZE = 2;
    int matrix1[SIZE][SIZE];
    int matrix2[SIZE][SIZE];
    int result[SIZE][SIZE];

    std::cout << "Enter elements of the first 2x2 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter elements of the second 2x2 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    std::cout << "Resultant matrix after addition:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
