/* Exercicio 10 - Uma pizzaria de São Paulo inventou uma nova modalidade de pizza,
chamada de “Meia Pizza da Casa”. O cliente escolhe o raio da pizza e o pizzaiolo faz
uma meia pizza de calabresa com essa medida de raio.
Crie um programa para ajudar o pizzaiolo a calcular a área da “Meia Pizza da Casa”
baseada na medida do raio escolhida pelo cliente. */

#include<stdio.h>
#include<windows.h>
#include<math.h>

void main (){
	
	system ("cls");
	
	float r, area;
	
	printf("Insira o valor do raio: \n");
	scanf("%f", &r);
	
	area = (M_PI * r * r) / 2;
	
	printf("Area da 'Meia Pizza da Casa': %.2f \n", area);
}
