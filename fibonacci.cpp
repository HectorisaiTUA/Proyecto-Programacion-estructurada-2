#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int posicion;
string x;

int fibonacci(int posicion);
int pedir();
void imprimir();

int main()
{

	pedir();
	imprimir();

	return 0;
}

int fibonacci(int posicion)
{
	if (posicion == 1 || posicion == 2)
		return 1;
	else
		return fibonacci(posicion - 1) + fibonacci(posicion - 2);
}

int pedir()
{
	ifstream file;
	file.open("Dato.txt", ios::in);
	if (file.fail())
	{
		cout << "No se pudo abrir el documento";
		exit(1);
		imprimir();
	}

	cout << endl << "Cantidad de numeros a mostrar: ";
	while (!file.eof())
	{
		getline(file, x);
		cout << x;
	}
	file.close();
}

void imprimir()
{
	int *pi = new int[posicion];
	int i, dato;
	ofstream file;
	file.open("Dato.txt", ios::out);

	if (file.fail())
	{
		cout << "No se pudo abrir el documento";
		exit(1);
	}

	cout << endl<<endl;
	file << "Imprimiendo serie: ";
	file << endl
		 << endl;
	for (i = 1; i <= atoi(x.c_str()); i++)
	{
		*pi = fibonacci(i);
		cout << *pi << " ";
		file << *pi << " ";
	}
	cout << endl <<endl;
	delete[] pi;
}hola