#include <bits/stdc++.h>

int main(void){
    std::vector<int> vec = {5, 3, 4, 1, 2};
       
    for(int i = 1; i < vec.size(); i++){
        int key = vec[i];
        int j = i - 1;

        while(key < vec[j] && j >= 0){
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    } 

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << "\n";
    }
}