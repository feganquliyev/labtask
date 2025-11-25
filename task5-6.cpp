#include <iostream>
#include <cmath>
using namespace std;
void ters(int x){
    int new_n = 0;
    int temp = x;
    int temp_1 = x;
    int count = 0;
    while(temp != 0){
        count = count + 1;
        temp = temp / 10;
    }
    count = count - 1;
    while(temp_1 != 0){
        new_n = new_n + (temp_1 % 10) * pow(10, count);
        temp_1 = temp_1 / 10;
        count = count - 1;
    }
    if (x == new_n){
        cout << "Beraberdir.";
    } else{
        cout << "Beraber deyil.";
    }
}
int main(){
    int a;
    cin >> a;
    ters(a);
}