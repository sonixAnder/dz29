#include <iostream>
#include <vector>
using namespace std;

// Функция для транспонирования матрицы
vector<vector<int>> transpose(const vector<vector<int>>& matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Создаем новую матрицу с перевернутыми размерами
    vector<vector<int>> transposed(cols, vector<int>(rows));


    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

int main()
{

    vector<vector<int>> matrix = { {1, 2, 3}, {4, 5, 6} };
    vector<vector<int>> transposedMatrix = transpose(matrix);

    for (const auto& row : transposedMatrix)
    {
        for (int element : row)
        {
            cout << element << " ";
        }
        cout << std::endl;
    }

    return 0;
}