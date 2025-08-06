#include <bits/stdc++.h>

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a == 0) return b;
    return a;
}

int main(void){
    // std::cout << gcd(5, 15) << "\n";
    int arr[] = {1, 3, 2, 1, 3, 2, 3, 4, 5};
    std::unordered_map<int, int> mp;

    for(int i = 0; i < 9; i++){
        mp[arr[i]]++;
    }

    for(auto it : mp){
        std::cout << it.first << " and " << it.second << "\n";
    }
}