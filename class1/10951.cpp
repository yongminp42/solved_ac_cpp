#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	a, b;

	while (cin >> a >> b)
		cout << a + b << '\n';
	
	return 0;
}
