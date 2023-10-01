#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long	n, m, result;

	cin >> n >> m;
	result = n - m;
	if (result < 0)
		result = -result;
	cout << result << '\n';
	return 0;
}
