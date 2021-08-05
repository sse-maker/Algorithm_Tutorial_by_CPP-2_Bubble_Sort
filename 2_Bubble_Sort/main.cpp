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
    BubbleSort();
    ~BubbleSort();
    
    void Ascending();
    void Descending();
    void Print();
    
private:
    int n;
    int *arr;
};

int main() {
    BubbleSort *sort = new BubbleSort();
    sort->Ascending();
    sort->Print();
    sort->Descending();
    sort->Print();
    delete sort;
}

BubbleSort::BubbleSort() : arr(NULL) {
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

BubbleSort::~BubbleSort() {
    delete [] arr;
    arr = NULL;
}

void BubbleSort::Ascending() {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j - 1] > arr[j]) {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void BubbleSort::Descending() {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (arr[j - 1] < arr[j]) {
                swap(arr[j - 1], arr[j]);
            }
        }
    }
}

void BubbleSort::Print() {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
