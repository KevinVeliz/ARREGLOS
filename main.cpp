#include <iostream>
using namespace std;


void imprimir(int a[]);

//ESTO ES LA CLASE PRINCIPAL
int main()
{

    int arreglo[50];
    int n;
    imprimir(arreglo);

    return 0;
}


void imprimir(int a[]  )
{
    int i;
    int arreglo[50];
    int num=0;
    cout<<" LOS PARES SON "<<endl;
    for(i=0;i<50;i++)
    {
      num=num+1;
      if (i%2!=0 && arreglo[i]%2==0)
      {
        arreglo[i]=num;
        
        cout<<" UB "<<" ["<<i<<"]:"<<arreglo[i]<<endl; 
      }
       
    }
}
