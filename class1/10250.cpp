#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	t, h, w, n, result;

	cin >> t;
	result = 0;
	for (int i = 0; i < t && cin >> h >> w >> n; i++)
	{
		if (n % h == 0)
		{
			result += h * 100;
			result += n / h;
		}
		else
		{
			result += (n % h) * 100;
			result += (n / h) + 1;
		}
		cout << result << '\n';
		result = 0;
	}
	
	return 0;
}
