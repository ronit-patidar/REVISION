#include <vector>
#include<iostream>


using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // First pass: Mark the first element of rows and columns with 0s
    bool firstRowZero = false, firstColZero = false;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                if (i == 0) firstRowZero = true;
                if (j == 0) firstColZero = true;
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    // Second pass: Set elements to 0 based on the marked rows and columns
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set the first row and column if necessary
    if (firstRowZero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    if (firstColZero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}
int main(){
    
}