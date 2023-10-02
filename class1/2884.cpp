#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	h, m;

	cin >> h >> m;
	m -= 45;
	if (h == 0 && m < 0)
	{
		h = 23;
		m += 60;
	}
	else if (m < 0)
	{
		h --;
		m += 60;
	}
	cout << h << ' ' << m << '\n';
	return 0;
}
