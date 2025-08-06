#include <bits/stdc++.h>

int main(void){
    std::vector<int> vec = {5, 1, 4, 2, 8};
    bool swaped = true;

    while(swaped){
        swaped = false;
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i] > vec[i + 1]){
                swaped = true;
                std::swap(vec[i], vec[i + 1]);
            }
        }
    }

    for(int i = 0; i < vec.size(); i++){
        std::cout << vec[i] << "\n";
    }
}