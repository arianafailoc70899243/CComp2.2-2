#include <iostream>
using namespace std;
int main(){
    int total_de_millas;
    float costo_por_galon;
    float millas_por_galon;
    float tarifas_de_estacionamiento;
    float total_por_dia;
    cout<<"Millas recorridas por dia: ";
    cin >> total_de_millas;
	cout << "Costo por gasolina: ";
	cin >> costo_por_galon;
	cout << "Millas por galon: ";
	cin  >> millas_por_galon;
	cout << "Estacionamiento: ";
	cin >> tarifas_de_estacionamiento;
	cout << "Gastos por dia " << total_de_millas / costo_por_galon * millas_por_galon + total_por_dia << endl;

    return 0;
}