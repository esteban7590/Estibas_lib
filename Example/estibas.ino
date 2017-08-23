
#include <Estibas.h>

#define echo 3 // echo pin
#define trigger 4 // trigger pin
#define distancia_piso 240 // cm

#define alt_estiba 130 // cm
#define tolerance 5 // % of alt estiba

Estibas fila1(echo, trigger, distancia_piso);

void setup(){

}

void loop(){

int value = fila1.cantidad(tolerance, alt_estiba); //tolerancia, altura estiba
int value1 = fila1.cantidad_filtered(tolerance, alt_estiba); //tolerancia, altura estiba
}
