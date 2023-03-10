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
	
	//Ausgabe der absteigenden Folge 
 	ausgabeErgebnis(n);  
	printf("\n");
	
	//Ausgabe der aufsteigenden Folge 
	ausgabeErgebnisRueck(n,0);  
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
int fib(int f) {
  //Bei den ersten beiden Zahlen der Fibonacci Folge, F0 und F1,entspricht der Wert f
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
  //Die Ausgabe soll abbrechen, sobald z kleiner 0 ist (dann ist man bei der 0.Stelle angekommen)
  if (z<0) {
	  printf("\n");
	  return 0;
  }
  //Ergebnisausgabe
  printf("%d | ",fib(z));
  ausgabeErgebnis(z-1);
}

int ausgabeErgebnisRueck(int z, int i) {
  //i ist eine Zählvariable, bei z wird die Eingabe durch den Nutzer hinterlegt. Die Rekursion bricht ab, nachdem die Zählvariable den Wert von z erreicht hat.
  if (i>z) {
	  printf("\n");
	  return 0;
  }
  //Ergebnisausgabe
  printf("%d | ",fib(i));
  ausgabeErgebnisRueck(z,i+1);
}
     
