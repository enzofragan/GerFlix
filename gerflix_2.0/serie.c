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
