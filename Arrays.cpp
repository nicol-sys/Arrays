#include <iostream>
using namespace std;

// Hacer  búsqueda binaria
int busqueda(int arreglo[], int ni, int principio, int fin) {
  if (principio > fin) {
    return -1; // No se encontró el elemento
  }
  else {
    int mitad = principio + (fin - principio) / 2; // Calcular el índice del medio
    if (arreglo[mitad] == ni) {
      return mitad; // Se encontró el elemento
    }
    else if (arreglo[mitad] > ni) {
      return busqueda(arreglo, ni, principio, mitad - 1); // Buscar en la mitad izquierda
    }
    else {
      return busqueda(arreglo, ni, mitad + 1, fin); // Buscar en la mitad derecha
    }
  }
}

int main() {
  // Definir los tres arreglos 
  int arreglo1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int arreglo2[] = {16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int arreglo3[] = {31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};


int numero;
cout << "Ingrese el número que desea buscar, recuerde que los arreglos van del numero 1 al 45: ";
cin >> numero;

int arr1 = busqueda(arreglo1 , numero ,0 ,14);
int arr2 = busqueda(arreglo2 , numero ,0 ,14);
int arr3 = busqueda(arreglo3 , numero ,0 ,14);

if (arr1 != -1) {
cout << "El número " << numero << " se encuentra en el primer arreglo en la posición " << arr1 << endl;
}

else
if (arr2 != -1) {
cout << "El número " << numero << " se encuentra en el segundo arreglo en la posición " << arr2 << endl;
}

else
if (arr3 != -1) {
cout << "El número " << numero << " se encuentra en el tercer arreglo en la posición " << arr3 << endl;
}


else {
cout << "El número " << numero << " no se encuentra en ningun arreglo" << endl;
}
return 0;
}
