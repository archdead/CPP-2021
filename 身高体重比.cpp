#include<iostream>
using namespace std;
int main()
{	
	float weight = 0, height = 0, healthRate = 0;
	cin >> weight >> height;//体重单位是Kg；身高单位是m
	healthRate = weight / (height*height);
	if ((18.5 <= healthRate) && (healthRate <= 23.9))
	cout << "体重适中" <<" "<<healthRate << endl;
	else if ((23.9 < healthRate) && (healthRate <= 27.9))
	cout << "超重，注意控制" << " " << healthRate << endl;
	else if ((27.9 < healthRate) && (healthRate <= 35.9))
	cout << "肥胖，减肥！" << " " << healthRate << endl;
	else if ((35.9 < healthRate) && (healthRate <= 45.9))
	cout << "重度肥胖，别吃了" << " " << healthRate<< endl;
	else
		cout << "请直接住院治疗吧" << endl;
	return 0;
}