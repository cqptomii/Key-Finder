//
// Created by tomfr on 26/09/2023.
//

#ifndef KEYFINDER_GENERATE_H
#define KEYFINDER_GENERATE_H
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <io.h>
#include <stdio.h>
void caracGenerate(int *spe,int *nb,int *min,int *maj,int taille);
void verifCarac(int *spe,int *nb,int *min,int *maj,int taille);
void keyGenerate(int taille);
void mailGenerate();
#endif //KEYFINDER_GENERATE_H
