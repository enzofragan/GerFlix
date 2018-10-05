#ifndef USUARIO_H_INCLUDED
#define USUARIO_H_INCLUDED

typedef struct
{
    int id;
    char nombres[30];
    int estado;
}eUsuario;

#endif // USUARIO_H_INCLUDED

void iniciarUsuarios(eUsuario [],int );
void iniciarUsuariosHardcode(eUsuario []);
void mostrarListaDeUsuarios(eUsuario[], int);
void mostrarUsuario(eUsuario );
int menuUsuario();
int buscarLibreUsuario(eUsuario [],int );
int autoIdUsuario(eUsuario [],int );
int altaUsuario(eUsuario [],int );
