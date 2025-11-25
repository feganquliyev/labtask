#include <iostream>
#include <cmath>
using namespace std;
void sade_ededler(int x){
    for(int i = 2; i < x; i++){
        int lamp = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                lamp = 0;
            }
        }
        if (lamp == 1){
            cout << i << endl;
        }
    }
}
int main(){
    int N;
    cin >> N;
    sade_ededler(N);
}