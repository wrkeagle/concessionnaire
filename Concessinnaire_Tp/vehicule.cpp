#include "vehicule.h"
#include <iostream>
using namespace  std;


int vehicule::nb = 0;


vehicule::vehicule()
{
        nb++;
}

vehicule::~vehicule()
{
        nb--;
}

int vehicule::ShowNb(){
    return nb;
}
