#include <iostream>
using namespace std;
void faktorial(int x){
    for(int j = 1; j <= x; j++){
        int f = 1;
        int y;
        cin >> y;
        for(int i = 1; i <= y; i++){
            f = f * i;
        }
        cout << f << endl;
    }
}
int main(){
    int say;
    cin >> say;
    faktorial(say);
}