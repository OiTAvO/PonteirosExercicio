#include "Meu.h"
int inverte_vetor(int *v1, int *v2, int n)
{
	int i,					//contador e indexador genérico
		nTrono = INT_MIN;	//Trono do maior valor
	for (i = 0; i < n; i++,v1++,v2--)
	{
		*v2 = *v1;
		if (*v1 > nTrono)
			nTrono = *v1;
	}
	return nTrono;
}

void multiplica_escalar(int *v1, int *v2, int x, int n)
{
	int i;						//contadores e indexadores genéricos
	for (i = 0; i < n; v1++,v2++,i++)
	{
		*v2 = *v1 *x;
	}
	return;
}