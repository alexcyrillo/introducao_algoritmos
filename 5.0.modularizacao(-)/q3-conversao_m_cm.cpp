/*Você foi designado para fazer um programa que converte unidades de distância, que pode ser de metros para centímetros ou vice-versa. Para isso, seu programa deve ter duas funções, uma para converter de metros para centímetros e outra para converter o inverso.

Cada função deve receber a distância como parâmetro (número real) e retornar a distância convertida.

ATENÇÃO! As funções de conversão devem ser utilizadas na função main, onde serão lidos os valores da distância e da unidade para qual a distância deve ser convertida. Na função main, depois de utilizada a função correta deverá ser mostrada na tela a distância convertida.
OBS: Caso seja fornecida uma unidade inválida, o programa deverá exibir a palavra ERRO como resposta.

Entradas:

Distância (real);
Unidade para qual deverá ser convertida (minúsculo, singular e sem acento)
Saída:

Distância convertida, seguida da abreviação da unidade (m ou cm). O valor e a identificação da unidade devem estar separados.
Exemplo de Entrada:

10
centimetro
Exemplo de Saída:

1000 cm
Exemplo de Entrada 2:

250
metro
Exemplo de Saída 2:

2.5 m
Exemplo de Entrada 3:

45.7
VOLT
Exemplo de Saída 3:

ERRO*/
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

