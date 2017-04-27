//Exercicio proposto de LP
//FATEC - MC - OAMP - 27/04/2017 - Versão 0.0
#include "Meu.h"
void main(void)
{
	int i,											//contedor e indexador genérico
		nEscalar,									//variavel que recebe o multiplicador escalar
		Vet1[QTDE_VET],								//Vetor 1 e Vetor resultante da chamada da segunda função
		Vet2[QTDE_VET];								//Vetor 2 e Vetor resultante da chamada da primeira função
	PAIS_BRASIL;
	//Loop para inserção de valores no vetor 1
	for ( i = 0; i < QTDE_VET; i++)
	{
		cout << "Digite o valor do vetor 1 de indice " << i + 1 << " : ";
		cin >> Vet1[i];
	}//for i
	cout << endl << "O maior valor encontrado no Vetor 1 foi : "		//função que inverte os valores de Vet1 em Vet2
		<< inverte_vetor(Vet1, &Vet2[QTDE_VET - 1], QTDE_VET) << endl; // e retorna o maior valor de Vet1
	cout << "Digite um valor para o multiplicador escalar: ";
	cin >> nEscalar;
	//Chamada da função que faz a múltiplicação escalar
	multiplica_escalar(Vet2, Vet1, nEscalar, QTDE_VET);
	cout << "\n\tO vetor resultante" << endl;
	//Loop para exibição do vetor resultante
	for ( i = 0; i < QTDE_VET; i++)
	{
		cout << "O vetor resultante de indice " << i + 1 << " é: " << Vet1[i] << endl;
	}
}