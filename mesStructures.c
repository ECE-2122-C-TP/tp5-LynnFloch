//
// Created by FLOC'H LYNN on 11/10/2021.
//
#include <stdio.h>
#include"mesStructures.h"

NombreRationnel SaisieRationnel() {
    NombreRationnel rationnel;
    printf("Veuillez entrer les numérateurs et dénominateurs au choix. \n");
    scanf("%d %d", &rationnel.numerateur, &rationnel.denominateur);
    return rationnel;
}

void AfficherRationnel(NombreRationnel rationnel)
{
    printf("Le rationnel saisi est : %d \n", rationnel.numerateur/rationnel.denominateur);
}

NombreRationnel AdditionRationnel(NombreRationnel rationnel1, NombreRationnel rationnel2)
{
    int numerateur, denominateur;
    NombreRationnel rationnel;

    numerateur = rationnel1.numerateur * rationnel2.denominateur + rationnel2.denominateur * rationnel1.denominateur;
    denominateur = rationnel1.denominateur * rationnel2.denominateur;

    return rationnel;
}

NombreRationnel MultiplicationRationnel(NombreRationnel rationnel1, NombreRationnel rationnel2)
{
    int numerateur, denominateur;
    NombreRationnel rationnel;

    numerateur = rationnel1.numerateur * rationnel2.numerateur;
    denominateur = rationnel1.numerateur * rationnel2.numerateur;

    rationnel.numerateur = numerateur;
    rationnel.denominateur = denominateur;

    return rationnel;
}

int pgcdRationnel(NombreRationnel nbR1)
{
    int i;

    for (i=1; i<= nbR1.numerateur && i<= nbR1.denominateur; i++){
        if (nbR1.numerateur%i==0 && nbR1.denominateur%i==0){
            pgcdRationnel = i;
        }

        else{
            return 0;
        }

        printf("Le PCGD de %d et de %d est : %d \n", nbR1.numerateur, nbR1.denominateur, pgcdRationnel);

       return 0;
    }
}

NombreRationnel simplification(NombreRationnel nbR1)
{
    int pgcd = 0;

    pgcd = pgcdRationnel(nbR1);

    if (pgcd >0)
    {
        nbR1.numerateur = nbR1.numerateur/pgcd;
        nbR1.denominateur = nbR1.denominateur/pgcd;
    }

    return nbR1;
}
