#include <stdio.h>
#include <math.h>
#include "point.h"

POINT MakePOINT (float X, float Y){
    POINT P; // P adalah suatu data yng isinya double float yang dipisahkan koma, memiliki tipe POINT
    Absis(P) = X; // deklarasi
    Ordinat(P) = Y; // deklarasi
    return P; // pengembalian nilai P
}

void BacaPOINT(POINT*P){
    float x, y;
    scanf("%f %f", x, y);
    return P;
}

void TulisPOINT (POINT P){
    printf("(%.2f,%.2f)", Absis(X), Ordinat(Y));
}

boolean EQ (POINT P1, POINT P2){
    return ((Absis(P1) == Absis(P2))&&(Ordinat(P1)==Ordinat(P2)));
}

boolean NEQ (POINT P1, POINT P2){
    return ((Absis(P1) != Absis(P2))&&(Ordinat(P1)!=Ordinat(P2)));
}

boolean IsOrigin (POINT P){
    return((Absis(P)==0)&&(Ordinat(P)==0));
}

boolean IsOnSbX (POINT P){
    return((Ordinat(P)==0));
}

boolean IsOnSbY (POINT P){
    return((Absis(P)==0));
}

int Kuadran (POINT P){
    if ((Absis(P)>0)&&(Ordinat(P)>)){
        return 1;
    }
    else if ((Absis(P)<0)&&(Ordinat(P)>0)){
        return 2;
    }
    else if ((Absis(P)<0)&&(Ordinat(P)<0)){
        return 3;
    }
    else if ((Absis(P)>0)&&(Ordinat(P)<0)){
        return 4;
    }
}

POINT PlusDelta (POINT P, float deltaX, float deltaY){
    Absis(P) += deltaX;
    Ordinat(P) += deltaY;
}

void Geser (POINT *P, float deltaX, float deltaY){
    Absis(*P) += deltaX;
    Ordinat(*P) += deltaY;
}

float Jarak0 (POINT P){
    sqrt((pow(Absis(P)),2)+(pow(Ordinat),2));
}

float Panjang (POINT P1, POINT P2){
    sqrt(pow((Absis(P1)-Absis(P2)),2)+(pow(Ordinat(P1)-Ordinat(P2)),2));
}