#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int		n, result;
	string	arr;

	cin >> n >> arr;
	result = 0;
	for (int i = 0; i < n; i++)
	{
		result += arr[i] - '0';
	}
	cout << result << '\n';

	return 0;
}
