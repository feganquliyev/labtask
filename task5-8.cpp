#include <iostream>
using namespace std;
void cem(int x){
    int cem = 0;
    for(int i = 1; i <= x; i++){
        cem = cem + i;
    }
    cout << cem << endl;
}
int main(){
    int n;
    cin >> n;
    cem(n);
}