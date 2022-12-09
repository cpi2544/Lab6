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
        cout << "Enter an integer: ";
        cin >> i;
        if(i%2==0){
            O++;
        }else{
            E++;
        }
    }

    

    cout << "#Even numbers = " << E << "\n";
    cout << "#Odd numbers = " << O;
    return 0;
}
