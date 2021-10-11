//
// Created by FLOC'H LYNN on 11/10/2021.
//

#include <stdio.h>
#include"mesTableaux.h"
#include "macro.h"

// EXO 2 //
int tableauExo2[100];

int remplissageTableau(int tableau[TAILLE_MAX], int tailleTableau)
{
    int i=0, valeurCase;
    for (i=0; i<tailleTableau; i++)
    {
        printf("Veuillez saisir la valeur de la case n°%d : \n",i);
        scanf("%d",&valeurCase);

        tableau[i] = valeurCase;
    }
    return 0;
}


int plusGrandEntier(tableau[TAILLE_MAX], tailleTableau)
{
    int plusGrandeValeur=0,i=0;
    for (i=0; i<=tailleTableau; i++)
    {
        if (plusGrandeValeur<tableau[i]){
            plusGrandeValeur=tableau[i];
        }

    }

    printf("Le plus grand entier du tableau est :%d", plusGrandeValeur);
    return 0;
}


// EXO 3 //
int tableau2D[TAILLE_2D];

void remplissageTableau2D(int tableau2D[TAILLE_1][TAILLE_2]){

    int i=0,j=0, valeurCase;
    int nbreLignes=TAILLE_1, nbreColonnes=TAILLE_2;

    for (i=0; i<nbreLignes; i++)
    {
        for (j=0;j<nbreColonnes;j++)
        {
            printf("Veuillez saisir la valeur de la case à la ligne %d et la colonne %d : \n",i,j);
            scanf("%d",&valeurCase);

            tableau2D[i][j] = valeurCase;
        }
    }
}

void copieTableau1D(int tableau1D[TAILLE],int tableau2D[TAILLE_1][TAILLE_2])
{
    int i,j,n=0, valeurCase = 0;
    int nbreLignes=TAILLE_1, nbreColonnes=TAILLE_2;

    for (i=0; i<nbreLignes; i++)
    {
        for (j=0;j<nbreColonnes;j++)
        {
            valeurCase = tableau2D[i][j];
            tableau1D[n] = valeurCase;
            n=n+1;
        }
    }
}
