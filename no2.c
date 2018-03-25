#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Aufgabe 2


void function(unsigned int tage) {

unsigned int jahre, monate;
jahre=0;
monate=0;

if(tage>=360) {
  jahre++;
  tage-=360;
  return;
}

if(tage>=30) {
  monate++;
  tage-=30;
   if(monate>=12) {
    jahre++;
    monate-=12;
    return;
    }
  return;  
}
  

printf("%u Tag(e) entspricht(entsprechen) %u Jahr(en), %u Monat(en) und %u Tag(en).\n", tage, jahre, monate, tage);

}



int main(void) {

unsigned int tage;

printf("Nenne mir eine Anzahl von Tagen:\n");

scanf("%u", &tage);

function(tage);

}


