#include <stdio.h>
#include <stdio_ext.h>

int Compara_Palabras (char [14], char [14]);
int main()
{
    char string1[14]={0};
    char string2[14]={0};
    int retorno;
    printf("Hola, ingrese una palabra de max 13 letras\n");
    scanf("%s", string1);
    __fpurge(stdin);
    printf("Ahora ingrese su segunda palabra bajo las mismas condiciones\n");
    scanf("%s", string2);
    __fpurge(stdin);
    retorno=Compara_Palabras(string1, string2);
    printf("%d", retorno);
    return 0;
}
int Compara_Palabras (char x[14], char y[14]){
    char comparar=0;
    char *letra=NULL;
    for(int i=0; i<14; i++){
        letra=&x[i];
        comparar=*letra;
        letra=&y[i];
        if (*letra!=comparar){
            comparar=1;
            break;
        }else{
            comparar=0;
        }
    }
    return (comparar);
}