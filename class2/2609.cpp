#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int a, b, x, y;
    x = 1;
    y = 1;
    cin >> a >> b;

    if (a == b)
    {
		cout << a << "\n" << b;
		return 0;
	}

    for (int i = 2; i <= a && i <= b; i++) // i<a && i<b로 해서 틀렸었음
    {
        if (a % i == 0 && b % i == 0)
        {
            x *= i;
            y *= i;
            a /= i;
            b /= i;
            i = 1; //이거 다음에 1이 더해지는데 2로 초기화 시켜서 틀림
        }
    }
    y *= a*b;
    cout << x << "\n" << y;

    return 0;
}