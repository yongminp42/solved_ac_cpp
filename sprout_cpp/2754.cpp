#include <iostream>

using namespace std;

int	main()
{
	string arr;
	double	result;

	cin >> arr;
	result = 0;
	if (arr[0] == 'A')
		result += 4.0;
	else if (arr[0] == 'B')
		result += 3.0;
	else if (arr[0] == 'C')
		result += 2.0;
	else if (arr[0] == 'D')
		result += 1.0;
	else
	{
		cout << "0.0";
		return 0;
	}
	if (arr[1] == '+')
		result += 0.3;
	else if (arr[1] == '-')
		result -= 0.3;
	cout << fixed; //소수점자리만 조절할 수 있게 설정
	cout.precision (1); //출력할 자릿수 설정, 다만 위에 fixed가 없는경우 소숫점만 자릿수를 계산하는게 아닌 정수부분도 같이 계산한다.
	cout << result << '\n';
	return 0;
}
