#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int	a, b;
	
	cin >> a >> b;
	if (a < b)
		cout << '<';
	else if (a > b)
		cout << '>';
	else
		cout << "==";
	return 0;
}
