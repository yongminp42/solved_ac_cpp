#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, temp_i, temp_num;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
		temp_i = i;
		temp_num = 0;
		for (int x = 10; temp_i != 0; temp_i /= x)
		{
			temp_num += temp_i % 10;
		}
		temp_num += i;
		if (n == temp_num)
		{
			cout << i;
			return 0;
		}
    }
    cout << 0;
	return 0;
}