#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long	a, b, c;

	while (cin >> a >> b >> c)
	{
		if (a == 0 && b == 0 && c == 0)
			break ;
		else
		{
			a *= a;
			b *= b;
			c *= c;
			if (a == (b + c) || b == (a + c) || c == (a + b))
				cout << "right" << '\n';
			else
				cout << "wrong" << '\n';
		}
	}
	return 0;
}
/*
	오답이유
	중간에 처리과정 출력하는걸 안지웠다...
*/