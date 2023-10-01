#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, result;

	cin >> n;
	result = 1;
	if (n == 0)
		cout << '1' << '\n';
	else
	{
		for(int i = 1; i <= n; i ++)
			result *= i;
		cout << result << '\n';
	}
	return 0;
}
