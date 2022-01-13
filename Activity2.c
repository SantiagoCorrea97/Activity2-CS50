#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


void PriMenu();
void opcion1(); 
void opcion2(); 
void opcion3(); 
void opcion4(); 


int main (void)
{
 
time_t random; // puntero para guardar la dirección de time(NULL).
random = time(NULL); //tiempo calendario desde 1970 en segundos.
srand(random); // Inicializar la generación de números aleatorios. 


int opc = 0; // variable para seleccionar en menú.

 while(opc!=5)
 {
     
     PriMenu();
     scanf("%i", &opc); // preguntar por opción.
     
     switch (opc)
     {
        case 1:
            opcion1();
            break;
        case 2:
            opcion2(); 
            break;
        case 3:
            opcion3();
            break; 
        case 4:
            opcion4(); 
            break;
        case 5:
            break;
         default:
            printf("\n");
            printf("Lo siento, opción inválida. \n");
            printf("\n");
            break;
     }
 }

}

void PriMenu() //Función para imprimir el menú.
{
    printf("\n");
    printf("Bienvenido al Menú \n");
    printf("\n");
    Sleep(1000);
    printf("Por favor seleccione una tarea.\n");
    printf("1. Determinar si un valor ingresado por comando es una IP valida.\n");
    printf("2. Convertir un numero en ASCII.\n");
    printf("3. Generar un numero aleatorios entre 1 y 6.\n");
    printf("4. Concatenar dos palabras ingresadas.\n");
    printf("5. Salir del Menú.\n");
    printf("\n");
    printf("Ingrese el número de la tarea que quiere ejecutar: ");
}

void opcion1() //Función para determinar IP válido.
{
    int ip1, ip2, ip3, ip4;

    printf("\n");
    printf("Por favor digite la IP con los . entre los octetos. \n");
    printf("Ingresa la Ip que quiere comprobar si es válida: ");
    scanf("%i.%i.%i.%i", &ip1, &ip2, &ip3, &ip4); // toma la IP
    
    if (ip1 > 255 || ip2 > 255 || ip3 > 255 || ip4 > 255 )
    {
        printf("\n");
        printf("Alguno de los octetos es mayor a 255, IP inválida.");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("IP válida.");
        printf("\n");
    }
    Sleep(5000);
}

void opcion2() //Función para convertir en ASCII.
{
    int num = 0;
    char ascii;

    printf("\n");
    printf("Ingrese el número que desea convertir a ASCII:");
    scanf("%i", &num); // toma el número que se va a convertir.

    ascii = '0' + num-48; // convertir el int en char

    if(num > 32 && num < 128)
    {
        printf("\n");
        printf("El ASCII de %i es %c.\n", num, ascii);
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Lo sentimos, sólo mostramos caracteres entre el 33 y el 127 de la lista ASCII.");
        printf("\n");
    }
    Sleep(5000);
}

void opcion3() //Función para número aleatorio.
{
    int numr = 0;
    numr = rand() % 6 + 1; //genera el número aleatorio
    printf("\n");
    printf("Tu número de la suerte es: %i", numr);
    printf("\n");

    Sleep(5000);
}

void opcion4() //Función para concatenar palabras.
{
    char pal1[50]; //Declarar los string como arrays de char.
    char pal2[50];

    printf("\n");
    printf("Primera palabra: ");
    scanf("%s", pal1); // Tomamos la palabra 1.
    printf("Segunda palabra: ");
    scanf("%s", pal2); // Tomamos la palabra 1.

    printf("\n");
    printf("Palabras concatenadas: %s%s", pal1, pal2); // Imprimimos las palabras seguidas.
    printf("\n");

    Sleep(5000);

}