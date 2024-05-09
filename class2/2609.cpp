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

    for (int i = 2; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            x *= i;
            y *= i;
            a /= i;
            b /= i;
            i = 1;
        }
    }
    y *= a*b;
    cout << x << "\n" << y;

    return 0;
}