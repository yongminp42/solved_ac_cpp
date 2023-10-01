#include <iostream>

using namespace std;

int	main(void)
{
	cout.tie(nullptr);
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	long long	a, b, c;
	cin >> a >> b >> c;
	cout << a + b + c;
	return 0;
}
