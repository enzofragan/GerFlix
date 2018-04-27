
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}
void mostrarListaUsuarios(eUsuario usuarios[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        if(usuarios[i].estado!=0)
        {
            printf("\n%d %s %d\n",usuarios[i].idUsuario,usuarios[i].nombre,usuarios[i].idSerie);
        }
    }
}
void mostrarUsuarioConSuSerie(eUsuario usuarios[], int cantU, eSerie series[], int cantS)
{
    int i;
    int j;
    /**for(i=0;i<cantU;i++)///mostrar de todos los usuario una sola serie
    {
        for(j=0;j<cantS;j++)
        {
            if(usuarios[i].estado!=0 && series[j].estado!=0)
            {
                if(usuarios[i].idSerie==series[j].idSerie)
                {
                    printf("\n%d %s %s\n",usuarios[i].idUsuario,usuarios[i].nombre,series[j].nombre);
                    break;
                }
            }
        }
    }*/
    for(i=0;i<cantU;i++)
    {
        for(j=0;j<cantS;j++)
        {
            if(series[j].estado!=0 && usuarios[i].estado!=0)
            {
                if(series[j].idSerie==usuarios[i].idSerie)
                {
                    printf("\n%d %s %s %d %s\n",series[j].idSerie,series[j].nombre,series[j].genero,series[j].cantidadTemporadas,usuarios[i].nombre);
                    break;
                }
            }
        }
    }
}
