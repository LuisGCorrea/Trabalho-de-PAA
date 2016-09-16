#include <stdio.h>
#include <conio.h>
#include <string.h>

void shellsort(struct item *v, int n) {
    int i, j, h;
        struct item aux;
        for(h = 1; h < n; h = 3*h+1);
            /* calcula o h inicial. */
        while(h > 0) {
            h = (h-1)/3;
            /* atualiza o valor de h. */
    for(i = h; i < n; i++) {
        aux = v[i];
        j = i;
        j = i;
/* efetua comparações entre elementos com distância h: */
        while(v[j – h].chave > aux.chave) {
            v[j] = v[j – h];
            j -= h;
    if(j < h) break;
        }
        v[j] = aux;
        }
    }
}
