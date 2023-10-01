#include <iostream>
#include <ctime>

using namespace std;

int	main(void)
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	time_t	temp;
	struct tm *timeinfo;

	time(&temp);
	timeinfo = localtime(&temp);

	cout << 1900 + timeinfo->tm_year << "-";
	if (1 + timeinfo->tm_mon < 10)
		cout << "0" << 1 + timeinfo->tm_mon << "-";
	else
		cout << 1 + timeinfo->tm_mon << "-";
	if (timeinfo->tm_mday < 10)
		cout << "0" << timeinfo->tm_mday << '\n';
	else
		cout << timeinfo->tm_mday << '\n';
	return 0;
}
