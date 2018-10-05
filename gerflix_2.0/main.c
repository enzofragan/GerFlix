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
    int opcion;
    int resultado;
    char seguir='s';
    int altaU;

    iniciarUsuarios(usuarios,TAMUSUARIO);
    //iniciarUsuariosHardcode(usuarios);

    iniciarSeries(series,TAMSERIE);
    //iniciarSeriesHardcode(series);

    iniciarSeriesUsuarios(usuarioseries,TAMUSUSER);
    //iniciarSeriesUsuariosHardcode(usuarioseries);

    do
    {
        system("cls");
        opcion=menu();

        switch(opcion)
        {
        case 1:
            do
            {
                system("cls");
                resultado=menuUsuario();
                switch(resultado)
                {
                case 1:
                    altaU=altaUsuario(usuarios,TAMUSUARIO);
                    break;
                }

            }while(resultado<3);
            break;
        case 2:
            system("cls");
            resultado=menuSerie();
            break;
        case 6:
            seguir='n';
            break;
        }

    }while(seguir=='s');

    return 0;
}
