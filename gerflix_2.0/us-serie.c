#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "us-serie.h"

void iniciarSeriesUsuarios(eUsSerie ususer[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        ususer[i].estado=0;
    }
}

void iniciarSeriesUsuariosHardcode(eUsSerie ususer[])
{
    int cliente[20] = {1,1,1,2,2,3,4,4,5,5,5,7,8,8,8,9,10,10,10,10};
    int serie[20]= {101,102,103,104,103,101,101,102,104,101,101,101,101,102,103,102,101,103,102,104};
    int i;

    for(i=0;i<20;i++)
    {
        ususer[i].cliente=cliente[i];
        ususer[i].serie=serie[i];
        ususer[i].estado=1;
    }
}

void mostrarUsuarioConSuSerie(eUsuario usu[], int tamU, eSerie ser[], int tamS,eUsSerie ususer[], int tamUS)
{
    int i;
    int j;
    int k;
    for(i=0; i<tamUS; i++)
    {
        for(j=0;j<tamU;j++)
        {
            if(ususer[i].estado==1 && usu[j].estado==1)
            {
                if(ususer[i].cliente==usu[j].id)
                {
                    for(k=0;k<tamS;k++)
                    {
                        if(ser[k].estado==1)
                        {
                            if(ususer[i].serie==ser[k].idSerie)
                            {
                                printf("%s %s\n",usu[j].nombres,ser[k].titulo);
                            }
                        }
                    }
                }
            }
        }
    }
}

/** \brief el get para los numeros enteros, el proceso es el mismo que en de decimal y si es un numero pasa el buffer a int
 *
 * \param error[] char se le pasa el mensaje de error en caso de que la validacion falle
 * \return int si es un numero primero pasa la cadena a int y luego lo retorna
 *
 */
int getInt(char error[])
{
    int aux;
    char buffer[64];
    scanf("%s",buffer);
    while(esNumerica(buffer)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        scanf("%s",buffer);
    }
    aux = atoi(buffer);
    return aux;
}

/** \brief get para cadena de caracteres, el proceso es el mismo que los demas, con la diferencia de que se le pasa la variable por parametro
 *
 * \param mensaje[] char mensaje a imprimir
 * \param error[] char mensaje de error
 * \param caracter[] char varible que guarda lo que se quiera ingrasar y luego se valida
 * \return char retorna lo ingresado
 *
 */
char getString(char mensaje[],char error[],char caracter[])
{
    printf("%s",mensaje);
    fflush(stdin);
    gets(caracter);
    while(esLetra(caracter)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        gets(caracter);
    }

    return caracter;
}

/** \brief obtiene el decimal a ingresar y lo pasa a string y lo valida
 *
 * \param mensaje[] char se le pasa el mensaje a utilizar
 * \param error[] char y el mensaje de error en caso de que la validacion falle
 * \return float retorna el numero pasado de string a float
 *
 */
float getDec(char mensaje[],char error[])
{
    float aux;
    char buffer[64];
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",buffer);
    while(esDecimal(buffer)==-1)
    {
        printf("%s",error);
        fflush(stdin);
        scanf("%s",buffer);
    }

    aux = atof(buffer);

    return aux;
}

/** \brief el get para los caracteres y es el mismo proceso que los otros dos
 *
 * \param mensaje[] char se le pasa el mensaje a utilizar
 * \param error[] char y el mensaje de error por si la validacion falla
 * \return char si es un char pasa el buffer a un auxiliar y lo retorna
 *
 */
char getChar(char mensaje[],char error[])
{
    char auxiliar;
    char buffer[64];
    printf("%s",mensaje);
    fflush(stdin);
    scanf("%s",buffer);
    while(esLetra(buffer)==-1 && buffer!='y' && buffer!='n')
    {
        printf("%s",error);
        fflush(stdin);
        scanf("%s",buffer);
    }
    auxiliar=buffer;
    return auxiliar;
}

/** \brief validacion para saber si el numero es decimal o si es un numero o letra
 *
 * \param cadena char* se el pasa el puntero a la cadena pasada en el get y lo recorre para verificar que se un numero o sea un numero decimal
 * \return int retorna -1 si es una letra y 1 si es un numero
 *
 */
int esDecimal(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isdigit(cadena[i])) && cadena[i]!='.')
            {
                return -1;
            }
            i++;
        }
    }
    return 1;
}

/** \brief validacion para los numeros enteros
 *
 * \param cadena char* se le pasa la cadena del get y la recorre
 * \return int devuelve -1 si es una letra y 1 si es un numero
 *
 */
int esNumerica(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isdigit(cadena[i])))
            {
                return -1;
            }///para validar numero
            i++;
        }
    }
    return 1;
}

/** \brief validacion para las letras
 *
 * \param cadena char* se le pasa la cadena del get, para que la recorra
 * \return int retorna -1 si es un numero y 1 si es una letra
 *
 */
int esLetra(char* cadena)
{
    int i=0;
    if(cadena!=NULL)
    {
        while(cadena[i]!='\0')
        {
            if(!(isalpha(cadena[i])))
            {
                return -1;
            }
            i++;
        }
    }
    return 1;
}

int menu()
{
    int opcion;

    printf("1- menu usuario\n");
    printf("2- menu serie\n");
    printf("3- elegir ver serie\n");
    printf("4- dejar de ver serie\n");
    printf("5- listar\n");
    printf("6- salir\n");

    opcion=getInt("ingrese una opcion valida ");

    while(opcion>6)
    {
        printf("ingrese una opcion valida ");
        opcion=getInt("ingrese una opcion valida ");
    }

    return opcion;
}
