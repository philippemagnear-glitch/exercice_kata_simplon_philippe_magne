#include <stdio.h>

// Paramétrage de la taille de la grille
#define N 1000

// Transformation du mode en integer
#define TURN_ON 1
#define TURN_OFF 2
#define TOGGLE 3

// appel des fonctions

void turn_on(int x, int y);
void turn_off(int x, int y);
void toggle(int x, int y);
void light_control(int mode, int x1, int y1, int x2, int y2);
int count_lights_on(void);


// création d'un array pour représenter une grille 2d de 1000*1000
    int lights [N][N];

int main (void)
{


    // initialisation des cases de la grille sur 0
    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j< N; j++)
            {
                lights[i][j] = 0;
            }
        }


    // Directives et tests
    light_control(TURN_ON, 887, 9, 959, 629);
    light_control(TURN_ON, 454, 398, 844, 448);
    light_control(TURN_OFF, 539, 243, 559, 965);
    light_control(TURN_OFF, 370, 819, 676, 868);
    light_control(TURN_OFF, 145, 40, 370, 997);
    light_control(TURN_OFF, 301, 3, 808, 453);
    light_control(TURN_OFF, 351, 678, 951, 908);
    light_control(TOGGLE, 720, 196, 897, 994);
    light_control(TOGGLE, 831, 394, 904, 860);

    // afficher la grille pour tester
    int total = count_lights_on();
    printf("Nombre de lumières allumées : %d\n", total);




}




// Création des fonction pour éteindre, allumer et toggle les lights

void turn_on(int x, int y)
{
    lights[x][y] = 1;
}

void turn_off(int x, int y)
{
    lights[x][y] = 0;
}

void toggle(int x, int y)
{
    if (lights[x][y] == 0)
    {
        lights[x][y] = 1;
    }
    else
    {
        lights[x][y] = 0;
    }
}

// Création de la fonction pour éteindre, allumer et toggle plusieurs lights en même temps


void light_control(int mode, int x1, int y1, int x2, int y2)
{

    for (int x = x1; x <= x2; x++)
    {
        for (int y = y1; y <= y2; y++)
        {
            if (mode == TURN_ON)
            {
                turn_on(x, y);
            }
            else if (mode == TURN_OFF)
            {
                turn_off(x, y);
            }
            else if (mode == TOGGLE)
            {
                toggle(x, y);
            }
        }
    }
}

// création d'un compteur pour compter le nombre de light allumée

int count_lights_on(void)
{
    int count = 0;
    for (int x = 0; x < N; x++)
    {
        for (int y = 0; y < N; y++)
        {
            if (lights[x][y] == 1)
            {
                count++;
            }
        }
    }
    return count;
}
