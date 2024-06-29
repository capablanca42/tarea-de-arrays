//Autor: Jandry Zambrano Palacios 
//Fecha: 28 06 2024
//TEMA:función recursiva
/*Convierta la siguiente función en recursiva
- Deben tener un punto de salida, para no caer  en un bucle infinito

int Contar(int num)
{
    int n=1, cont=0;
    while(n <= num)
    {
        n=n*10;
        cont++;
    }
    return cont;
}
*/
#include<iostream>
using namespace std;
 
 //función recursiva  debe tener un punto de salida
int contar(int num)
{
    if(num==1 || num==0)

return  1;

    int fac=1;
    for (int k=1; k<=num; k++)
    fac=fac *k;

return fac;

int n=1, cont=0;
while(n <=num)
{
    n=n*10;
    cont++;
    
}
}

int main ()
{
cout<<endl<<"la función recursiva de  10 es"<<recursiva(10);
cout<<endl<<"la función recursiva de  10 es"<<recursiva(15);
cout<<endl<<"la función recursiva de  10 es"<<recursiva(20);
cout<<endl<<"la función recursiva de  10 es"<<recursiva(25);
    return 0;
}
