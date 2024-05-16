#include <iostream>

using namespace std;

int main(){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int a, b, v, days, x;
    
    cin >> a >> b >> v;
    
    days = 0;
    
    x = a - b;
    v -= a;
    
    if (v <= 0)
    {
        cout << 1;
        return 0;
    }
    days = ((v - 1) / x + 1) + 1; //(v - 1) / x + 1 is upper
    cout << days;
    return 0;
}