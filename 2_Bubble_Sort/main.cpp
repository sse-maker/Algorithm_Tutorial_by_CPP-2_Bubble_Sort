//
//  main.cpp
//  2_Bubble_Sort
//
//  Created by 세광 on 2021/06/22.
//

#include <iostream>

using namespace std;

class BubbleSort {
public:
    void Ascending(int n, int *arr);
    void Descending(int n, int *arr);
    void print(int n, int *arr);
};

int main() {
    BubbleSort sort;
    int arr[10] = { 1, 10, 5, 8, 7, 6, 4, 3, 2, 9 };
    sort.Ascending(10, arr);
    sort.print(10, arr);
    sort.Descending(10, arr);
    sort.print(10, arr);
}

void BubbleSort::Ascending(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n - i; j++) {
            if(arr[j - 1] > arr[j]) swap(arr[j - 1], arr[j]);
        }
    }
}

void BubbleSort::Descending(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n - i; j++) {
            if(arr[j - 1] < arr[j]) swap(arr[j - 1], arr[j]);
        }
    }
}

void BubbleSort::print(int n, int *arr) {
    for(int i = 0; i < 10; i++) { cout << arr[i] << ' '; }
    cout << endl;
}
