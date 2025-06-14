#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int Size = 10;
int main() {
    srand(time(NULL));
    int arr[Size];
    for (int i = 0; i < Size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    int* p = arr ;
    for (int i = 0; i < Size / 2; i++) {
        int temp = *(p + i);
        *(p + i) = *(p + Size - 1 - i);
        *(p + Size - 1 - i) = temp;
    }
    for (int i = 0; i < Size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
