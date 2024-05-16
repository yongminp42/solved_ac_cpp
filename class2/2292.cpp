#include <iostream>

using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n, min, max;
    
    cin >> n;
    
    if(n == 1){
        cout << 1;
        return 0;
    }
    
    min = 2;
    max = 7;
    
    for(int i = 1; i < 200000000; i++){
        if(n >= min && n <= max){
            cout << i + 1;
            break;
        }
        min += i * 6;
        max += (i + 1) * 6;
    }
    return 0;
}