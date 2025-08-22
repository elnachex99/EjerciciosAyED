/*EJERCICIOS C++ PARA INGENIERIAS Y CIENCIAS
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
UNIDAD 1:Introduccion a C++ y programacion estructurada

1)Hola usuario:Escribe un programa que pida tu nombre 
y lo muestre en pantalla con un mensaje de bienvenida
*/
#include <iostream>
using namespace std;
int main(){
    string a;
    cout << "Ingresa tu nombre: " << endl;
    cin >> a;
    cout << "Bienvenido " << a << endl;
    return 0;
}

/*
2)Suma de dos números:
Pide dos enteros y muestra la suma, la resta, la multiplicación y la división (con decimales).
*/
#include <iostream>
using namespace std;
int main(){
    double a,b;
    cout << "Ingresa 2 numeros: " << endl;
    cin >> a >> b;
    while(b == 0){
        cout << "No se puede dividir por cero." << endl;
        cin >> b;
    }
       
    cout << "Suma:  "<< a + b << endl;
    cout << "Resta: "<< a - b << endl;
    cout << "Multiplicacion: "<< a * b << endl;
    cout << "Division: " << a / b << endl;
    return 0;
}

/*
3)Área y perímetro de un círculo:
Pide el radio y calcula el área y el perímetro. Usa const double PI = 3.1416;.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const double PI = 3.1416;
    double radio;
    cout << "Ingresa el radio del circulo: " << endl;
    cin >> radio;
    cout << "El perimetro es: " << PI * radio * 2 << endl;
    cout << "El area es: " << PI * pow(radio,2) << endl;
    return 0;
}

/*
4)Conversor de temperaturas:
Pide una temperatura en °C y conviértela a °F con la fórmula:
F = (9/5)*C + 32
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double celsius;
    cout << "Ingresa la temperatura en grados celsius: " << endl;
    cin >> celsius;
    cout << "La temperatura en fahrenheit es: " << ((9/5) * celsius) + 32 << endl;
    return 0;
}

/*
5)Promedio de 3 notas:
Pide tres notas de un estudiante y muestra su promedio.
*/
#include <iostream>
using namespace std;
int main(){
    double a,b,c;
    cout << "Dame 3 notas para calcular el promedio: " << endl;
    cin >> a >> b >> c;
    cout << "El promedio es: " << (a+b+c)/3 << endl;
    return 0;
}

/*
6)Tiempo en segundos:
Pide una cantidad de segundos y conviértela a horas, minutos y segundos.
(Ejemplo: 3672 → 1 h, 1 min, 12 seg)
*/
#include <iostream>
using namespace std;
int main(){
    int a,horas,min,resto1,segundos;
    cout << "Dame una cantidad de segundos para convertir: " << endl;
    cin >> a;
    horas = a/3600;
    resto1 = a % 3600;
    min = resto1 / 60;
    segundos = resto1  % 60;
    
    cout << horas << "h," << min << " min," << segundos << "s." << endl;
    return 0;
}

/*
7)Intercambio de variables:
Pide dos enteros e intercambia sus valores usando una variable auxiliar.
*/
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Dame 2 numeros enteros para intercambiar sus variables: " << endl;
    cin >> a >> b;
    cout << "La variable a = " << a << endl;
    cout << "La variable b = " << b << endl;
    
    //cambio de variable de a 
    c = a; /*"Toma el valor que está en a y guárdalo dentro de c".*/
    a = b;
    b = c;
  
    cout << "Ahora--------->" << endl;
    cout << "La variable a = " << a << endl;
    cout << "La variable b = " << b << endl;
    return 0;
}

/*
8)Hipotenusa del triángulo:
Pide los catetos de un triángulo rectángulo y calcula la hipotenusa usando Pitágoras
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,hipotenusa;
    cout << "Dame 2 numeros enteros para calcular la hipotenusa: " << endl;
    cin >> a >> b;
    cout << "La variable a = " << a << endl;
    cout << "La variable b = " << b << endl;
  
    hipotenusa = sqrt(pow(a,2) + pow(b,2));
    cout << "La hipotenusa es igual a: " << hipotenusa << endl;
    return 0;
}

/*
9)Número invertido:
Pide un número de 3 cifras y muéstralo invertido.
Ejemplo: 123 → 321.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,unidad,decena1,decena2,centena;
    cout << "Dame un numero de tres cifras:" << endl;
    cin >> a;
    unidad = (a%10);
    decena1 = (a%100);
    decena2 = decena1 / 10;
    centena = a / 100;
    
    cout << "El numero invertido es: " << unidad *100 + decena2 * 10 + centena << endl;
    return 0;
}

/*
10)Salario semanal:
Pide las horas trabajadas y el pago por hora, luego calcula el salario semanal.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double salario,horas,salarioSemanal;
    cout << "Dame tus horas trabajadas:" << endl;
    cin >> horas;
    cout << "Dame tu pago por hora:" << endl;
    cin >> salario;
    
    salarioSemanal = horas * salario; 
    cout << "Tu salario semanal es de: " << salarioSemanal << "$" << endl;
    return 0;
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*Unidad 2
Unidad 2 – Estructuras de control

Ejercicio 1)Número par o impar:
Pide un número entero y determina si es par o impar usando if
*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int numero;
    cout << "Dame un numero para determinar si es par o impar:" << endl;
    cin >> numero;
    if(numero % 2 == 0){
        cout << "El numero " << numero << " es par."<< endl;
    }
    else{
        cout << "El numero " << numero << " es impar."  << endl;
    }
    return 0;
}

/*Ejercicio 2)Mayor de dos números:
Pide dos enteros y muestra cuál es mayor o si son iguales.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int numero1,numero2;
    cout << "Dame dos numeros para determinar cual es mayor :" << endl;
    cin >> numero1 >> numero2;
    if(numero1 > numero2){
        cout << "El numero " << numero1 << " es mayor."<< endl;
    }
    else if(numero1 == numero2){
        cout << "El numero " << numero1 << " es igual al otro numero ingresado. " << endl;
    }else{
        cout << "El numero " << numero2 << " es mayor. " << endl;
    }
    return 0;
}

/*Ejercicio 3)
Aprobado o desaprobado:
Pide una nota (0 a 10). Si es ≥ 6 muestra “Aprobado”, si no “Desaprobado”.*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int nota;
    cout << "Dame la calificacion para saber si aprobaste :" << endl;
    cin >> nota;
    while (nota > 10 || nota < 0){
        cout << "Ingresa un numero valido." << endl;
        cin >> nota;
    }
    if(nota >= 6){
        cout << "Aprobado."<< endl;
    }
    else{
        cout << "Desaprobado" << endl;
    }
    return 0;
}

/*Ejercicio 4)Máximo de tres números:
Pide tres enteros y muestra cuál es el mayor de los tres (sin usar funciones de librería).*/
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n1,n2,n3;
    cout << "Dame 3 enteros para determinar cual es el mayor :" << endl;
    cin >> n1 >> n2 >> n3 ;
    if(n1 >= n2 && n1 >= n3){
        cout << "El mayor es: "<<n1<< endl;
    }
    else if(n2>=n1 && n2 >= n3){
        cout << "El mayor es: "<<n2<< endl;
    }else{
        cout << "El mayor es: "<<n3<< endl;
    }
    return 0;
    
}

/*Ejercicio 5)Menú con switch:
Muestra un menú:
1. Sumar
2. Restar
3. Multiplicar
4. Dividir */

#include <iostream>
using namespace std;
int main(){
    int numero;
    double n1,n2;
    cout << "Ingresa el caso que necesites: \n 1. Sumar \n 2. Restar \n 3. Multiplicar \n 4. Dividir" << endl;
    cin >> numero;
    switch(numero){
        case 1:
        cout << "Ingresa los 2 numeros: " << endl;
        cin >> n1 >> n2;
        cout <<"Resultado: " << n1 + n2 << endl;
        break;
        case 2: 
        cout << "Ingresa los 2 numeros: " << endl;
        cin >> n1 >> n2;
        cout <<"Resultado: " << n1 - n2 << endl;
        break;
        case 3:
        cout << "Ingresa los 2 numeros: " << endl;
        cin >> n1 >> n2;
        cout <<"Resultado: " << n1 * n2 << endl;
        break;
        case 4:
        cout << "Ingresa los 2 numeros: " << endl;
        cin >> n1 >> n2;
        while(n2 == 0) {
            cout << "No se puede dividir por cero\n Ingresa otro numero:" << endl;
            cin >> n2;
        }
        cout <<"Resultado: " << n1 / n2 << endl;
        break;
    }
    return 0; 
}

/*Ejercicio 6)Tabla de multiplicar:
Pide un número y muestra su tabla de multiplicar del 1 al 10 con un for.*/
#include <iostream>
using namespace std;
int main(){
    int numero;
    cout << "Ingresa el numero que deseas saber su tabla: " << endl;
    cin >> numero;
    for (int i=1 ; i<=10 ; i++){
     cout << i << "*" << numero <<  " = " << i*numero << endl;   
    }
    return 0; 
}

/*Ejercicio 7)Suma de los primeros N números:
Pide un número N y calcula la suma de 1 + 2 + ... + N usando un bucle.*/
#include <iostream>
using namespace std;
int main(){
    int numero,contador = 0;
    cout << "Ingresa un numero : " << endl;
    cin >> numero;
    while(numero < 0) {
        cout << "Elige un numero valido." << endl;
        cin >> numero;
    }
    for (int i=0 ; i<=numero ; i++){ 
     contador = contador + i;  
    }
    cout <<"La suma de los numeros hasta " << numero << " es igual a: " << contador << endl;
    return 0; 
}

/*Ejercicio 8)Factorial:
Pide un número y calcula su factorial con un for o while.*/
#include <iostream>
using namespace std;
int main(){
    int numero;
    long long contador = 1;
    cout << "Ingresa un numero : " << endl;
    cin >> numero;
    while(numero < 0) {
        cout << "Elige un numero valido." << endl;
        cin >> numero;
    }
    for (int i=1 ; i<=numero ; i++){ 
     contador = contador * i;  
    }
    cout <<"El factorial de " << numero << " es igual a: " << contador << endl;
    return 0; 
}

/*Ejercicio 9)Contador de dígitos:
Pide un número y determina cuántos dígitos 
tiene usando un bucle (while dividiendo entre 10). */

#include <iostream>
using namespace std;
int main(){
    int numero,contador = 0;
    cout << "Ingresa un numero : " << endl;
    cin >> numero;
    while(numero > 0) {
        numero = numero / 10;
        contador++;
    }
    cout <<"El numero ingresado tiene " << contador << " digitos."  << endl;
    return 0; 
}

/*Ejercicio 10)Número primo:
Pide un número entero y determina si es primo o no 
(divisible solo por 1 y por sí mismo).*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int numero;
    bool esPrimo = true;
    cout << "Ingresa un numero : " << endl;
    cin >> numero;
    
    if(numero <= 1){
        esPrimo = false;
    }else{
        for(int i = 2 ; i < numero ; i++){
            if (numero % i == 0){
            esPrimo = false;
            break;
            }
        }
    }
    if(esPrimo){
    cout << numero << " es primo"  << endl;
    }
    else{
        cout << "No es primo" << endl;
    }
      
    return 0; 
}

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------
Unidad 3 - Funciones y paso de parámetros

Ejercicio 1) Función de suma:
Escribe una función int sumar(int a, int b) que reciba dos enteros y devuelva su suma.
*/

#include <iostream>
using namespace std;

//funcion
int sumar(int a,int b){
    return a + b;
}
int main(){
    int a,b;
    cout << "Elige 2 numeros para sumar" << endl;
    cin >> a >> b;
    cout << "La suma es: " << sumar(a,b) << endl;;
    return 0; 
}


/*
Ejercicio 2)Área de un rectángulo:
Escribe una función double areaRect(double base, double altura) 
que devuelva el área. Pide los datos en main.
*/
#include <iostream>
using namespace std;

//funcion
double areaRect(double base ,double altura){
    return base * altura;
}
int main(){
    double base,altura;
    cout << "Escribe la base y altura del rectangulo:" << endl;
    cin >> base >> altura;
    cout << "El area es: " << areaRect(base,altura) << endl;;
    return 0; 
}


/*
Ejercicio 3)Máximo de tres números:
Crea una función int maximo(int a, int b, int c) que devuelva el mayor de los tres.
*/
#include <iostream>
using namespace std;

//funcion
int maximo(int a,int b,int c){
    if(a >= b && a >= c){
    cout << "El mayor es: " << a <<  endl;
    }
    else if(b >= a && b >=c){
    cout << "El mayor es: " << b <<  endl;  
    }
    else{
       cout << "El mayor es: " << c <<  endl; 
    }
}

int main(){
    int a,b,c;
    cout << "Escribe 3 numeros para determinar el maximo:" << endl;
    cin >> a >> b >>c ;
    cout << maximo(a,b,c) << endl;;
    return 0; 
}

/*
Ejercicio 4)Número par:
Haz una función bool esPar(int n) que devuelva true si el número es par 
y false si no lo es.
*/

#include <iostream>
using namespace std;

//funcion
bool esPar(int n){
    if(n % 2 == 0){
    return true;
    }
    else{
    return false;  
    }
}

int main(){
    int n;
    cout << "Escribe un numero para determinar si es par o no:" << endl;
    cin >> n ;
    cout << esPar(n) << endl;;
    return 0; 
}


/*
Ejercicio 5)Intercambio por referencia:
Haz una función void intercambiar(int &a, int &b) que cambie los valores de a y b.
*/

#include <iostream>
using namespace std;

//funcion
void intercambiar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

}

int main(){
    int a,b;
    cout << "Escribe un numero para intercambiar los valores: " << endl;
    cin >> a >> b ;
    cout << "El primer numero ingresado es: " << a << " y el segundo es: " << b << endl;
    intercambiar(a,b);
    cout << "Ahora el primer numero es: " << a << " y el segundo es: " << b << endl;
    return 0; 
}

/*
Ejercicio 6)Factorial con función:
Escribe una función long long factorial(int n) que devuelva el factorial de n.
*/

#include <iostream>
using namespace std;

//funcion
long long factorial(int a){
    long long contador = 1;
    for (int i = 1 ; i < a ; i++){
        contador = contador * i;
    }
    return contador; 
}

int main(){
    int a;
    cout << "Escribe un numero para obtener su factorial: " << endl;
    cin >> a ;
    cout << "El factorial de " << a << " es " << factorial(a) << endl;
    return 0; 
}

/*
Ejercicio 7)Promedio de un arreglo:
Haz una función double promedio(int arr[], int n) 
que reciba un arreglo de enteros y devuelva el promedio.
*/

#include <iostream>
#include <vector>
using namespace std;

//funcion
double promedio (int arreglo[],int a){
    double contador = 0;
    for (int i = 0 ; i < a ; i++){
        contador = arreglo[i] + contador;
    } 
    return contador / a;
}

int main(){
    int a;
    double contador;
    cout << "Elije la cantidad de elementos del arreglo" << endl;
    cin >> a;
    vector<int> arreglo(a);
    
    cout << "Elige los elementos del arreglo: " << endl; 
    for(int i = 0 ; i < a ; i++){
        cin >> arreglo[i];
    }
    cout <<"El promedio es : " << promedio(&arreglo[0], a) << endl;

    return 0; 
}

/*
Ejercicio 8) Contar vocales:
Crea una función int contarVocales(string texto) 
que cuente cuántas vocales tiene una cadena.
*/
#include <iostream>
#include <string>
using namespace std;

//funcion
int contarVocales(string texto){
    int contador = 0;
    for (int i = 0; i < texto.size(); i++) {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u') {
            contador++;
        }
    }
    return contador;
}
    

int main(){
    string texto;
    cout << "Escribe una oracion: " << endl;
    getline(cin, texto);
    cout << contarVocales(texto) << endl;
    return 0; 
}

/*
Ejercicio 9)Potencia con multiplicaciones:
Haz una función int potencia(int base, int exponente) 
que calcule la potencia usando un bucle (no pow).
*/

#include <iostream>
#include <cmath>
using namespace std;

//funcion
int potencia(int base,int exponente){
     return pow(base,exponente);
    
}

int main(){
    int base ,exponente;
    cout << "Escribe un numero y su exponente al que sera elevado " << endl;
    cin >> base >> exponente;
    cout << "El resultado es: " << potencia(base,exponente) << endl;
    
    return 0; 

}
/*
-----------------------------------------------------------------------------------------------
Unidad 4) Unidad 4 – Arreglos y cadenas de caracteres

Ejercicio 1)Promedio de un arreglo:
Pide al usuario N números, guárdalos en un arreglo y calcula el promedio.
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int cantidadElementos;
    float promedio,suma=0;
    
    cout << "Ingresa la cantidad de elementos que quieres que tenga la lista: " << endl;
    cin >> cantidadElementos;
    
    vector <int> arreglo(cantidadElementos);
    
    cout << "Ingresa los elementos de la lista: " << endl;
    for (int i=0 ;i<cantidadElementos ;i++){
        cin >> arreglo[i];
        suma = suma + arreglo[i];
        
    }
    promedio = suma / cantidadElementos;
    cout << "El promedio de los datos ingresados es: " << promedio << endl;
    return 0;
}

/*
Ejercicio 2)Mayor y menor en un arreglo:
Pide 10 enteros y determina cuál es el mayor y cuál el menor.
*/
#include <iostream>
using namespace std;


int main(){
   int arreglo[10];
   int max,min;
   cout << "Ingresa 10 numeros: " << endl;
   for(int i = 0 ; i < 10 ; i++){
       cin >> arreglo[i];
       if(i == 0){
           max = arreglo[i];
       }
       else if(arreglo[i] > max){
           max = arreglo[i];
        }
   }
      for(int i = 0 ; i < 10 ; i++){
       if(i == 0){
           min = arreglo[i];
       }
       else if(arreglo[i] < min){
           min = arreglo[i];
        }
    }
   cout << "El maximo es: " << max << endl;
   cout << "El minimo es: " << min << endl;
   return 0;
}

/*
Ejercicio 3)
Invertir un arreglo:
Pide 5 enteros, guárdalos en un arreglo y muéstralos en orden inverso.
*/

#include <iostream>
#include <vector>
using namespace std;


int main(){
   int cantidadElementos;
   
   cout << "Ingresa la cantidad de elementos de la lista: " << endl;
   cin >> cantidadElementos;
   
   vector <int> arreglo (cantidadElementos);
   cout << "Ingresa los elementos de la lista: " << endl;
   for(int i = 0 ; i < cantidadElementos  ; i++){
       cin >> arreglo[i];
   }
   cout << "El orden inverso de la lista que ingresaste es: " << endl;
   
    for(int i = cantidadElementos - 1; i >= 0 ; i--){
        cout << arreglo[i] << endl;
    }
   return 0;
}

/*
Ejercicio 4)Suma de dos arreglos:
Declara dos arreglos de 5 enteros cada uno, pide los datos y genera un tercer arreglo
*/

#include <iostream>
#include <vector>
using namespace std;


int main(){
   int arreglo1[5],arreglo2[5];
   
   cout << "Ingresa los elementos de la lista: " << endl;
   for(int i = 0 ; i < 5  ; i++){
       cin >> arreglo1[i];
   }
   
   cout << "Ingresa los elementos de la lista: " << endl;
    for(int j = 0; j < 5 ; j++){
        cin >> arreglo2[j];
    }
    
    cout << "El arreglo resultante es: " << endl;
    for(int i = 0 ; i<5 ;i++){
        cout << arreglo1[i] + arreglo2[i] << endl;
        
    }
   return 0;
}

/*
Ejercicio 5)Buscar un número en un arreglo:
Pide un arreglo de 8 números y un número a buscar. Indica si está o no en el arreglo.
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
   int arreglo[8],numero;
   
   cout << "Ingresa los elementos de la lista: " << endl;
   for(int i = 0 ; i < 8  ; i++){
       cin >> arreglo[i];
   }
   
   cout << "Ingresa el numero que quieres saber si esta o no en el arreglo: " << endl;
   cin >> numero;
   bool esta = false;
   for(int i = 0 ;i < 8 ;i++){
       if(arreglo[i] == numero){
          esta = true;
        }
   }
   if(esta == true){
       cout << "El elemento se encuentra en el arreglo." << endl;
   }
   else if(esta == false){
       cout << "El elemento no esta en el arreglo." << endl;
   }
   
   return 0;
}

/*
Ejercicio 6)Contar pares e impares:
Pide 10 enteros y cuenta cuántos son pares y cuántos impares.
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
   int arreglo[10],numeroPar=0 ,numeroImpar=0;
   
   cout << "Ingresa los elementos de la lista: " << endl;
   for(int i = 0 ; i < 10  ; i++){
       cin >> arreglo[i];
       if(arreglo[i] % 2 == 0){
           numeroPar++;
       }
       else{
           numeroImpar++;
       }
   }
   cout << "En total hay : " << numeroPar << " numeros pares." << endl;
   cout << "En total hay : " << numeroImpar << " numeros impares." << endl; 
   
   return 0;
}


/*
Ejercicio 7)Buscar el menor valor y su posición en un arreglo
*/
#include <iostream>
#include <vector>
using namespace std;


int main(){
    int tamaño,min,posicion=0;
    
    cout << "Ingresa el tamaño de tu arreglo" << endl;
    cin >> tamaño;
    
    vector <int> arreglo (tamaño);
    
    cout << "Ingresa los elementos de tu arreglo: "<< endl;
    for (int i = 0 ; i < tamaño ;i++){
        cin >> arreglo[i];
        
        if (i == 0){
            min = arreglo[0];
        }
        else if(min >= arreglo[i]){
            min = arreglo[i]; 
            posicion = i + 1;
        }
    }
       
   cout << "El elemento mas chico del arreglo es: " << min << " y su posicion es : " << posicion << endl;
   return 0;
}


/*
Ejercicio 8) Pide N números y di si el arreglo está ordenado de menor a mayor o no.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tamaño,posicionCero;
    cout << "Ingresa el tamanio del arreglo: " << endl;
    cin >> tamaño;
    vector <int> arreglo (tamaño);
    bool ordenado = false;
    cout << "Ingresa los elementos del arreglo: " << endl;
    for(int i=0 ;i<tamaño;i++){
        cin >> arreglo[i];
        if(i == 0){
            posicionCero = arreglo[i];
        }
        else if(posicionCero <= arreglo[i]){
            posicionCero = arreglo[i];
            ordenado = true;
        }
        else{
            ordenado = false;
        }
    }
    if(ordenado){
        cout << "El arreglo esta ordenado de menor a mayor." << endl;
    }
    else{
        cout << "El arreglo no esta ordenado de menor a mayor" << endl;
    }
    return 0;
}






















/*
Ejercicio 8)Eliminar duplicados en un arreglo (ejemplo: {1,2,2,3,1,4} → {1,2,3,4})
*/

/*
Ejercicio 7)Ordenar un arreglo (burbuja):
Pide un arreglo de 6 enteros y ordénalos de menor a mayor usando el algoritmo de la burbuja
*/

/*
Ejercicio 8)Palíndromo:
Pide una palabra y determina si es palíndromo (se lee igual al derecho y al revés).
*/