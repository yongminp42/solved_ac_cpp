#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int t, pointer;
	cin >> t;
	string 	arr[t];
	int		index[t];

	for (int i = 0; i < t; i++)
		cin >> index[i] >> arr[i];
	pointer = 0;
	for (int i = 0; i < t; i++)
	{
		for (int n = 0; arr[i][pointer]; n++)
		{
			if (n < index[i])
				cout << arr[i][pointer];
			else
			{
				n = -1; //0으로 초기화하면 다음 시작시 1부터 시작함
				pointer ++;
			}
		}
		pointer = 0;
		cout << '\n';
	}
	return 0;
}
/*
	재채점이유
		3중for문에서 2중for문으로 줄이기 위해서
*/