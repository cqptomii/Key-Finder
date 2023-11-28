//
// Created by tomfr on 28/11/2023.
//
#include "form.h"

int choiceForm(){
    _setmode(_fileno(stdout), 0x00020000);
    wprintf(L"  ┌───────────────────────────────────────┐  \n");
    wprintf(L"  |           Welcome to Keygen           |  \n");
    wprintf(L"  |    1- Generate mail                   |  \n");
    wprintf(L"  |    2- Generate password               |  \n");
    wprintf(L"  |    0- Quitter                         |  \n");
    wprintf(L"  └───────────────────────────────────────┘  \n \n");
    int response=0;
    wprintf(L" Enter your response :  ");
    scanf("%d",&response);
    fflush(stdin);
    return response;
}