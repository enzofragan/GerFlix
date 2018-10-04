#ifndef US-SERIE_H_INCLUDED
#define US-SERIE_H_INCLUDED
#include "usuario.h"
#include "serie.h"

typedef struct
{
    int cliente;
    int serie;
    int estado;
}eUsSerie;

#endif // US-SERIE_H_INCLUDED

void iniciarSeriesUsuarios(eUsSerie [],int );
void iniciarSeriesUsuariosHardcode(eUsSerie []);
void mostrarUsuarioConSuSerie(eUsuario [], int , eSerie [], int ,eUsSerie [], int );
