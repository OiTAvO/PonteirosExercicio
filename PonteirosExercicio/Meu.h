//Parâmetos do programa do exercício de LP
#include<iostream>
#include<Windows.h>
using namespace std;
// deines do programa
#define PAIS_BRASIL					setlocale(LC_ALL,"portuguese_brazil")
#define LIMPAR_TELA					system("cls")
#define PAUSA						system("pause")
#define QTDE_VET					10

//Funções do programa
int inverte_vetor(int *v1, int *v2, int n);				//inverte a ordem dos valores do vetor V1 para o vetor V2
void multiplica_escalar(int *v1, int *v2, int x, int n);//função que multiplica cada um dos elementos de V1 por X e armazenar os resultados em V2. 