#include <stdio.h>
#include <stdlib.h>
#include "us-serie.h"
#define TAMSERIE 20
#define TAMUSUARIO 100
#define TAMUSUSER 50

int main()
{
    eUsuario usuarios[TAMUSUARIO];
    eSerie series[TAMSERIE];
    eUsSerie usuarioseries[TAMUSUSER];

    iniciarUsuarios(usuarios,TAMUSUARIO);
    iniciarUsuariosHardcode(usuarios);

    iniciarSeries(series,TAMSERIE);
    iniciarSeriesHardcode(series);

    iniciarSeriesUsuarios(usuarioseries,TAMUSUSER);
    iniciarSeriesUsuariosHardcode(usuarioseries);

    mostrarUsuarioConSuSerie(usuarios,TAMUSUARIO,series,TAMSERIE,usuarioseries,TAMUSUSER);

    return 0;
}
