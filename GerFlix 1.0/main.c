#include <stdio.h>
#include <stdlib.h>
#include "Usu-Ser.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    /*  1. Mostrar el listado de series
        2. Mostrar el listado de usuarios
        3. Mostrar el listado de Usuarios con el nombre de la serie que ve
        4. Mostrar por cada serie, el nombre de los usuarios que la ven.
    */

//mostrarListaSeries(listaDeSeries,TAMSERIE);
//mostrarListaUsuarios(listaDeUsuarios,TAMUSUARIO);
//mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
//mostrarSerieConSuUsuario(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);
//altaUsuario(listaDeUsuarios,TAMUSUARIO,listaDeSeries,TAMSERIE);

    return 0;
}
