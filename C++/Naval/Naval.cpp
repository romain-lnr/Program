#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//Les contents de grilles :
#define STLC 218 // ┌, Single Top Left Corner
#define STRC 191 // ┐, Single Top Right Corner
#define SBLC 192 // └, Single Bottom Left Corner
#define SBRC 217 // ┘, Single Bottom Right Corner
#define SVSB 179 // │, Single Vertical Simple Border
#define SVRB 180 // ┤, Single Vertical Right Border
#define SVLB 195 // ├, Single Vertical Left Border
#define SHSB 196 // ─, Single Horizontal Simple Border
#define SHBB 193 // ┴, Single Horizontal Bottom Border
#define SHTB 194 // ┬, Single Horizontal Top Border
#define SC   197 // ┼, Single Center
#define DTLC 201 // ╔, Double Top Left Corner
#define DTRC 187 // ╗, Double Top Right Corner
#define DBLC 200 // ╚, Double Bottom Left Corner
#define DBRC 188 // ╝, Double Bottom Right Corner
#define DVSB 186 // ║, Double Vertical Simple Border
#define DVRB 185 // ╣, Double Vertical Right Border
#define DVLB 204 // ╠, Double Vertical Left Border
#define DHSB 205 // ═, Double Horizontal Simple Border
#define DHBB 202 // ╩, Double Horizontal Bottom Border
#define DHTB 203 // ╦, Double Horizontal Top Border
#define DC   206 // ╬, Double Center

int CharToInt(char c)
{
    switch (c)
    {
    case 'A':
        return 0;
    case 'B':
        return 1;
    case 'C':
        return 2;
    case 'D':
        return 3;
    case 'E':
        return 4;
    case 'F':
        return 5;
    case 'G':
        return 6;
    case 'H':
        return 7;
    case 'I':
        return 8;
    case 'J':
        return 9;
    case 'a':
        return 0;
    case 'b':
        return 1;
    case 'c':
        return 2;
    case 'd':
        return 3;
    case 'e':
        return 4;
    case 'f':
        return 5;
    case 'g':
        return 6;
    case 'h':
        return 7;
    case 'i':
        return 8;
    case 'j':
        return 9;
    }
}
char t(int n)
{
    if (n == 0) return ' ';
    if (n == 1) return 'O';
    if (n == 2) return 'X';
    if (n == 3) return 'C';
}
void clrscr()
{
    system("@cls||clear");
}
void posShip(int ship[10][10])
{
    int nbrship = 5;
    int shipsize[5] = { 5,4,3,3,2 };
    int vide, temp;
    srand(time(NULL));

    for (int k = 0; k < nbrship; k++)
    {
        vide = 0;
        while (vide == 0)
        {
            int x = rand() % 10;
            int y = rand() % 10;
            int s = rand() % 2;

            if (s) {
                if (y + shipsize[k] < 10)
                {
                    temp = 1;
                    for (int i = y; i < y + shipsize[k]; i++) temp *= ship[x][i] + 1;
                    if (temp == 1) vide = 1;
                    if (vide)  for (int i = y; i < y + shipsize[k]; i++) ship[x][i] = k + 1;
                }

            }
            else
            {
                if (x + shipsize[k] < 10)
                {
                    temp = 1;
                    for (int i = x; i < x + shipsize[k]; i++) temp *= ship[i][y] + 1;
                    if (temp == 1) vide = 1;
                    if (vide)  for (int i = x; i < x + shipsize[k]; i++) ship[i][y] = k + 1;
                }

            }
        }
    }

}
void AfficheGDJ(int tirs[10][10], int nbr_tir, int nbr_plouf, int nbr_touched, int nbr_sinked, int nbr_remain) {
    char alphabet[10] = { 'A','B','C','D','E','F','G','H','I','J' };
    printf("Bataille navale:\n");
    printf("\n   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", STLC, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, SHTB, SHSB, SHSB, SHSB, STRC);
    printf("\n   %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c %d %c", SVSB, 0, SVSB, 1, SVSB, 2, SVSB, 3, SVSB, 4, SVSB, 5, SVSB, 6, SVSB, 7, SVSB, 8, SVSB, 9, SVSB);

    for (int i = 0; i < 10; i++) {
        printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", SHSB, SHSB,
            SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB,
            SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC, SHSB, SHSB, SHSB, SC,
            SHSB, SHSB, SHSB, SVRB);
        printf("\n %c %c", alphabet[i], SVSB);
        for (int j = 0; j < 10; j++) {
            printf(" %c %c", t(tirs[i][j]), SVSB);
        }
        switch (i) {
        case 0:
            printf("   Nombre de tirs   : %d", nbr_tir);
            break;
        case 1:
            printf("   Nombre de ploufs : %d", nbr_plouf);
            break;
        case 2:
            printf("   Nombre de touches: %d", nbr_touched);
            break;
        case 3:
            printf("   Bateaux coules   : %d", nbr_sinked);
            break;
        case 4:
            printf("   Bateaux restants : %d", nbr_remain);
            break;
        case 7:
            printf("   O = plouf");
            break;
        case 8:
            printf("   X = touche");
            break;
        case 9:
            printf("   C = coule");
            break;
        }
    }
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", SHSB, SHSB,
        SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB,
        SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB, SHSB, SHSB, SHSB, SHBB,
        SHSB, SHSB, SHSB, SBRC);
    printf("\n\nCoordonnees de tir[ligne][colonne]:");
}
int main() {
    // Gestion des accents dans la console
    //SetConsoleOutputCP(65001);
    int nbrship = 5;
    int shipsize[5] = { 5,4,3,3,2 };
    int i, tirs[10][10], ship[10][10], nbr_tir, nbr_plouf, nbr_touched, nbr_sinked, nbr_remain, choix, line, column, sinked, counttouched;
    char cline;
menu:
    clrscr();
    choix = 0;
    printf("---- Bataille navale ----\n");
    printf("1. Nouvelle partie\n2. Aide\n3. Quitter\nChoix :");
    scanf(" %d", &choix);
    while (choix < 1 || choix > 3) goto menu;
    switch (choix) {
    case 1:
        nbr_tir = 0;
        nbr_plouf = 0;
        nbr_touched = 0;
        nbr_sinked = 0;
        nbr_remain = nbrship;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                tirs[i][j] = 0;
                ship[i][j] = 0;
            }
        }
        posShip(ship);
        //while (nbr_remain > 0) {
        clrscr();
        AfficheGDJ(tirs, nbr_tir, nbr_plouf, nbr_touched, nbr_sinked, nbr_remain);
        scanf("%c%d", &cline, &column);
        /*  line = CharToInt(cline);
          nbr_tir++;
          if (tirs[line][column] == 0) {
              if (ship[line][column] == 0) {
                  tirs[line][column] = 1;
                  nbr_plouf++;
              }
              if (ship[line][column] > 0) {
                  nbr_touched++;
                  tirs[line][column] = 2;
                  counttouched = 0;
                  for (i = 0; i < 10; i++) {
                      for (int j = 0; j < 10; j++) {
                          if (ship[i][j] == ship[line][column] && tirs[i][j] == 2) counttouched++;
                      }
                  }
                  if (counttouched == shipsize[ship[line][column]] - 1) {
                      nbr_sinked++;
                      nbr_remain--;
                      tirs[line][column] = 3;
                  }
              }
          } */
          //  }
        goto menu;
    case 2:
        clrscr();
        printf("Voici l'aide du jeu!");
        scanf("%i", &i);
        goto menu;
    case 3:
        break;
    }
    return 0;
}
