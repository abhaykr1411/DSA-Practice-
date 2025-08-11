#include <bits/stdc++.h>

int main(void){
    std::vector<int> vec = {1, 2, 3, 4, 5};
    for(int i = 0; i < vec.size() - 1; i++){
        if(vec[i] > vec[i + 1])
        {
            std::cout << "Not sorted\n";
            return 0;
        }
    }
    std::cout << "Sorted \n";
}