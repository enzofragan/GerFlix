#include <stdio.h>
#include <stdlib.h>
#include "us-serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eUsuario usuarios[TAMUSUARIO];
    eSerie series[TAMSERIE];

    iniciarUsuarios(usuarios,TAMUSUARIO);
    iniciarUsuariosHardcode(usuarios);

    iniciarSeries(series,TAMSERIE);
    iniciarSeriesHardcode(series);

    mostrarListaDeUsuarios(usuarios,TAMUSUARIO);

    return 0;
}
