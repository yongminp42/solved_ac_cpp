#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	n, a, b;

	cin >> n;
	a = 1;
	b = 0;
	while (a <= n)
	{
		if (b < a)
		{
			cout << '*';
			b ++;
		}
		else
		{
			cout << '\n';
			a ++;
			b = 0;
		}
	}
	
	return 0;
}
