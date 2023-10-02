#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	string	arr;
	int		result, flag;

	getline(cin, arr);
	result = 0;
	flag = 0;
	for (int i = 0; arr[i]; i++)
	{
		if (arr[i] == ' ')
		{
			if (flag != 0)
			{
				result ++;
				flag = 0;
			}
		}
		else
			flag = 1;

	}
	if (flag != 0)
		result ++;
	cout << result << '\n';
	return 0;
}
