#include <stdio.h>
#include "balikstring.h"

int panjangString(char* ch){
    int i=0; // inisiasi i ke-0
    while (ch[i] != '\0'){ // ngasih tau kalo ch-nya bukan enter maka elemen array dilanjutin
        i++; // ini iterasi aja sih biar tau udah berapa kali panjang stringnya
    }
    return i;
}

void membalikString(char* str){
    int i, j;
    char temp;
    i = 0;
    j = panjangString(str) - 1;
    while (i<j){
        temp = str[i]; // bayangin temp sebagai tempat persinggahan aja gt
        str[i] = str[j]; // bayangin ini buat cara nuker sebenarnya
        str[j] = temp;
        i++;
        j--;
    }
}