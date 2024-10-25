#include <iostream>
using namespace std;

int ReadNumper(string Massage){
    int Numper = 0;
    do
    {
        cout << Massage;
        cin >> Numper; //5
    } while (Numper <= 0); // if Numper <= 0 try again
    return Numper;
}

void pritnvalues(int Num){
    for (int i = 1; i <= Num; i++)
    {
        for (int l = 1; l <= i; l++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    pritnvalues(ReadNumper(" Please Enter Your Number : "));
}
