// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33

#include <iostream>
#include <vector>
using namespace std;

void generateSpiralArray(int n) {
    vector<vector<int>> spiral(n, vector<int>(n, 0));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int value = 1;

    while (top <= bottom && left <= right) {
        // Fill top row
        for (int i = left; i <= right; ++i) {
            spiral[top][i] = value++;
        }
        top++;

        // Fill right column
        for (int i = top; i <= bottom; ++i) {
            spiral[i][right] = value++;
        }
        right--;

        // Fill bottom row
        for (int i = right; i >= left; --i) {
            spiral[bottom][i] = value++;
        }
        bottom--;

        // Fill left column
        for (int i = bottom; i >= top; --i) {
            spiral[i][left] = value++;
        }
        left++;
    }

    // Print the spiral array
    for (const auto& row : spiral) {
        for (int num : row) {
            cout << num << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the spiral array (n): ";
    cin >> n;

    if (n > 0) {
        generateSpiralArray(n);
    } else {
        cout << "Please enter a positive integer." << endl;
    }

    return 0;
}
