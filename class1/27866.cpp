#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string	s;
	int		i;

	cin >> s >> i;
	cout << s[i - 1];
	return 0;
}
