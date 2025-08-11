#include <bits/stdc++.h>

int main(void){
    std::vector<int> vec = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int i = 0;
    for(int j = 0; j < vec.size() - 1; j++){
        if(vec[j] != vec[j + 1]){
            i++;
            vec[i] = vec[j+1];
        }
    }
    
    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << "\n";
    }
    std::cout << "\n k = " << i + 1 << "\n"; 
}