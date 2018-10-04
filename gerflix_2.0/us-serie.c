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
