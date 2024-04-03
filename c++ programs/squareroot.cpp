#include <iostream>
using namespace std;

int SquareRoot(int N) {
    int left = 1, right = N, result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;
         int Square = mid * mid;

        if (Square == N) {
            return mid;
        } 
        else if (Square < N) {
            left = mid + 1;
            result = mid; 
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int N = 25;
    int result = SquareRoot(N);
    cout << "Square root of " << N << " is " << result << endl;
    return 0;
}

