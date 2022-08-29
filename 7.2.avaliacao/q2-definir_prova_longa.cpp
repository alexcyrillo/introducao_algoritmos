/*
Para ajudar seu orientador de Iniciação Científica, que está sendo criticado por dar provas longas, faça um programa que lê vários horários de entrega de prova e calcula alguns parâmetros para determinar o quão longa ela foi.

O programa deve ler vários pares de inteiros (horas e minutos) que são horários em que cada aluno entregou a prova. Se a hora lida for negativa, então os horários de todos os alunos já foram lidos.

Depois de ler todos os horários, o programa deve calcular em qual horário 70% dos alunos já tinham entregado suas provas. Depois, o programa deve ler um horário e informar qual porcentagem de alunos já tinha entregue a prova naquela hora (esse horário não precisa ser um horário em que alguém entregou prova).

Entradas:

Vários pares (hora e minuto) de inteiros, que são os horários de entrega de prova. Suponha que os horários estarão em ordem cronológica. Vários alunos podem entregar a prova num mesmo horário. Suponha que nunca haverá mais de 100 alunos numa turma. Quando a hora lida for negativa, não há mais horários para ler.
Um horário de consulta (dois inteiros) que não precisa coincidir com alguma entrega de prova.
Saídas:

Em qual horário 70% dos alunos já tinham entregue a prova (deve haver o caractere : entre horas e minutos).
Quanto porcento dos alunos já tinham entregue a prova no horário de consulta.
Exemplo de Entrada:

8 30
8 32
8 49
8 50
8 55
9 05
9 11
9 12
9 13
9 38
9 40
-1
9 38
Exemplo de Saída:

9:12
90.9091
*/
#include <iostream>
using namespace std;

int main()
{
    int horaAlunos[100][2], hrConsulta[2], totalAlunos, ultimo = 0, term70[2];
    float porcHr;
    for(int a = 0; a < 100; a++)
        {
            cin >> horaAlunos[a][0];
            if(horaAlunos[a][0] != -1)
            {
                
                cin >> horaAlunos[a][1];
            }
            else
            {
                totalAlunos = a;
                a = 100;
            }
        }
    term70[0] = horaAlunos[int(totalAlunos * 0.7)][0];
    term70[1] = horaAlunos[int(totalAlunos * 0.7)][1];
    cin >> hrConsulta[0] >> hrConsulta[1];
    for(int i = 0; i < totalAlunos; i++)
    {
        if((horaAlunos[i][0] * 60 + horaAlunos[i][1]) <= (hrConsulta[0] * 60 + hrConsulta[1]))
            ultimo++;
    }
    porcHr =float(ultimo) / float(totalAlunos) * 100.0;
    cout << term70[0] << ':' << term70[1] << endl << porcHr;
    return 0;
}