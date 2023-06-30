#include <iostream>

int main() {
    printf("=======================\n");
    printf("==welcome to bookshop==\n");
    printf("=======================\n");
    printf("press the number 1 ==newpper==\n");
    printf("press the number 2 == book  ==\n");
    int num;
    printf("== enter Your Number ==");
    scanf("%d",&num);
    switch(num){
        case 1:
           printf("** news papers items **\n");
           printf("<lanka deepa=60/=  >\n");
           printf("<diwaina=50/=      >\n");
           break;
         case 2:
           printf("**book papers items  **\n");
           printf("<English book=300/=  >\n");
           printf("<tamil book=500/=    >\n");
           break;        
    }
    
    return 0;