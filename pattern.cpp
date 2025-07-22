#include <iostream>

void rectanglePattern(int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
}

int main(void){
    rectanglePattern(5, 4);
}