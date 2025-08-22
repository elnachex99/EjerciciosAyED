/*Teoria:
-Para dar la dirección se utiliza & seguido del nombre de la variable ,es decir &num
-La direccion de memoria seria la ubicación en la Ram donde se guarda la variable.
-El caracter asterisco "*" me permite mostrar el valor al cual apunto
-El caracter siempre va al lado de la variable .Ejemplo = int *perro

Ejemplo:
------------------------------------------------------------------
int *dirNum;
int kilometros;
kilometros = 22;
dirNum = &kilometros (direccion de la variable kilometro)
cout << "La direccion de la variable es: " << dirNum << endl;
cout << "El valor al que apunta dirNum es: " << *dirNum << endl;
-------------------------------------------------------------------
SALIDA:
La direccion de la variable es: 0x5052f8
El valor al que apunta dirNum es: 22

-Cada apuntador debe tener su propia variable si quieres apuntar a diferentes direcciones
 al mismo tiempo.
-Puedes usar un único apuntador y hacer que apunte primero a "a" y luego a "b".
 Así, no necesitarías dos variables para los apuntadores.
-Un apuntador puede apuntar a múltiples variables, pero solo una a la vez.
-Usando el operador & puedes cambiar su destino en cualquier momento.
- *p siempre actúa sobre la variable a la que apunta en ese momento.
*/

// Ejercicio 1)Declarar un apuntador a entero y asignarle la dirección de una variable.
Mostrar valor y dirección.
#include <iostream>
    using namespace std;
int main()
{
    int num;
    num = 27;
    cout << "El numero es: " << num << endl;
    cout << "Su direccion es: " << &num << endl;
    return 0;
}

// Ejercicio 2)Declarar una variable float, un apuntador a float, asignarle su dirección y mostrar:
#include <iostream>
using namespace std;
int main()
{
    float num = 27.9;      // Declaramos una variable tipo float
    float *puntero = &num; // apuntador tipo float que apunta a la variable num

    cout << "El numero es: " << num << endl;
    cout << "Su direccion es: " << &num << endl;
    cout << "Valor de num a través del apuntador: " << *puntero << endl;
    cout << "Dirección de memoria guardada en el apuntador: " << puntero << endl;
    return 0;
}

// Ejercicio 3)Crear una variable char, asignarle una letra, luego crear un char* que apunte a ella.
#include <iostream>
using namespace std;
int main()
{
    char a = 'A';
    char *puntero = &a;

    cout << "La direccion de la variable es: " << &a << endl;
    cout << "El caracter es: " << a << endl;
    cout << "El valor de a por medio del apuntador es: " << *puntero << endl;
    return 0;
}

/*Ejercicio 4)Declarar tres variables int.
Crear un solo apuntador y hacer que vaya apuntando a cada una,
mostrando su valor y dirección en cada paso.*/
#include <iostream>
using namespace std;
int main()
{

    int a = 27, b = 99, c = 15;
    int *puntero;

    // Apuntar a "a"
    puntero = &a;
    cout << "El numero es: " << a << endl;
    cout << "La direccion de la variable es: " << &a << endl;
    cout << "El valor de a por medio del apuntador es: " << *puntero << endl;
    cout << "------------------------------------------" << endl;

    // Apuntar a "b"
    puntero = &b;
    cout << "El numero es: " << b << endl;
    cout << "La direccion de la variable es: " << &b << endl;
    cout << "El valor de a por medio del apuntador es: " << *puntero << endl;
    cout << "------------------------------------------" << endl;

    // Apuntar a "c"
    puntero = &c;
    cout << "El numero es: " << c << endl;
    cout << "La direccion de la variable es: " << &c << endl;
    cout << "El valor de a por medio del apuntador es: " << *puntero << endl;
    cout << "------------------------------------------" << endl;

    return 0;
}

/*Ejercicio 5)
Declarar un arreglo de 5 enteros y un apuntador que apunte al primer elemento.
Usar el apuntador para mostrar los 5 valores usando aritmética de punteros (*(ptr + i)).*/

#include <iostream>
using namespace std;

int main()
{
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *puntero = arreglo; // Apunta al primer elemento

    for (int i = 0; i < 5; i++)
    {
        cout << "El elemento " << i << " es " << *(puntero + i) << endl;
    }

    return 0;
}

/*
Ejercicio 6)
Declarar una variable int, cambiar su valor directamente,
y luego cambiarlo usando un apuntador (*ptr = nuevoValor). Mostrar antes y después.*/

#include <iostream>
using namespace std;

int main()
{
    int numero = 9;
    cout << "Valor original del numero " << numero << endl;
    numero = 27;
    cout << "Ahora el valor del numero es: " << numero << endl;

    int *puntero = &numero;
    *puntero = 99;
    cout << "Ahora el valor despues del cambio con puntero es: " << numero << endl;
    return 0;
}

/*
Ejercicio 7)
Crear una función void duplicar(int* ptr) que reciba un apuntador
y duplique el valor de la variable apuntada.*/

#include <iostream>
using namespace std;

void duplicar(int *puntero)
{
    *puntero = (*puntero) * 2;
}
/*En C++ las funciones no se pueden definir dentro de otra función.
Tenés que declararla afuera de main.*/

int main()
{
    int numero = 9;
    int *puntero = &numero;
    cout << "El valor original es: " << numero << endl;
    ;
    duplicar(puntero);
    cout << "El valor del puntero duplicado es: " << numero << endl;
    return 0;
}

/*
Ejercicio 8)
Leer un número desde el teclado y pasar su dirección a una función
que determine si es par o impar usando *ptr.
*/

#include <iostream>
using namespace std;

void esPar(int *puntero)
{
    if (*puntero % 2 == 0)
    {
        cout << "El valor al que apunta el puntero es par." << endl;
    }
    else
    {
        cout << "El valor al que apunta el puntero no es par." << endl;
    }
}
int main()
{
    int numero;
    cout << "Elige un numero: " << endl;
    cin >> numero;
    int *puntero = &numero;
    esPar(puntero);
    return 0;
}

/*Ejercicio 9)
Crear dos variables int y un apuntador.
Intercambiar los valores sin usar variables auxiliares, solo con el apuntador y operaciones aritméticas.*/
#include <iostream>
using namespace std;
int main()
{
    int a = 9, b = 12;
    int *puntero;

    cout << "Antes del intercambio:" << endl;
    puntero = &a;
    cout << "El valor primero de la variable a es: " << *puntero << endl;

    puntero = &b;
    cout << "El valor primero de la variable b es: " << *puntero << endl;

    // Intercambio usando solo el puntero
    puntero = &a;
    *puntero = *puntero + b; // a = a + b
    puntero = &b;
    *puntero = a - *puntero; // b = a - b (nuevo b)
    puntero = &a;
    *puntero = *puntero - b; // a = a - b (nuevo a)

    cout << "\nDespués del intercambio:" << endl;
    puntero = &a;
    cout << "a = " << *puntero << endl;
    puntero = &b;
    cout << "b = " << *puntero << endl;

    return 0;
}

/*
Ejercicio 10)
Declarar un char frase[] = "Nacho".
 Usar un apuntador para recorrer la cadena letra por letra y mostrar cada una con while (*ptr != '\0').*/
#include <iostream>
using namespace std;
int main()
{
    char arreglo[6] = "NACHO";
    char *puntero;
    puntero = arreglo;
    while (*puntero != '\0')
    {
        cout << *puntero++ << endl;
    }
    return 0;
}

// Ejercicio 11)Suma 1 a cada elemento del arreglo
#include <iostream>
using namespace std;

int main()
{
    int arreglo[5] = {1, 2, 3, 4, 5};
    int *apuntador = arreglo;
    for (int i = 0; i < 5; i++)
    {
        *apuntador = arreglo[i];
        *apuntador = *apuntador + 1;
        cout << *apuntador << " ";
    }
    return 0;
}

// Ejercicio 12)Ingresar un arreglo y usar un apuntador para determinar su tamaño
#include <iostream>
using namespace std;

int main()
{
    int arreglo[5], contador = 0;
    int *apuntador = arreglo;
    cout << "Ingrese un arreglo:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arreglo[i];
        *apuntador++;
        contador++;
        *apuntador = contador;
    }
    cout << "El tamanio del arreglo es: " << *apuntador << endl;
    return 0;
}

/*Ejercicio 11)
Declarar un arreglo de 6 float, pedir los valores al usuario y mostrar:
Todos los valores usando un puntero.
La suma total usando aritmética de punteros.
*/

#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    int sumador = 0;
    int *puntero = arr;

    cout << "Elige los numeros del arreglo: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    cout << "Los valores del arreglo son: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "El elemento " << i << " es " << *puntero << endl;
        sumador = sumador + *puntero;
        puntero++;
    }

    cout << "La suma total es: " << sumador;
    return 0;
}

/*
Ejercicio 12)
Declarar un arreglo de 4 char y leer letras del usuario.
Luego usar un puntero para mostrar las letras en orden inverso.
*/
#include <iostream>
using namespace std;

int main()
{
    char arr[] = "hola";
    char *puntero = arr;

    cout << "Las letras del arreglo son: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << *puntero;
        puntero++;
    }
    cout << endl;

    cout << "El arreglo invertido es: " << endl;
    for (int i = 6; i >= 0; i--)
    {
        cout << *puntero;
        puntero--;
    }

    return 0;

    /*
    Ejercicio 13)
    Crear una variable int y un puntero a int.
    Asignar el valor 100 a través del puntero y mostrarlo en pantalla.
    */

#include <iostream>
    using namespace std;

    int main()
    {
        int a;
        int *puntero;
        puntero = &a;
        *puntero = 100;
        cout << a << endl;

        return 0;
    }

/*

Ejercicio 14)
Pedir al usuario 3 números enteros y almacenarlos en un arreglo.
Usar un puntero para encontrar el mayor de ellos.
*/
#include <iostream>
    using namespace std;

    int main()
    {
        int arreglo[3] = {1, 2, 1};
        int mayor;
        int *puntero = arreglo;
        mayor = arreglo[0];
        cout << "Elige 3 numeros enteros: " << endl;
        for (int i = 0; i < 3; i++)
        {
            // cin >> arreglo[i];
            if (*puntero > arreglo[0])
            {
                mayor = *puntero;
            }
            puntero++;
        }
        cout << "El mayor es: " << mayor << endl;
        return 0;
    }

#include <iostream>
    using namespace std;

    int main()
    {
        int arreglo[3];
        int mayor;
        int *puntero = arreglo;

        cout << "Elige 3 numeros enteros: " << endl;

        // Leer valores del usuario
        for (int i = 0; i < 3; i++)
        {
            cin >> arreglo[i];
        }

        mayor = arreglo[0]; // Inicializo mayor con el primer valor
        puntero = arreglo;  // Apunto al inicio del arreglo

        for (int i = 0; i < 3; i++)
        {
            if (*puntero > mayor)
            {
                mayor = *puntero;
            }
            puntero++;
        }

        cout << "El mayor es: " << mayor << endl;

        return 0;
    }

    /*

    Ejercicio 15)
    Declarar una cadena char texto[] = "Hola mundo".
    Usar un puntero para contar cuántas letras ‘o’ tiene la cadena.}
    */
#include <iostream>
    using namespace std;

    int main()
    {
        char texto[] = "Hola mundo";
        int contador = 0;
        char *puntero = texto;
        for (int i = 0; i < 10; i++)
        {
            puntero++;
            if (*puntero == 'o')
            {
                contador++;
            }
        }
        cout << "En total aparecen " << contador << " o" << endl;
        return 0;
    }

/*
Ejercicio 16)
Pedir 5 enteros al usuario y almacenarlos en un arreglo.
Usar un puntero para multiplicar cada número por 2 y mostrar el resultado.*/
#include <iostream>
    using namespace std;

    int main()
    {
        int a[5];
        int *puntero = a;

        cout << "Ingresa 5 numeros: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        cout << "El arreglo original es: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << *puntero << endl;
            puntero++;
        }
        puntero = a;
        cout << "El puntero multiplicado por 2 es: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << 2 * (*puntero) << endl;
            puntero++;
        }

        return 0;
    }

/*
Ejercicio 17)
Crear un programa que lea un número entero y
pase su dirección a una función void mostrarCuadrado(int* ptr)
que muestre el cuadrado de ese número.
*/
#include <iostream>
#include <cmath>
    using namespace std;

    void mostrarCuadrado(int *puntero)
    {
        cout << "El cuadrado del numero es:" << pow(*puntero, 2) << endl;
    }

    int main()
    {
        int a;
        cout << "Ingresa 1 numero entero: " << endl;
        cin >> a;
        int *puntero = &a;
        mostrarCuadrado(puntero);
        return 0;
    }

/*
Ejercicio 18)
Crear un arreglo de 5 enteros y una función void
mostrarElementos(int* ptr, int n) que imprima todos
los elementos usando aritmética de punteros.*/
#include <iostream>
#include <cmath>
    using namespace std;

    void mostrarElementos(int *puntero, int a)
    {
        cout << "Los elementos del arreglo usando aritmetica de apuntadores son: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << *(puntero + i) << endl;
        }
    }
    int main()
    {
        int a[5];
        int *puntero = a;
        cout << "Ingresa un arreglo de 5 enteros: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        mostrarElementos(puntero, 5);
        return 0;
    }

    /*
    Ejercicio 19)
    Declarar dos variables float. Usar un solo puntero para:
    Apuntar a la primera y mostrar su valor y dirección.
    Apuntar a la segunda y mostrar su valor y dirección.
    */

/*Ejercicio 20)
Crear un arreglo char palabra[] ingresada por el usuario. 
Usar un puntero para mostrar la palabra en mayúsculas (puedes usar toupper).
*/

/*Ejercicio 11)
Crear una función void invertir(int* arr, int n) que invierta el contenido de un arreglo usando solo apuntadores (sin usar índices con []).

Ejercicio 12)
Implementar una función int* buscar(int* arr, int n, int valor) que busque un valor en un arreglo y devuelva un apuntador a la posición donde se encontró o nullptr si no está.

Ejercicio 13)
Crear una función void copiarCadena(char* destino, const char* origen) que copie una cadena de caracteres usando solo apuntadores (sin usar strcpy ni índices).

Ejercicio 14)
Dado un arreglo de enteros, usar un apuntador para calcular la suma de los elementos que son múltiplos de 3.

Ejercicio 15)
Implementar una función void ordenarSeleccion(int* arr, int n) que ordene un arreglo usando el método de selección (selection sort), trabajando exclusivamente con apuntadores.

Ejercicio 16)
Crear un programa que pida 5 strings (cadenas) al usuario, los guarde en un arreglo de punteros a char* y luego imprima las cadenas en orden inverso.

Ejercicio 17)
Explicar y demostrar con código cómo funciona la diferencia entre un puntero a puntero (int** ptr) y un puntero normal (int* ptr). Crear una función que modifique el valor de un entero usando un puntero a puntero.

Ejercicio 18)
Crear una función int** crearMatriz(int filas, int columnas) que reserve dinámicamente memoria para una matriz (arreglo bidimensional) usando punteros a punteros, y otra función para liberar esa memoria.

Ejercicio 19)
Implementar una función que intercambie dos cadenas de caracteres (strings) intercambiando los apuntadores (punteros), no los contenidos.

Ejercicio 20)
Crear una función void concatenar(char* destino, const char* origen) que concatene dos cadenas usando solo apuntadores.
*/
Ejercicio 21)
#include <iostream>
#include <new>
using namespace std;

int main()
{
    int numeroDeCalif;
    cout << "Introduce el numero de calificaciones que desea ingresar: " << endl;
    cin >> numeroDeCalif;

    // Creamos el apuntador
    int *calif = new int[numeroDeCalif]; /*Declaramos un arreglo de tamaño
   numeroDeCalif*/

    for (int i = 0; i < numeroDeCalif; i++)
    {
        cout << "Introduzca una calificacion: ";
        cin >> calif[i];
    }
    cout << "Se creo un arreglo para " << numeroDeCalif << " numeros enteros." << endl;
    cout << "Los valores almacenados en el arreglo son: " << endl;
    for (int i = 0; i < numeroDeCalif; i++)
    {
        cout << endl
             << calif[i];
    }
    delete[] calif;
    return 0;
}
