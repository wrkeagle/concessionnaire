#include "voiture.h"
#include <iostream>
using namespace std;

int voiture::nb =0;

voiture::voiture()
{
    cout << "voiture" << endl; 
    nb++;
}
voiture::~voiture()
{
        nb--;
}

int voiture::ShowNb(){
    return nb;
}
