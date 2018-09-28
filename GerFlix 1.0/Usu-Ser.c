#include "Usu-Ser.h"
#include <stdio.h>
#include <stdlib.h>

void mostrarUsuarioConSuSerie(eUsuario usu[], int cantU, eSerie ser[], int cantS)
{
    int i;
    int j;
    for(i=0; i<cantU; i++) ///mostrar de todos los usuario una sola serie
    {
        for(j=0; j<cantS; j++)
        {
            if(usu[i].estado!=0 && ser[j].estado!=0)
            {
                if(usu[i].idSerie==ser[j].idSerie)
                {
                    printf("\n%d %s %d %s\n",usu[i].idUsuario,usu[i].nombre,ser[j].idSerie,ser[j].nombre);
                    break;
                }
            }
        }
    }
}

void mostrarSerieConSuUsuario(eUsuario usu[], int cantU, eSerie ser[], int cantS)
{
    int i;
    int j;

    for(i=0; i<cantU; i++)
    {
        for(j=0; j<cantS; j++)
        {
            if(ser[j].estado!=0 && usu[i].estado!=0)
            {
                if(ser[j].idSerie==usu[i].idSerie)
                {
                    printf("\n%d %s %s %d %s\n",ser[j].idSerie,ser[j].nombre,ser[j].genero,ser[j].cantidadTemporadas,usu[i].nombre);
                }
            }
        }
    }
}

void altaUsuario(eUsuario usu[],int cantU,eSerie ser[],int cantS)
{
    int i;
    int aux;

    i=buscarLibreUsuario(usu,cantU);

    if(i>=0)
    {
        usu[i].idUsuario=idAutoUsuario(usu,cantU);

        printf("ingrese su nombre: ");
        fflush(stdin);
        gets(usu[i].nombre);

        mostrarListaSeries(ser,cantS);

        printf("ingrese el id de su serie: ");
        fflush(stdin);
        scanf("%d",&aux);

        while(aux<100 && aux>104)
        {
            printf("ingrese el id valido: ");
            fflush(stdin);
            scanf("%d",&aux);
        }

        usu[i].idSerie=aux;

        mostrarUsuario(usu[i]);
    }
}
