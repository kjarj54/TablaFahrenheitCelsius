#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
	setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra ñ en pantalla
	
	double fahrenheit, celsius, temp;
	int MENOR = 0;
	int MAYOR = 300;
	int INCR = 20;
	char r;
	
	do{
		cout<<"Ingrese la temperatura que desea convertir\n";
		cin>>temp;
	
		cout<<setw(10)<<"Fahrenheit"<<setw(15)<<"Celsius"<<endl;//Setea los encabezados en un pocicion especifica
		cout<<"--------------------------------------------"<<endl;
			
		for (fahrenheit = temp; fahrenheit <= MAYOR; fahrenheit += INCR) {
        	celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        	cout << fixed << setprecision(2) << setw(10) << fahrenheit << setw(15) << celsius << endl;//Setea las conversiones en la tabla y una posicion especifica
    	}
		cout<<endl<<"Desea realizar otra acción? Digite S=Si o N=NO" <<endl;
		cin>>r;
		system("cls");	
	}while(r == 's' || r == 'S');
	system("cls");
	
	
	
    return 0;
}
