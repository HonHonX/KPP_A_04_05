#include<stdio.h>

// Funktions-Prototypen
int fib(int f);
int eingabeZahl();
int ausgabeErgebnis(int z);
int ausgabeErgebnisRueck(int z, int i);

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
	int n = eingabeZahl();
	printf("\n");
 	ausgabeErgebnis(n);  
	printf("\n");
	ausgabeErgebnisRueck(n,0);  
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
int fib(int f) {
  if (f==0||f==1)
    return f;
  else {
    return fib(f-1)+fib(f-2);
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
  if (z<0) {
	  printf("\n");
	  return 0;
  }
  //Ergebnisausgabe
  printf("%d | ",fib(z));
  ausgabeErgebnis(z-1);
}

int ausgabeErgebnisRueck(int z, int i) {
  if (i>z) {
	  printf("\n");
	  return 0;
  }
  //Ergebnisausgabe
  printf("%d | ",fib(i));
  ausgabeErgebnisRueck(z,i+1);
}
     
