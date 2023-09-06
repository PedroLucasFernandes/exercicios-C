/* Exercicio 11 - Criar um programa em linguagem C, programa que receba o tempo em horas, a velocidade media, e o consumo medio do veiculo.
A partir da velocidade e do tempo calcule a distancia percorrida, e mostre o consumo aproximado do veículo. */

#include<stdio.h>
#include<windows.h>

main(){
	
	system("cls");
	
	float horas, vMedia, consumo, consumoFinal, distancia;
	
	printf("Insira o tempo da viagem (horas): \n");	
	scanf("%f", &horas);
	
	printf("Insira a velocidade media (km/h): \n");	
	scanf("%f", &vMedia);

	printf("Insira o consumo do veiculo (km/L): \n");	
	scanf("%f", &consumo);
	
	distancia = horas * vMedia;
	consumoFinal = 1 / (consumo / distancia);
	
	printf("Distancia percorrida: %2.fkm \n", distancia);
	printf("Consumo de gasolina: %2.fL \n", consumoFinal);
}
