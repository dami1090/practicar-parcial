#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int ingresarInt(char preg[])
{
    int aux;
    printf("%s",preg);
    scanf("%d",&aux);
    return aux;
}

float ingresarFloat(char preg[])
{
    float aux;
    printf("%s",preg);
    scanf("%f",&aux);
    return aux;
}

char ingresarChar(char preg[])
{
    char aux;
    printf("%s",preg);
    fflush(stdin);
    scanf("%c",&aux);
    return aux;
}

int validarNumero(char lista[])
{
   int i=0;
   while(lista[i] != '\0')
   {
       if(lista[i] < '0' || lista[i] > '9')
           {
               return 0;
           }

       i++;
   }
   return 1;
}

int validarAlfaNumerico(char lista[])
{
   int i=0;
   while(lista[i] != '\0')
   {
       if((lista[i] != ' ') && (lista[i] < 'a' || lista[i] > 'z') && (lista[i] < 'A' || lista[i] > 'Z') && (lista[i] < '0' || lista[i] > '9'))
           {
               return 0;
           }

       i++;
   }
   return 1;
}

int validarLetras(char lista[])
{
   int i=0;
   while(lista[i] != '\0')
   {
       if((lista[i] != ' ') && (lista[i] < 'a' || lista[i] > 'z') && (lista[i] < 'A' || lista[i] > 'Z'))
           {
               return 0;
           }

       i++;
   }
   return 1;
}

int validarNumeroFloat(char lista[])
{
   int i=0;
   int cantidadPuntos=0;
   while(lista[i] != '\0')
   {
       if (lista[i] == '.' && cantidadPuntos == 0)
       {
           cantidadPuntos++;
           i++;
           continue;

       }
       if(lista[i] < '0' || lista[i] > '9')
           {
               return 0;
           }

       i++;
   }
   return 1;
}

void ingresarResp(char preg[],char resp[])
{
    printf("%s",preg);
    scanf ("%s", resp);
}

int ingresarRespLetras(char preg[],char resp[])
{
    char aux[250];
    ingresarResp(preg,aux);
    if(validarLetras(aux))
    {
        strcpy(resp,aux);
        return 1;
    }
    return 0;
}



int ingresarRespNumeros(char preg[],char resp[])
{
    char aux[250];
    ingresarResp(preg,aux);
    if(validarNumero(aux))
    {
        strcpy(resp,aux);
        return 1;
    }
    return 0;
}


int ingresarRespNumeroFloat(char preg[],char resp[])
{
    char aux[250];
    ingresarResp(preg,aux);
    if(validarNumeroFloat(aux))
    {
        strcpy(resp,aux);
        return 1;
    }
    return 0;
}
