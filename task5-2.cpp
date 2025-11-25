#include <iostream>
using namespace std;
void grade(int x){
    if (x <= 50){
        cout << "F" << endl;
    }
    else if(x >= 51 && x <= 60){
        cout << "E" << endl;
    }
    else if(x >= 61 && x <= 70){
        cout << "D" << endl;
    }
    else if(x >= 71 && x <= 80){
        cout << "C" << endl;
    }
    else if(x >= 81 && x <= 90){
        cout << "B" << endl;
    }
    else if(x >= 91 && x <= 100){
        cout << "A" << endl;
    }
}
int main(){
    int a;
    cin >> a;
    grade(a);
}