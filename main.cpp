#include <iostream>

void mostrar(int n, char arreglo[]);
struct Personaje{
	char nombre[30];
	char tipo[30];
	float fuerza;
	float salud;
}P[5];
using namespace std;
int main() {
	int nu,sum,num[4];
	char nom[30];
	cout << "----- N" << char(163) << "meros: captura,suma y promedio ----- " << endl;
	cout << "Introduce 5 n" << char(163) << "meros: " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		sum += num[i];
	}
		for (int i = 0; i < 5; i++) {
		cout << "Los n"<< char(163) << "meros son : " <<num[i]<< endl;
	}
		cout <<"La suma es: "<<sum<<endl;
		cout <<"El promedio es: "<<sum/5<<endl;
	system("pause");
	system("cls");
	cout << "----- Nombre: funciones y arreglos ----- " << endl;
	cout << "Introduce tu nombre: " << endl;
	cin.ignore();
	cin.getline(nom,30);
	cout << "Introduce el n"<< char(163) << "mero de veces que quieres imprimir tu nombre: "<< endl;
	cin>>nu;
	mostrar(nu,nom);
	system("pause");
	system("cls");
	cout << "----- Personajes: Estructuras ----- " << endl;
	cout <<"Captura los datos de los personajes" << endl;
	for (int i = 0; i < 5; i++) {
		cout <<"Personaje: "<<i<<endl; 
		cout <<"Nombre: "; 
	    cin.ignore();
	    cin.getline(P[i].nombre,30);
	    cout <<"Tipo: "; 
	    cin.getline(P[i].tipo,30);
	    cout <<"Fuerza: ";
		cin.ignore();
	    cin>>P[i].fuerza;
	     cout <<"Salud: ";
	    cin>>P[i].salud;
	    system("pause");
	    system("cls");
	}
	for (int i = 0; i < 5; i++) {
		cout <<"Personaje: "<<i<<endl; 
		cout <<"Nombre: "<< P[i].nombre<<endl;
	    cout <<"Tipo: "<< P[i].tipo<<endl;
	    cout <<"Fuerza: "<<P[i].fuerza<<endl;
	    cout <<"Salud: "<<P[i].salud<<endl;
	    cout <<"..................................."<<endl;
	}
	return 0; 
}
void mostrar(int n, char arreglo[]) {
		for (int i = 1; i <= n; i++) {
	    cout <<i<<"-"<<arreglo<<endl;
	}
}
