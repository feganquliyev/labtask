#include <iostream>
using namespace std;
void calculator(int x, int y, char name){
    switch(name){
        case '*':
            cout << x * y << endl;
            break;
        case '+':
            cout << x + y << endl;
            break;
        case ':':
            if (y != 0){
                cout << x / y << endl;
            } else {
                cout << "Sifira bolunme yoxdur.";
            }
            break;
        case '-':
            cout << x - y << endl;
            break;
        default:
            cout << "Sehv operator daxil edilib.";
            break;
    }
}
int main(){
    int a,b;
    char op;
    cin >> op;
    cin >> a;
    cin >> b;
    calculator (a,b,op);
}