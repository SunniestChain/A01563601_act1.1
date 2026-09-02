//
// Created by Diego Mayagoitia on 9/1/26.
//

#include "sumas.h"

int sumas::sumaiterativa(int n)
{
    int suma=0;
    for(int i=1;i<=n;i++)
        {
            suma+=i;
        }
    return suma;
}

int sumas::sumarecursiva(int n)
{
    if (n <= 1)
        {
            return n;
        }
    return n +sumarecursiva(n - 1);
}

int sumas::sumadirecta(int n)
{
    return (n*(n+1)/2);

}
