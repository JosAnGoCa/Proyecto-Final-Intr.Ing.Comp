#include <stdio.h>
#include "FuncionSuma.h"
#include "FuncionResta.h"
#include "FuncionMultiplicacion.h"
#include "FuncionModulo.h"

int main()
{
    int numero1, numero2;

    printf("Primer numero: ");
    scanf_s("%i", &numero1);

    printf("Segundo numero: ");
    scanf_s("%i", &numero2);

    // David Gómez
    // Suma
    int resultadoSuma = suma(numero1, numero2);
    printf("Resultado de la suma: %i\n", resultadoSuma);

    // Bryan Ramos
    // Resta
    int resultadoResta = resta(numero1, numero2);
    printf("Resultado de la resta: %i\n", resultadoResta);

    // Eduardo Salazar
    // Multiplicacion
    int resultadoMultiplicacion = Multiplicacion(numero1, numero2);
    printf("Resultado de la multiplicaion: %i\n", resultadoMultiplicacion);

    // Daniel Hernández
    // Modulo
    int resultadoModulo = modulo(numero1, numero2);
    printf("Modulo: %i\n", resultadoModulo);
}