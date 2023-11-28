#include "form.h"
#include "Generate.h"
#include "stdbool.h"
#include <ctype.h>
int main() {
    bool goNext=true;
    int response=0;
    while (goNext){
        response=choiceForm();
        if(response==0){
            break;
        }
        else{
            if(response==1){

            }
            else{
                int taille=0;
                wprintf(L"Enter password length :  ");
                scanf("%d",&taille);
                fflush(stdin);
                keyGenerate(taille);
            }
        }
        char text;
        wprintf(L"Do you want to generate another text ? (Y/N) \n");
        scanf("%c",&text);
        fflush(stdin);
        while(tolower(text)!='y' && tolower(text)!='n'){
            wprintf(L"Do you want to generate another text ? (Y/N) \n");
            scanf("%c",&text);
            fflush(stdin);
        }
        if(tolower(text)=='n'){
            goNext=false;
        }
    }
    return 0;
}
