# PonteirosExercicio

Exercício ponteiro LP - Prof. Bortot – 19/04/2017
Entregar na próxima aula.

1.	Crie um programa para manipular vetores. O seu programa deve implementar uma função chamada inverte_vetor, que recebe como parâmetro dois vetores V1 e V2, ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar o maior valor encontrado em V1. A função deve obedecer ao seguinte protótipo: 
 
int inverte_vetor(int *v1, int *v2, int n); 
 
Em seguida, implemente no mesmo modulo outra função chamada multiplica_escalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por X e armazenar os resultados em V2. 
 
A função deve obedecer ao seguinte protótipo: 
 
void multiplica_escalar(int *v1, int *v2, int x, int n); 
 
Em seguida crie a função principal do programa utilizando as funções inverte_vetor e multiplica_escalar para inverter um vetor de tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar também fornecido pelo usuário. Por ultimo, o programa deverá exibir o vetor resultante. 
 
