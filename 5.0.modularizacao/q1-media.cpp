#include <iostream>
using namespace std;

float m_cm(float m)
{
	return m * 100;
}

float cm_m(float cm)
{
	return cm / 100;
}

int main()
{
	int med;
	string uni;
	cin >> med >> uni;
	if(uni == "centimetro")
		cout << m_cm(med);
	else if(uni == "metro")
		cout << cm_m(med);
	else
		cout << "erro";
	return 0;
}

