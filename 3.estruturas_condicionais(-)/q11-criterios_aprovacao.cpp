/*
De acordo com o artigo 111 da Resolução CEPE 473 de 2018, para que um aluno seja aprovado em um determinado componente curricular baseado em notas, o aluno deve obter: (1) nota final mínima igual ou superior a 60 e, pelo menos, 75% de assiduidade no componente curricular; ou (2) nota final mínima igual ou superior a 70 e, pelo menos, 65% de assiduidade no componente curricular.

Faça um programa que leia do dispositivo de entrada padrão a matrícula de um determinado aluno, sua nota final na disciplina e sua assiduidade (cada dado será fornecido em uma linha diferente do dispositivo de entrada padrão). Caso o aluno satisfaça os critérios para aprovação no componente curricular, seu programa deverá exibir no dispositivo de saída padrão, os cinco últimos dígitos do número de matrícula do aluno concatenado com o caractere A. Caso o aluno seja reprovado na disciplina, seu programa deverá exibir no dispositivo de saída padrão, os cinco últimos dígitos do número de matrícula do aluno concatenado com o caractere R.

Entradas:

Número de matrícula do aluno composto por 9 dígitos.
Número inteiro que indica a nota final do aluno no componente curricular.
Número inteiro que indica a assiduidade do aluno no componente curricular.
Saídas:

Cinco últimos dígitos do número de matrícula do aluno concatenado com o caractere A ou com o caractere R, de acordo com a regra definida no enunciado acima.
Exemplo de Entrada:

200010007
60
95
Exemplo de Saída:

10007A
Exemplo de Entrada:

200010013
90
70
Exemplo de Saída:

10013A
Exemplo de Entrada:

200112222
98
60
Exemplo de Saída:

12222R
Exemplo de Entrada:

200219876
15
100
Exemplo de Saída:

19876R
*/
#include <iostream>
using namespace std;

int main()
{
	int media, presenca, matricula;
	
	cin >> matricula >> media >> presenca;
	
	matricula %= 100000000;
	matricula %= 10000000;
	matricula %= 1000000;
	matricula %= 100000;
	if ((media >= 60 and media < 70 and presenca >= 75) or (media >= 70 and presenca >= 65))
		cout << matricula << 'A';
	else
		cout << matricula << 'R';
			
	return 0;
}
