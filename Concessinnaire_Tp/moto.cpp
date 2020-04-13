#include "moto.h"
#include <iostream>
using namespace  std;

int moto::nb =0;

moto::moto()
{
    cout << "moto" << endl; 
    nb++;
}
moto::~moto()
{
   
    nb--;
    
}
int moto::ShowNb(){
    return nb;
}
