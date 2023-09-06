/* Exercicio 13 - Crie um programa em C que leia a base e a altura de um triangulo,
calcule sua area e o perímetro, e imprima o resultado para o usuario. */

#include<stdio.h>
#include<windows.h>

main(){
	system("cls");
	
	float base, altura, area, perimetro;
	
	printf("Insira a base do triangulo: \n");
	scanf("%f", base);
	
	printf("Insira a altura do triangulo: \n");
	scanf("%f", altura);
	
	area = base * altura / 2;
	perimetro = ;
	
	printf("Area do triangulo: %.2f \n", area);
	printf("Perimetro do triangulo: %.2f \n", perimetro);
}
