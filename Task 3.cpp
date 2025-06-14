#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main(){
    const int size = 10;
    srand(time(NULL));
    int arr[size];
    int copy[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << "\n";
    int* p1 = arr;               
    int* p2 = copy + size - 1;
    for (int i = 0; i < size; i++) {
        *p2 = *p1;
        p1++;
        p2--;
    }
    for (int i = 0; i < size; i++) {
        cout << copy[i] << " ";
    }
    return 0;
}
