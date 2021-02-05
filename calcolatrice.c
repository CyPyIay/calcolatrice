//programma calcolatrice
#include <stdio.h> //libreria standard input output

int main() //funzione main
	{
		int int1, int2, som, sot, mol, div, decisione; //dichiarazione variabili
						
		printf("programma calcolatrice tra due interi\n"); //titolo programma stampato a schermo
		
		printf("**************************\n"); //spazio
		
		printf("cosa desideri fare: 1 = addizione, 2 = sottrazione, 3 = moltiplicazione, 4 = divisione.\n"); //domanda all'utente cosa vuole fare
		scanf("%d", &decisione); //mette la risposta nella variabile decisione
		
		printf("inserire primo numero intero\n"); //chiede il primo numero
		scanf("%d", &int1); //mette il numero dato nella variabile int1
		
		printf("**************************\n"); //spazio
		
		printf("inserire secondo numero intero\n"); //chiede il secondo numero
		scanf("%d", &int2); //mette il numero dato nella variabile int2
				
		printf("**************************\n"); //spazio
						 			
			if (decisione == 1) //somma
		{ //nel cilclo if con più di una riga di istruzioni serve la parentesi graffa
			som = int1 + int2; //formula somma
			printf("il risultato dell'addizione è:%d\n", som);
		}
			if (decisione == 2)//sottrazione
		{
			sot = int1 - int2; //formula sottrazione
			printf("il risultato della sottrazione è:%d\n", sot);
		}			
			if (decisione == 3) //moltiplicazione
		{
			mol = int1 * int2; //formula moltiplicazione
			printf("il risultato della moltiplicazione è:%d\n", mol);
		}	
			if (decisione == 4) //divisione
		{
			div = int1 / int2; // formula divisione
			printf("il risultato della divisione é:%d\n", div);
		}			
		
		return 0; //fine programma
	}