//
// Created by FLOC'H LYNN on 11/10/2021.
//

#ifndef TD5_2__MESSTRUCTURES_H
#define TD5_2__MESSTRUCTURES_H

typedef struct{
    int numerateur, denominateur;
} NombreRationnel;

NombreRationnel SaisieRationnel();
void AfficherRationnel(NombreRationnel rationnel);
NombreRationnel AdditionRationnel( NombreRationnel rationnel1, NombreRationnel rationnel2);
NombreRationnel MultiplicationRationnel(NombreRationnel rationnel1, NombreRationnel rationnel2);
int pgcdRationnel(NombreRationnel nbR1);
NombreRationnel simplification(NombreRationnel nbR1);

#endif //TD5_2__MESSTRUCTURES_H
