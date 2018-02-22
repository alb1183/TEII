#include<iostream>

using namespace std;

int main() {
   int num, aux;
   int* arreglo;
   cin >> num;
   arreglo = new int[num];
   
   for(int x = 0; x < num; x++) {
      cin >> arreglo[x];
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

  
   delete[] arreglo;
   return 0;
}