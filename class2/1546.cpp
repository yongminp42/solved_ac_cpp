#include <iostream>

using namespace std;

int	main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int 	n, max;
	double	result;
	cin >> n;
	double arr[n];
	max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	result = 0;
	for (int i = 0; i < n; i++)
	{
		arr[i] = (arr[i] / max) * 100;
		result += arr[i];
	}
	result /= n;
	if ((int)(result * 10) % 10 == 0)
	{
		cout << fixed; //소수점자리만 조절할 수 있게 설정
		cout.precision (1); //출력할 자릿수 설정
	}
	cout << result;
	return 0;
}
