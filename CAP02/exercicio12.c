/* Exercicio 12 - Um fabricante de ferraduras acaba de expandir os negócios.
Agora ele fabrica ferraduras para qualquer tipo de animal com casco. O formato das ferraduras é o de meia tora.
O cliente escolhe o raio externo e o raio interno e ele produz a ferradura.
Crie um programa para ajudar o ferreiro a calcular a área da ferradura
baseado na medida do raio externo e interno fornecido pelo cliente. */

#include<stdio.h>
#include<windows.h>
#include<math.h>

void main (){
	
	system ("cls");
	
	float rExterno, rInterno, areaInterna, areaExterna, areaFerradura;

	printf("Insira o raio externo da ferradura: \n");
	scanf("%f", &rExterno);
	printf("Insira o raio interno da ferradura: \n");
	scanf("%f", &rInterno);
		
	areaExterna = (3.14 * pow(rExterno, 2)) / 2;
	areaInterna = (3.14 * pow(rInterno, 2)) / 2;
	
	areaFerradura = areaExterna - areaInterna;
	
	printf("Area da ferradura: %.2f.", areaFerradura);
}
