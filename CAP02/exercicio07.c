// Exercicio 07 - Criar um programa em linguagem C que calcule o perimetro e a area de uma circunferencia de raio R (fornecido pelo usuario).

#include<stdio.h>
#include<windows.h>
#include<math.h>

void main (){
	
	system ("cls");
	
	float r, perimetro, area;
	
	printf("Insira o valor do raio: \n");
	scanf("%f", &r);
	
	perimetro = 2 * M_PI * r;
	area = M_PI * r * r;
	
	printf("Perimetro do circulo: %.2f \n", perimetro);
	printf("Area do circulo: %.2f \n", area);
}
