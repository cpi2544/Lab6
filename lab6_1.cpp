#include<iostream>
using namespace std;

int main(){

    int i;
    int E=0;
    int O=0;
    cout << "Enter an integer: ";
    cin >> i;

    while (i!=0)
    {
        if(i%2==0){
            E++;
        }else{
            O++;
        }
        cout << "Enter an integer: ";
        cin >> i;
        
    }

    

    cout << "#Even numbers = " << E << "";
    cout << "#Odd numbers = " << O;
    return 0;
}
