#include <iostream>

template <typename T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Si el elemento actual es mayor que el siguiente, intercambiamos
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void imprimirArreglo(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Ejemplo con números enteros
    int arregloEnteros[] = {64, 25, 12, 22, 11};
    int nEnteros = sizeof(arregloEnteros) / sizeof(arregloEnteros[0]);

    std::cout << "Arreglo original 5 (enteros): ";
    imprimirArreglo(arregloEnteros, nEnteros);
    bubbleSort(arregloEnteros, nEnteros);
    std::cout << "Arreglo ordenado (enteros): ";
    imprimirArreglo(arregloEnteros, nEnteros);

    // Ejemplo con caracteres
    char arregloCaracteres[] = {'b', 'a', 'd', 'c', 'e'};
    int nCaracteres = sizeof(arregloCaracteres) / sizeof(arregloCaracteres[0]);

    std::cout << "Arreglo original (caracteres): ";
    imprimirArreglo(arregloCaracteres, nCaracteres);
    bubbleSort(arregloCaracteres, nCaracteres);
    std::cout << "Arreglo ordenado (caracteres): ";
    imprimirArreglo(arregloCaracteres, nCaracteres);

    return 0;
}