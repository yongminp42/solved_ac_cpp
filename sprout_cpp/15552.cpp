#include <iostream>
#include <ctime>

using namespace std;

int	main(void)
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	t, a, b;
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		if ((a >= 1 && a <= 1000) && (b >= 1 && b <= 1000))
			cout << a + b << '\n';
	}
	return 0;
}
