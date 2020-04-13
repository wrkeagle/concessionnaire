#ifndef MOTO_H
#define MOTO_H

#include "vehicule.h"


class moto : public vehicule
{
 static int nb;
public:
    moto();
    
    virtual ~moto();
    
    static int ShowNb();
    
};

#endif // MOTO_H
