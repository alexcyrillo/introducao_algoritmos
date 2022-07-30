#include <iostream>
using namespace std;

int main()
{
	int m_maior = 0, m_menor = 0, m_aux;
	//m: matrícula
	float n_maior, n_menor, n_aux;
	//n: nota
	do
	{
		cin >> m_aux;
		if(m_aux > 0)
		{
			cin >> n_aux;
			if(n_aux > n_maior)
			{
				n_menor = n_maior;
				m_menor = m_maior;
				n_maior = n_aux;
				m_maior = m_aux;
			}
			else if(n_aux > n_menor and n_aux < n_maior)
			{
				n_menor = n_aux;
				m_menor = m_aux;
			}
		}
	}
	while(m_aux != 0);
	cout << m_maior << ' ' << n_maior << endl
	     << m_menor << ' ' << n_menor;
	return 0;
}

