#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string	arr;
	while (getline(cin, arr)) // getline을 사용해야 space까지 인식함.
		cout << arr << '\n';
	return 0;
}
