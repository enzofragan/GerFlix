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
    char nombres[][30] = {"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
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
