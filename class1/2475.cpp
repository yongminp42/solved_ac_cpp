#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, result;

	result = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		result += (n * n);
	}
	result %= 10;
	cout << result;
	return 0;
}
