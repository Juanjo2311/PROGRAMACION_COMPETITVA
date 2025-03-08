#include <bits/stdc++.h>

using namespace std;

int main()
{
	//map<tipo_llave, tipo_valor> mapa / no guarda instancias iguales
	map <char, int> mp;
	//mp [llave] = valor / la llave es unica, no se repite las instancias
	mp['b'] = 5;
	mp['a'] = 4;
	mp['c'] = 8;
	mp['c'] = 6;
	mp.insert(make_pair('k', 7));
	cout<<mp['a']<<endl;
	//Saber si esta o no
	cout << mp.count('z') <<endl;
	//borrar
	mp.erase('c');
	//tamanio
	cout<<"tamaño "<< mp.size() << endl;
	//mostrar
	/*for(auto x : mp) {
		cout<<x.first << " " << x.second << endl; //first (llave) second (valor)
	}*/
	//multimap<tipo_llave, tipo_valor> guardar instancias iguales
	 //ejercicio1
	 string a = "abffajcaadkfl";
	 map<char, int> mp1;
	 for(int i = 0; i < a.size(); i++){
	     mp1[a[i]]++;
	 }
	 for(auto x : mp1) {
		cout<<x.first << " " << x.second << endl; //first (llave) second (valor)
	}
	return 0;
}
