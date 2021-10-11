//
// Created by FLOC'H LYNN on 06/10/2021.
//
#include "mesStructures.h"
#include "exercices.h"
#include <stdio.h>
#include "mesTableaux.h"
#include "macro.h"

void exercice1()
{
    NombreRationnel rationnel1, rationnel2,addition, multiplication, simplificationRationnel1, simplificationRationnel2;

    rationnel1 = SaisieRationnel();
    rationnel2 = SaisieRationnel();

    AfficherRationnel(rationnel1);
    AfficherRationnel(rationnel2);

    addition = AdditionRationnel(rationnel1,rationnel2);

    multiplication = MultiplicationRationnel(rationnel1,rationnel2);

    simplificationRationnel1 = simplification(rationnel1);
    simplificationRationnel2 = simplification(rationnel2);

    AfficherRationnel(addition);
    AfficherRationnel(multiplication);
    AfficherRationnel(simplificationRationnel1);
    AfficherRationnel(simplificationRationnel2);


}


void exercice2()
{
    int tailleTableau, tableauRempli, max;
    int tableauExo2[TAILLE_MAX]={0};

    printf("Combien de nombre N d'entiers voulez-vous insérer dans le tableau? \n Cet entier doit être inférieur à 100. \n",TAILLE_MAX);
    scanf("%d",&tailleTableau);


    tableauRempli = remplissageTableau(tableauExo2,tailleTableau);

    max = plusGrandEntier(tableauExo2, tailleTableau);

    printf("Voici le tableau écrit : %d", tableauRempli);
    printf("Le plus grand entier est : %d", max);

}

void exercice3()
{
    int valeurCase, i,j,n;
    int tableauExo32D[TAILLE_1][TAILLE_2]={0};
    int tableauExo31D[TAILLE]={0};
    printf("Veuillez entrer les valeurs que vous voulez insérer dans le tableau : \n");
    scanf("%d",&valeurCase);

    remplissageTableau2D(tableauExo32D);
    copieTableau1D(tableauExo32D,tableauExo31D);

    for (i=0;i<TAILLE_1;i++){
        for (j=0;j<TAILLE_2;j++)
        {
            printf("%d",tableauExo32D[i][j]);
        }

        printf("\n");
    }

    for (n=0;n<TAILLE;n++)
    {
        printf("%d", tableauExo31D[n]);
    }
}
