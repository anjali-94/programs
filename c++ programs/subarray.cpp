#include <iostream>
using namespace std;

int main() 
{
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
    int chunkSize = 3;
    int arraySize = sizeof(originalArray) / sizeof(originalArray[0]);

    for (int i = 0; i < arraySize; i += chunkSize) {
        int subarray[chunkSize];
        int subarraySize = min(chunkSize, arraySize - i);

        for (int j = 0; j < subarraySize; j++) {
            subarray[j] = originalArray[i + j];
        }

        // Print the subarray
        for (int j = 0; j < subarraySize; j++) {
            cout << subarray[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}