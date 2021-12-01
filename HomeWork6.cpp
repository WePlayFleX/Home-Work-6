#include <iostream>

using namespace std;

int main()
{
	int Summ_days, Days, Weeks;
	cout << "Enter the number of days" << endl;
	cin >> Summ_days;
	Weeks = (int)(Summ_days / 7);
	Days = Summ_days - Weeks * 7;
	cout << "Number of weeks - " << Weeks << ", days - " << Days << endl;

	system("pause");
	return 0;
}

