#include <bits/stdc++.h>

int main(void){
    int num = 36;
    int divisorCount = 0;

    for(int i = 1; i * i <= num; i++)
    {
        if(num % i == 0){
            if(i == num / i){
                divisorCount++;
            }else{
                divisorCount += 2;
            }
        }
    }
    std::cout << divisorCount << "\n";
}