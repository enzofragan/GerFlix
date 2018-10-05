#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuario.h"

void iniciarUsuarios(eUsuario usuarios[],int tamUsu)
{
    int i;

    for(i=0;i<tamUsu;i++)
    {
        usuarios[i].estado = 0;
    }
}

void iniciarUsuariosHardcode(eUsuario usuario[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30] = {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int i;

    for(i=0;i<10;i++)
    {
        usuario[i].id=id[i];
        strcpy(usuario[i].nombres,nombres[i]);
        usuario[i].estado=1;
    }
}

void mostrarUsuario(eUsuario usuario)
{
    printf("\n%d %s\n",usuario.id,usuario.nombres);
}

void mostrarListaDeUsuarios(eUsuario usuario[], int cant)
{
    int i;
    for(i=0; i<cant; i++)
    {
        if(usuario[i].estado!=0)
        {
            mostrarUsuario(usuario[i]);
        }
    }
}

int menuUsuario()
{
    int opcion;

    printf("1- alta usuario\n");
    printf("2- modificacion usuario\n");
    printf("3- baja usuario\n");
    printf("4- salir\n");

    opcion=getInt("ingrese una opcion valida ");

    while(opcion>4)
    {
        printf("ingrese una opcion valida ");
        opcion=getInt("ingrese una opcion valida ");
    }

    return opcion;
}
int buscarLibreUsuario(eUsuario usuarios[],int cantiadadUsuarios)
{
     int i;
    int ret=-1;

    for(i=0; i<cantiadadUsuarios; i++)
    {
        if(usuarios[i].estado==0)
        {
            ret=i;
            break;
        }
    }

    return ret;
}

int autoIdUsuario(eUsuario usuarios[],int cantiadadUsuarios)
{
    int i;
    int id;

    i=buscarLibreUsuario(usuarios,cantiadadUsuarios);

    id=i+1;

    return id;
}

int altaUsuario(eUsuario usuarios[],int cantiadadUsuarios)
{
    int i;
    int id;
    int ret=-1;

    i=buscarLibreUsuario(usuarios,cantiadadUsuarios);

    if(i>=0)
    {
        id=autoIdUsuario(usuarios,cantiadadUsuarios);

        getString("ingrese su nombre ","ingrese un nombre valido ",usuarios[i].nombres);

        usuarios[i].id=id;

        ret=0;

        mostrarUsuario(usuarios[i]);

        system("pause");
    }

    return ret;
}
