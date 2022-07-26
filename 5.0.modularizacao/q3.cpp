#include <iostream>
using namespace std;

float m_cm(float &m)
{
	return m * 100;
}

float cm_m(float &cm)
{
	return cm / 100;
}

int main(){
	float med;
	string uni;
	cin >> med >> uni;
	if(uni == "centimetro")
		cout << m_cm(med) << " cm";
	else if(uni == "metro")
		cout << cm_m(med) << " m";
	else
		cout << "ERRO";
	return 0;
}

