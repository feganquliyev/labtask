#include <iostream>
#include <string>
using namespace std;
#include <cmath>
void power(int x, int y){
    cout << pow(x, y) << endl;
}
int main(){
    int a;
    cin >> a;
    power(a, 2);
    power(a, 3);
}