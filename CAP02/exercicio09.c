/* Exercicio 09 - Uma fábrica de brinquedos no Japão inventou uma nova forma de produzir bamboles.
O cliente escolhe o raio do bambole e a fabrica produz o bambole sob medida para o cliente.
Crie um programa para ajudar o fabricante a calcular o perimetro do bambole
baseado na medida do raio escolhida pelo cliente. */

#include<stdio.h>
#include<windows.h>
#include<math.h>

void main (){
	
	system ("cls");
	
	float r, perimetro;
	
	printf("Insira o valor do raio: \n");
	scanf("%f", &r);
	
	perimetro = 2 * M_PI * r;
	
	printf("Perimetro do bambole: %.2f \n", perimetro);
}
