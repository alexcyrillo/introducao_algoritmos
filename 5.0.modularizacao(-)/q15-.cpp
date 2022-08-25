//somatorio_combinacao_fatorial
/*Faça um programa que leia um número inteiro positivo (n ≥ 1) e calcule e exiba o valor da seguinte expressão:

somatorio(n, k=1)C(n,k), sendo que C(n,k) = n!/(k!(n-k)!)

Com essas expressões em mente, seu programa deverá ser feito utilizando modularização, sendo criada uma função "somatório", que calcula o somatório das combinações da expressão, uma função "combinação", que calcula cada combinação Cn,k, e uma função "fatorial" para o cálculo de cada fatorial dentro da combinação.

Organize seu programa de forma que cada função dependa uma da outra, ou seja, o cálculo da expressão seja composto por várias chamadas de funções (uma função chamando a outra). Um bom planejamento dos parâmetros é parte importante da avaliação.

Soluções em C++ devem considerar que apesar das divisões que aparecem nas combinações serem todas exatas, os valores do numerador e do denominador podem ser muito grandes, portanto deve-se usar o tipo long ou algum outro tipo capaz de armazenar valores maiores que 232.

Obs.: Se a solução for desenvolvida em Python, seu programa deverá ter um subprograma chamado principal que deverá ser responsável por chamar as outras funções.

Entrada:

Um número inteiro positivo (n ≥ 1).
Saída

Um número inteiro - o valor do cálculo da expressão (somatório).
Exempo de Entrada:

5
Exemplo de Saída

31*/