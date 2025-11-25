#include <iostream>
#include <cmath>
using namespace std;
void bolenler(int x){
    for(int j = 1; j <= x; j++){
        int b;
        cin >> b;
        for(int i = 2; i <= b; i++){
            if (b % i == 0){
                cout << i << endl;
            }
        }
    }
}
int main(){
    int a;
    cin >> a;
    bolenler(a);
}