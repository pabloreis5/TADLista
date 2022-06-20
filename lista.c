#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lista.h"


void FLvazia(TLista *pLista){
    pLista->primeiro = INICIO;
    pLista->ultimo = pLista->primeiro;
}

int LVazia(TLista *pLista){
    return (pLista->ultimo == pLista->primeiro);
}

int LInsere(TLista *pLista, TItem x){
    if(pLista->ultimo == MAXTAM){
        return -1; /*full list*/
    }
    pLista->item[pLista->ultimo] = x;
    pLista->ultimo++;
    return pLista->ultimo;
}

int LRetira(TLista *pLista, TApontador p, TItem *px){
    if(LVazia(pLista) || p>=pLista->ultimo)
        return 0;
    *px=pLista->item[p];
    pLista->ultimo--;
    while(p<pLista->ultimo){
        pLista->item[p] = pLista->item[p+1];
        p=p+1;
    }
    return 1;
}

void LImprime(TLista *pLista){
    for(int i=pLista->primeiro; i<pLista->ultimo; i++){
        printf("%d - %d\n", i, pLista->item[i].chave);
    }

}
