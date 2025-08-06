#include <bits/stdc++.h>

void ReverseArray(int* arr, int start, int end){
    if(start >= end)
        return; 
    std::swap(arr[start], arr[end]);
    ReverseArray(arr, start + 1, end - 1);
}

int main(void){
    int arr[] = {5, 3, 5, 2, 1, 6};
    
    ReverseArray(arr, 0, 5);
    for(int val : arr){
        std::cout << val << " ";
    }
    std::cout << "\n";
}