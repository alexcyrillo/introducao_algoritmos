/*
Calouros que acabam de ingressar numa das melhores Universidades do país, enfrentaram os desafios do ENEM. A nota final do ENEM é calculada a partir de uma média ponderada por disciplinas. No Curso de Sistemas de Informação os pesos são os seguintes:
Matemática e suas Tecnologias: PESO 3

Ciências da Natureza e suas Tecnologias: PESO 2

Linguagens, Códigos e suas Tecnologias: PESO 2

Redação: PESO 2

Ciências Humanas e suas Tecnologias: PESO 1

Sabendo disso, faça um algoritmo que receba as notas citadas nesta ordem e calcule a média das notas.

Obs: A nota mínima aceitável para nota de REDAÇÃO é 200, portanto, se o candidato tiver nota abaixo disso, ele é automaticamente desclassificado, portanto, imprima -1 para sua média.

Exemplo de Entrada:
819.30
651.30
591.10
700.0
647.30

Exemplo Saída:
699
*/

#include <iostream>
using namespace std;

int main()
{
	float mat, nat, ling, red, hum;
	
	cin >> mat >> nat >> ling >> red >> hum; 
	
	if (red >= 200)
		cout << (mat * 3 + nat * 2 + ling * 2 + red * 2 + hum) / 10;
	else
		cout << "-1";
		
	return 0;
}
