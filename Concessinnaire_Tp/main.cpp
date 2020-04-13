#include "moto.h"
#include "vehicule.h"
#include "voiture.h"
#include "presentation.h"
#include <iostream>
#include <vector>

using namespace std;
typedef vector<vehicule*> Liste_Vehicule;
typedef Liste_Vehicule::iterator _List_iterator;




void showAll(){
    cout << "Nombre de voitures: "<< voiture::ShowNb() << endl;
    cout << "Nombre de motos: "<< moto::ShowNb() << endl;
    cout << "Nombre de vehicules: " << vehicule::ShowNb() << endl;
}



void vehiculesConces()
{
    Liste_Vehicule v;
    for(int i{}; i<9; i++){
        v.push_back(new moto);
    }
    for(int i{}; i<15; i++){
        v.push_back(new voiture);
    }
    showAll();
}

int main(){
    startup();
    cout << "Voici les vehicules dont nous disposons:" << endl;
    vehiculesConces();
    end();
    return(0);
}
