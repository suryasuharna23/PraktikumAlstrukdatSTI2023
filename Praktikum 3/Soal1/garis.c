#include <stdio.h>
#include <math.h>
#include "garis.h"

void MakeGARIS (POINT P1, POINT P2, GARIS * L){
    PAwal(*L) = P1;
    PAkhir(*L) = P2; 
}