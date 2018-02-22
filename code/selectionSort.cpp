#include<iostream>

using namespace std;

int main() {
   int num, aux;
   int* arreglo;
   cout << "Cuantos numeros seran: ";
   cin >> num;
   arreglo = new int[num];
   
   for(int x = 0; x < num; x++) {
      cout << "Ingresa el numero " << x << " de la serie: ";
      cin >> arreglo[x];
      cout << endl;
   }

	int pos_min;
	for (int i=0; i < num-1; i++)	{
	    pos_min = i;
		// Busca el minumo
		for (int j=i+1; j < num; j++)	{
			if (arreglo[j] < arreglo[pos_min])
				pos_min=j;
		}
		// Intercambia
		if (pos_min != i) {
			 aux = arreglo[i];
			 arreglo[i] = arreglo[pos_min];
			 arreglo[pos_min] = aux;
		}
	}
	
   cout << "***NUMEROS ARREGLADOS***" << endl;

   for(int w = 0; w < num; w++) {
      cout << "Numero " << w << ".- " << arreglo[w] << endl;
   }

  
   delete[] arreglo;
   return 0;
}