#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define MAXTAM 100

typedef int TChave;
typedef int TApontador;

typedef struct{
    TChave chave;

}TItem;

typedef struct{
    TItem item[MAXTAM];
    TApontador primeiro;
    TApontador ultimo;
}TLista;

void FLvazia(TLista *pLista);
int LVazia(TLista *pLista);
int LInsere(TLista *pLista, TItem x);
int LRetira(TLista *pLista, TApontador p, TItem *px);
void LImprime(TLista *pLista);




#endif // LISTA_H_INCLUDED
