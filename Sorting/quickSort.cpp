#include <bits/stdc++.h>

// int Partition(std::vector<int>& arr, int start, int end){
//     int pivot = arr[end];
//     int i = start - 1;

//     for(int j = start; j <= end - 1; j++){
//         if(arr[j] < pivot){
//             i++;
//             std::swap(arr[i], arr[j]);
//         }
//     }
//     i++;
//     std::swap(arr[i], arr[end]);
//     return i;
// }

// void QuickSort(std::vector<int>& arr, int start, int end){
//     if(start >= end) return;

//     int pivot = Partition(arr, start, end);
//     QuickSort(arr, start, pivot - 1);
//     QuickSort(arr, pivot + 1, end);
// }

int Partition(std::vector<int>& vec, int start, int end){
    int i = start - 1;
    int pivot = vec[end];
    
    for(int j = start; j <= end; j++){
        if(vec[j] < pivot)
        {
            i++;
            std::swap(vec[i], vec[j]);
        }
    }
    i++;
    std::swap(vec[i], vec[end]);
    return i;
}

void QuickSort(std::vector<int>& vec, int start, int end){
    if(start >= end) return;
    int pivot = Partition(vec, start, end);

    QuickSort(vec, start, pivot - 1);
    QuickSort(vec, pivot + 1, end);
}

int main(void){
    std::vector<int> vec = {1, 5, 2, 3, 4};
    QuickSort(vec, 0, vec.size() - 1);
    for(int val : vec){
        std::cout << val << "\n";
    }
}