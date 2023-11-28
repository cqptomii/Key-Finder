//
// Created by tomfr on 26/09/2023.
//
#include "Generate.h"

void caracGenerate(int *spe,int *nb,int *min,int *maj,int taille){
    int index;
    for (int i=0;i<taille;i++){
        index=rand() % 4;
        switch (index) {
            case 0:
                *spe+=1;
                break;
            case 1:
                *nb+=1;
                break;
            case 2:
                *min+=1;
                break;
            case 3:
                *maj+=1;
                break;
            default:
                break;
        }
    }
}
void verifCarac(int *spe,int *nb,int *min,int *maj,int taille){
    while (!*spe || !*nb || !*min || !*maj){
        caracGenerate(spe,nb,min,maj,taille);
    }
}
void keyGenerate(int taille){
    srand(time(NULL));
    int spe=0,nb=0,min=0,maj=0,index,referenceIndex;
    verifCarac(&spe,&nb,&min,&maj,taille);
    char caps[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",caracSpe[26]="!'()+,.;/:<>=?[]|^@_-~#{}*";
    char keyLog[20];
    FILE *file= fopen("LatestGeneration.txt","w+");
    if(file) {
        for (int i = 0; i < taille; i++) {
            index = rand() % 4;
            switch (index) {
                case 0:
                    keyLog[i] = rand() % 10;
                    --nb;
                    wprintf(L"%d", keyLog[i]);
                    fprintf(file,"%d",keyLog[i]);
                    break;
                case 1:
                    referenceIndex = rand() % 26;
                    --min;
                    keyLog[i] = (char) tolower(caps[referenceIndex]);
                    wprintf(L"%c", keyLog[i]);
                    fprintf(file,"%d",keyLog[i]);
                    break;
                case 2:
                    referenceIndex = rand() % 26;
                    --maj;
                    keyLog[i] = caps[referenceIndex];
                    wprintf(L"%c", keyLog[i]);
                    fprintf(file,"%d",keyLog[i]);
                    break;
                case 3:
                    referenceIndex = rand() % 26;
                    --spe;
                    keyLog[i] = caracSpe[referenceIndex];
                    wprintf(L"%c", keyLog[i]);
                    fprintf(file,"%d",keyLog[i]);
                    break;
                default:
                    break;
            }
        }
    }
    else{
        wprintf(L"Error during file opening");
    }
}
void mailGenerate(){
    char mailExt[20];
    char mailName[30];
    wprintf(L"Enter mail extension : \n");
    scanf("%s",mailExt);
    fflush(stdin);
    wprintf(L"\n Enter main name of your email : \n");
    scanf("%s",mailName);
    fflush(stdin);
    strcat(mailName,mailExt);
    FILE *file= fopen("LatestGeneration.txt","w+");
    if (file){
        wprintf(L"%s",mailName);
        fprintf(file,"%s",mailName);
    }
    else{

    }
}