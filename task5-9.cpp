#include <iostream>
#include <cmath>
using namespace std;
void sade(int x){
    int lamp = 1;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0){
            lamp = 0;
            break;
        }
    }
    if (lamp == 1){
        cout << "Sade ededdir.";
    }
    else{
        cout << "Sade eded deyil.";
    }
}
int main(){
    int n;
    cin >> n;
    sade(n);
}