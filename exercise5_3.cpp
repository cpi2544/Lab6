#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int cheetah(int x){
    int y = x/10;
    int z = y/3;
    int a = y%3;
    int b = 0;
    while (z >= 3){
        y += z;
        b += (z%3);
        z = z/3;
        
    }
    if((z+a+b) >= 3){
        y += ((z+a+b)/3);
    }
    y+=z;
    return y;
}

int main(){

   cout << cheetah(204);
    return 0;
}