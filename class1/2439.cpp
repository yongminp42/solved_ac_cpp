#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int		n;
	cin >> n;
	char	arr[n];
	for (int i = 0; i < n; i++)
		arr[i] = ' ';
	arr[n] = 0;
	for (int i = 1; i <= n; i++)
	{
		arr[n - i] = '*';
		cout << arr << '\n';
	}
	
	return 0;
}
