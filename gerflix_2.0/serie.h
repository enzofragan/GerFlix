#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED

typedef struct
{
    int idSerie;
    int estado;
    char titulo[30];
    int temporadas;
    char genero[30];
}eSerie;

#endif // SERIE_H_INCLUDED

void iniciarSeries(eSerie [],int );
void iniciarSeriesHardcode(eSerie []);
int menuSerie();
int buscarLibreSerie(eSerie [],int );
int autoIdSerie(eSerie [],int );
int altaSerie(eSerie [],int );
