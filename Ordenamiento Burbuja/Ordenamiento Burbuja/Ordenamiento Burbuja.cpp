void mostrarArreglo(const int[], int);
void ordenarArreglo(int[], int);
void intercambiar(int&, int&);
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	const int tamano = 15;
	int arreglo[tamano] = { 25,17,13,16,41,32,12,115,95,84,54,63,78,21,10 };
	cout <<"Arreglo antes de ordenarse: " << endl;
	mostrarArreglo(arreglo, tamano);
	cout << "Arreglo despues de ordenarse: " << endl;
	ordenarArreglo(arreglo, tamano);
	mostrarArreglo(arreglo, tamano);
	cout << "Fin del programa :)" << endl;
	return 0;
}

void mostrarArreglo(const int arreglo[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		cout << "arreglo[" << i << "]=" << arreglo[i] << endl;
	}
}

void ordenarArreglo(int arreglo[], int tamano)
{
	for (int i = 0; i < tamano - 1; i++)
	{
		for (int j = 0; j < tamano - 1; j++)
		{
			if (arreglo[j] < arreglo[j + 1])
			{
				intercambiar(arreglo[j], arreglo[j + 1]);
			}
		}
	}	
}

void intercambiar(int &a, int &b)
{
	int tmp = b;
	b = a;  
	a = tmp;
}