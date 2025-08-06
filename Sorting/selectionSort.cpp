#include <bits/stdc++.h>
#include <climits>

int main(void){
    std::vector<int> vec = {64, 25, 12, 22, 11};
    for(int start = 0; start < vec.size(); start++){
        int minIdx = start;
        for(int i = start; i < vec.size(); i++){
            if(vec[i] < vec[minIdx]){
                minIdx = i;
            }
        }
        std::swap(vec[start], vec[minIdx]);
    }
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] <<"\n";
    }
}