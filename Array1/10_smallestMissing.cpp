#include <iostream>
using namespace std;
int main() {
    //           0  1  2  3  4
    int arr[] = {1, 2, 4, 5, 6}, n = 5;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            cout << i + 1 << " ";
            break;
        }
        i++;
    }
}
