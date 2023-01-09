#include<stdio.h>

// Funktions-Prototypen
int fib(int f);
int eingabeZahl();
int ausgabeErgebnis(int z);

//Hauptprogramm
int main () {

	/*
	* Ausgabe der Fibonacci Folge über einen rekursiven Aufruf
	*/

	printf("\n *********************************** ");
	printf("\n *   ^,,,,^   *                    * ");
	printf("\n *  ( o x o)  *   Fibonacci Folge  * ");
	printf("\n *  ( 7   7)  *                    * ");
	printf("\n *   ´´´´´´   *            ©S.Buch * ");
	printf("\n *********************************** \n\n");
	
	//Funktionsaufruf
  printf("Bitte geben Sie die nTe Fibonacci Zahl an, die bestimmt werden soll.\n");
 	ausgabeErgebnis(eingabeZahl());  
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
int fib(int f) {
  int z;
  if (f==0||f==1) {
    printf("%d | ",f);
    return f;
  }
  else {
    z = (fib(f-1)+fib(f-2));
    printf("%d | ",z);
    return z;
  }
}

int eingabeZahl() {
  //Variablendeklaration
  int z;
  
  //Eingabe(aufforderung)
  printf("\nEingabe: ");
  scanf("%d", &z);
  
  //Ausgabe
  return z;
}

int ausgabeErgebnis(int z) {
  //Ergebnisausgabe
  printf("\nDie Fibonacci Folge lautet: %d\n",fib(z));
}
     
