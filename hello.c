
#include <stdio.h>
#include <conio.h>

// declaracion de variables
int semestre_ingresado;
int opcion_input; //se elije la carrera
int semestre_menor = 2; // se coloco 2 porque se evaluara semestre_ingresado en funcion de si es igual o menor
int semestre_mayor = 18;
char usuario[28];
char opciones[3][50] = {
    "  1.Ingeniería de sistemas",
    "  2.Magisterio",
    "  3.Educación"};
char materias[3][30] = {
    "  1.Matemática",
    "  2.Historia",
    "  3.Química"};

void seleccion_materias()
{
    if (opcion_input <= 2 || opcion_input >= 0)
    {
        printf("**Seleccione una materia de la lista**\n");

        switch (opcion_input)
        {
        case 1:
            printf("**Materias a cursar:**\n");
            printf("%s \n", materias[0]);
            printf("%s \n", materias[1]);
            printf("%s \n", materias[2]);
            break;

        case 2:
            printf("**Materias a cursar:**\n");
            printf("%s \n", materias[0]);
            printf("%s \n", materias[1]);
            printf("%s \n", materias[2]);
            break;
            
        case 3:
            printf("**Materias a cursar:**\n");
            printf("%s \n", materias[0]);
            printf("%s \n", materias[1]);
            printf("%s \n", materias[2]);
            break;
        }
    }
}

// contiene el cuerpo del programa
void seleccion_semestre()
{
    printf("**Seleccione su carrera**\n");
    printf("%s \n", opciones[0]);
    printf("%s \n", opciones[1]);
    printf("%s \n", opciones[2]);
    scanf("%d", &opcion_input);

    while (opcion_input > 3 || opcion_input <= 0)
    {
        printf("La opcion ingresada no es válida\n");
        scanf("%d", &opcion_input);
    }
    seleccion_materias();
}
// funcion principal
int main()
{
    printf("Ingrese su usuario\n");
    scanf("%s", &usuario);
    printf("Bienvenido: %s \n \n", usuario);
    printf("Ingrese el semestre que esta cursando\n");
    scanf("%d", &semestre_ingresado);

    while (semestre_ingresado > semestre_mayor || semestre_ingresado < 3)
    {
        printf("Error! ingrese el semestre nuevamente\n");
        scanf("%d", &semestre_ingresado);
    }
    seleccion_semestre();
    return 0;
    getchar();
}
