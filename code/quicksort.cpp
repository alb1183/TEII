#include<iostream>
using namespace std;
// Funcion para dividir el array y hacer los intercambios
int divide(int *array, int start, int end) {
    int left, right, pivot, temp;
    pivot = array[start];
    left = start;
    right = end;
    // Mientras no se cruzen los indices
    while (left < right) {
        while (array[right] > pivot)
            right--;
        while ((left < right) && (array[left] <= pivot))
            left++;
        // Si todavia no se cruzan los indices seguimos intercambiando
        if (left < right) {
            temp = array[left];
            array[left] = array[right];
            array[right] = temp;
        }
    }
    // Los indices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    temp = array[right];
    array[right] = array[start];
    array[start] = temp;
    // La nueva posición del pivot
    return right;
}
// Funcion recursiva para hacer el ordenamiento
void quicksort(int *array, int start, int end) {
    int pivot;
    if (start < end) {
        pivot = divide(array, start, end);
        // Ordeno la lista de los menores
        quicksort(array, start, pivot - 1);
        // Ordeno la lista de los mayores
        quicksort(array, pivot + 1, end);
    }
}
int main() {
   int num, aux;
   int* arreglo;
   cin >> num;
   arreglo = new int[num];
   for(int x = 0; x < num; x++)
      cin >> arreglo[x];
   quicksort(arreglo, 0, num - 1);
   for(int w = 0; w < num; w++)
      cout << "Numero " << w << ".- " << arreglo[w] << endl;
   delete[] arreglo;
   return 0;
}