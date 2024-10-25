#include <iostream>
using namespace std;

int ReadNumber(string Message){
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void printValues(int Num){
    for (int i = 1; i <= Num; i++) {
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    printValues(ReadNumber("Please Enter Your Number: "));
    
}
