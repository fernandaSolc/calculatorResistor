#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float Vin = 0.0,  // Tensão de entrada
vled = 0.0, // Tensão do LED
iled = 0.0, // Corrente do LED
resistor = 0.0; // Corrente do LED
bool repetir = true; // Variável para controlar a repetição do cálculo


int main(void) {


  while (repetir) {
  
  printf("Led Calc v1.3 \n\n");
  printf("Autor: FernandaSolc \n\n");


  printf( "Enter the value of the Vin (Volts): ");
  scanf("%f", &Vin);


  printf("Enter the resistance of the Vleds (Volts): ");
  scanf("%f", &vled);


  printf("Enter the value of the Ileds (Amperes): ");
  scanf("%f", &iled);

// Calcula o valor do resistor
  resistor = (Vin - vled)/iled;


  printf("\n\nVin = %.2f\n", Vin);
  printf("vled = %.2f\n", vled);
  printf("iled = %.2f\n", iled);
  printf("The resistor has the value of %.2f Ohms\n", resistor);

// Pergunta ao usuário se ele deseja repetir o cálculo
  printf("\n\nDo you want to repeat the calculation? (1 for yes, 0 for no):  \n");
    scanf("%d", (int*)&repetir);
    
  }
    return 0;
}