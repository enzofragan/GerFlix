#include "Usu-Ser.h"

void mostrarUsuarioConSuSerie(eUsuario usuarios[], int cantU, eSerie series[], int cantS)
{
    int i;
    int j;
    for(i=0; i<cantU; i++) ///mostrar de todos los usuario una sola serie
    {
        for(j=0; j<cantS; j++)
        {
            if(usuarios[i].estado!=0 && series[j].estado!=0)
            {
                if(usuarios[i].idSerie==series[j].idSerie)
                {
                    printf("\n%d %s %d %s\n",usuarios[i].idUsuario,usuarios[i].nombre,series[j].idSerie,series[j].nombre);
                }
            }
        }
    }
}

void mostrarSeriesConSuUsuario(eUsuario usuarios[], int cantU, eSerie series[], int cantS)
{
    int i;
    int j;

    for(i=0; i<cantU; i++)
    {
        for(j=0; j<cantS; j++)
        {
            if(series[j].estado!=0 && usuarios[i].estado!=0)
            {
                if(series[j].idSerie==usuarios[i].idSerie)
                {
                    printf("\n%d %s %s %d %s\n",series[j].idSerie,series[j].nombre,series[j].genero,series[j].cantidadTemporadas,usuarios[i].nombre);
                }
            }
        }
    }
}
