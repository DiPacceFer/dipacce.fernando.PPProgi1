#include <stdio.h>
#include <stdlib.h>

typedef struct{
        int id;
        char nombre[20];
        int infectados;
        int recuperados;
        int muertos;
}ePais;

void actualizarRecuperados(ePais pais[], int tam, int* recuDia);

int invertirCadena(char cadena[], int tam);

int ordenarCaracteres(char cadena[], int tam);

int main()
{
    int recuperadosDelDia;

    ePais paises[1]={100, "Argentina", 10000, 5000, 20};

    recuperadosDelDia= 500;

    actualizarRecuperados(paises, 1, &recuperadosDelDia);



    return 0;
}
void actualizarRecuperados(ePais pais[], int tam, int* recuDia)
{
    for(int i=0;i<tam;i++)
    {
        pais[i].recuperados += *recuDia;
    }




}
int invertirCadena(char cadena[], int tam)
{
    char auxCadena;
    int isOk=0;

    if(cadena != NULL && tam >0)
    {
        for(int i=0;i<tam-1;i++)
        {
            for(int j=tam;j>tam;i--)
            {
                auxCadena = cadena[j];
                cadena[j] = cadena[i];
                cadena[i] = auxCadena;
            }
        }
        isOk =1;
    }
    return isOk;
}
int ordenarCaracteres(char cadena[], int tam)
{
    char auxcadena;
    int isOk=0;

    if(cadena !=NULL && tam>0)
    {
        for(int i=0; i<tam-1; i++)
        {
            for(int j=1; j<tam;j++)
            {
               if(cadena[i]>cadena[j])
               {
                   auxcadena = cadena[j];
                   cadena[j] = cadena[i];
                   cadena[i] = auxcadena;
               }
            }
        }
        isOk=1;
    }
    return isOk;
}
