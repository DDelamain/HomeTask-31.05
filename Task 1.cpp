#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
const int Size = 10;
int main() {
    srand(time(NULL));
    int first[Size], second[Size];
    for (int i = 0; i < Size; i++) {
        first[i] = rand() % 100;
        cout << first[i] << " ";
    }
    cout << "\n";
    int* pa = first;
    int* pb = second;
    for (int i = 0; i < Size; i++) {
        *(pb + i) = *(pa + i);
    }
    for (int i = 0; i < Size; i++) {
        cout << second[i] << " ";
    }
    return 0;
}