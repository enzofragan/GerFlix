#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "serie.h"

void iniciarSeries(eSerie series[],int tamSer)
{
    int i;

    for(i=0;i<tamSer;i++)
    {
        series[i].estado=0;
    }
}

void iniciarSeriesHardcode(eSerie series[])
{
    int idSerie[5] = {100,101,102,103,104};
    int estado[5] = {1,1,1,1,1};
    char titulo[5][30] = {"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5] = {9,7,7,6,1};
    char genero[5][30] = {"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};
    int i;

    for(i=0;i<5;i++)
    {
        series[i].idSerie=idSerie[i];
        series[i].estado=estado[i];
        strcpy(series[i].titulo,titulo[i]);
        series[i].temporadas=temporadas[i];
        strcpy(series[i].genero,genero[i]);
    }
}

int menuSerie()
{
    int opcion;

    printf("1- alta serie\n");
    printf("2- modificacion serie\n");
    printf("3- baja serie\n");
    printf("4- salir\n");


    opcion=getInt("ingrese una opcion valida ");

    while(opcion>4)
    {
        printf("ingrese una opcion valida ");
        opcion=getInt("ingrese una opcion valida ");
    }

    return opcion;
}

int buscarLibreSerie(eSerie series[],int cantiadadSeries)
{
     int i;
    int ret=-1;

    for(i=0; i<cantiadadSeries; i++)
    {
        if(series[i].estado==0)
        {
            ret=i;
            break;
        }
    }

    return ret;
}

int autoIdSerie(eSerie series[],int cantiadadSeries)
{
    int i;
    int id;

    i=buscarLibreUsuario(series,cantiadadSeries);

    id=i+1;

    return id;
}

int altaSerie(eSerie series[],int cantiadadSeries)
{
    int i;
    int id;
    int ret=-1;

    i=buscarLibreSerie(series,cantiadadSeries);

    if(i>=0)
    {
        id=autoIdUsuario(series,cantiadadSeries);

        getString("ingrese su titulo","ingrese un titulo valido ",series[i].titulo);

        printf("ingrese la cantidad de temporadas ");

        getInt("ingrese una cantidad valida ");

        ret=0;

        system("pause");
    }

    return ret;
}
