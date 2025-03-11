
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //set<tipo_dato> guardar datos no repetitivos y ordenados (lista)
    set<int> s;
    s.insert(4);//insertar elemento de la lista
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.erase(2); //borrar elemento de la lista
    //erase(inicio, fin) borrar rango de elementos
    //Saber si un elemento esta count()
    cout << "el 4 esta en el set ? "<<(s.count(4) == 1 ? "Si esta" : "No esta")<< endl;
    for(auto x : s){
        cout << x << endl;
    }
    s.top(); //mostrar el dato que esta en la cima
    s.pop(); //elimina el dato que esta en la cima
    //vacio empty() and tamaño size()
    //multiset<tipo_dato> guardar datos repetitivos ordenado
    //unordered_set<tipo_dato> almacena valores no repetitivos no ordenados
    return 0;
}
