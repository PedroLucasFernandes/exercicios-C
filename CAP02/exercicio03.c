// Exercicio 03 - Criar um programa em linguagem C que converta sua idade em meses, semanas, dias, horas, minutos e segundos. 

#include<stdio.h> 
#include<windows.h> 

main (){ 

	system("cls"); 

	int idade, meses, semanas, dias, horas, minutos, segundos;

	printf("Qual a sua idade? \n"); 
	scanf("%d", &idade);
	
	meses = idade * 12;
	semanas = idade * 52;
	dias = idade * 365;
	horas = idade * 8760
	minutos = horas * 60;
	segundos = minutos * 60;
	
	printf("Sua idade em meses: %d \n", meses);
	printf("Sua idade em semanas: %d \n", semanas);
	printf("Sua idade em dias: %d \n", dias);
	printf("Sua idade em horas: %d \n", horas);
	printf("Sua idade em minutos: %d \n", minutos);
	printf("Sua idade em segundos: %d \n", segundos);
}
