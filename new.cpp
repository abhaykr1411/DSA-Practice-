#include <bits/stdc++.h>

void SelectionSort(std::vector<int>& vec){
    for(int start = 0; start < vec.size(); start++){
        int minIdx = start;
        for(int i = start; i < vec.size(); i++){
            if(vec[i] < vec[minIdx]){
                minIdx = i;
            }
        }
        std::swap(vec[start], vec[minIdx]);
    }
}

int main(void){
    std::vector<int> vec = {2, 1, 3, 5, 4};   

    SelectionSort(vec);
    
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << "\n";
    }
}