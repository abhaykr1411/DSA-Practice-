#include <bits/stdc++.h>

int main(void){
    int num = 0;
    std::cin >> num;

    if(num == 1 || num == 0){
        std::cout << "neither prime not composite\n";
        return 0;
    }
    for(int i = 2; i * i <= num; i++){
        if(num % i == 0){
            std::cout << "not prime\n";
            return 0;
        }
    }
    std::cout << "prime\n";
}