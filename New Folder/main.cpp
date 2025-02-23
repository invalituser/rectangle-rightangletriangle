#include<iostream>
using namespace std;
int main(){
    cout << "Program to calculate area of rectangle, right angle triangle!\n Press which you want: \n1. Rectangle \t2. R.A triangle: ";
    char x; cin >> x; float a,b,A; 
    switch(x){
        case '1': 
            cout << "enter a: "; cin >> a;
            cout << "\nenter b: "; cin >> b;
            A = a*b; cout << "\nA = " << A <<endl;
            break;
        case '2':
            cout << "enter a: "; cin >> a;
            cout << "\nenter b: "; cin >> b;
            A = (a*b)/2; cout << "\nA = " << A<<endl;
            break;
    }

    return 0;
}