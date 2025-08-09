#include <bits/stdc++.h>

void merge(std::vector<int>& leftArray, std::vector<int>& rightArray, std::vector<int>& vec){
    int leftIdx = 0, rightIdx = 0, idx = 0;

    while(leftIdx < leftArray.size() && rightIdx < rightArray.size()){
        if(leftArray[leftIdx] < rightArray[rightIdx]){
            vec[idx] = leftArray[leftIdx];
            leftIdx++;
        }else{
            vec[idx] = rightArray[rightIdx];
            rightIdx++;
        }
        idx++;
    }

    while(leftIdx < leftArray.size()){
        vec[idx] =  leftArray[leftIdx];
        leftIdx++;
        idx++;
    }

    while(rightIdx < rightArray.size()){
        vec[idx] = rightArray[rightIdx];
        rightIdx++;
        idx++;
    }
}

void mergeSort(std::vector<int>& vec){
    if(vec.size() <= 1) return;
    
    int middle = vec.size() / 2;

    std::vector<int> leftArray(vec.begin(), vec.begin() + middle);  
    std::vector<int> rightArray(vec.begin() + middle, vec.end());

    mergeSort(leftArray);
    mergeSort(rightArray);
    merge(leftArray, rightArray, vec);
}

int main(void){
    std::vector<int> arr = {4, 1, 5, 2, 3};
    mergeSort(arr);

    for(int i = 0; i < arr.size(); i++){
        std::cout << arr[i] << "\n";
    }
}