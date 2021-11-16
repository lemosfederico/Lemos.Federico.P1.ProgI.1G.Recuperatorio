#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

} ePais;
//Ej 1
int actualizarRecuperados(ePais* unPais, int recuperadosDiario);
//Ej 2
int invertirCadena(char cadena[]);
//Ej 3
int ordenarCaracteres(char cadena[]);

int main()
{
    /*1.Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int), recuperados(int) y muertos(int).
    Desarrollar una función llamada actualizarRecuperados que reciba el país y los recuperados del dia y que acumule estos
    a los que ya tiene el país. La función no devuelve nada.*/
    //EJ 1
    int recuperadosDelDia;
    ePais paises[2] =
    {
        {1, "Argentina", 1000, 3000, 500},
        {2, "Brasil", 5000, 30000, 5000}
    };

    char cadenaCaracteres[20]= {"algoritmo"};

    char cadenaParaInvertir[40] = "Hola como estas?";
    int pudoOrdenar;
    //EJ 1
    printf("Recuperados antes: %d\n", paises[0].recuperados);
    recuperadosDelDia=50;
    actualizarRecuperados(&paises[0], recuperadosDelDia);
    printf("Recuperados despues: %d\n", paises[0].recuperados);

    /*2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres como parámetro
    y su responsabilidad es invertir los caracteres de la misma.
    Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU */


    /*3. Crear una función que se llame ordenarCaracteres que reciba una cadena de
    caracteres como parámetro y su responsabilidad es ordenarlos caracteres de
    manera ascendente dentro de la cadena. Ejemplo si le pasamos "algoritmo" la deja como "agilmoort"*/
    //EJ 3
    printf("Cadena sin ordenar: %s\n",cadenaCaracteres);

    pudoOrdenar=ordenarCaracteres(cadenaCaracteres);

    printf("Pudo ordenar: %d\n",pudoOrdenar);

    printf("Cadena ordenada Ascendente: %s\n",cadenaCaracteres);

    printf("Cadena para invertir: %s\n", cadenaParaInvertir);

    invertirCadena(cadenaParaInvertir);

    printf("Cadena ya invertida: %s\n", cadenaParaInvertir);




    return 0;
}
//EJ 1
int actualizarRecuperados(ePais* unPais, int recuperadosDiario)
{
    int todoOk = 0;

    unPais->recuperados = unPais->recuperados + recuperadosDiario;

    return todoOk;
}
//EJ 2
int invertirCadena(char cadena[])
{
    int todoOk=0;
    int i=0;
    int largo=strlen(cadena)-1;

    char auxCad[20];

    strcpy(auxCad, cadena);

    if(cadena!=NULL)
    {
        do
        {
            cadena[i]=auxCad[largo];
            i++;
            largo--;
        }
        while(cadena[i]!= '\0');
        todoOk = 1;
    }
    return todoOk;
}

//EJ 3
int ordenarCaracteres(char cadena[])
{
    int todoOk=0;
    char auxChar;
    if(cadena!=NULL)
    {
        for(int i=0; i<strlen(cadena)-1; i++)
        {
            for(int j=i+1; j<strlen(cadena); j++)
            {
                if(cadena[i]>cadena[j])
                {
                    auxChar=cadena[i];
                    cadena[i]=cadena[j];
                    cadena[j]=auxChar;
                }
            }
        }
        todoOk=1;
    }
    return todoOk;
}

