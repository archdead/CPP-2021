#include <iostream>
using namespace std;
int main()
{
	int ageOFHONG = 10, ageOFFATHER= 33, NUM = 0;
	while (2* ageOFHONG != ageOFFATHER)
	{
		ageOFHONG++;
		ageOFFATHER++;
		NUM++;
	}
	cout << ageOFHONG << endl;
	cout << ageOFFATHER << endl;
	cout << NUM << endl;
	return 0;
}
