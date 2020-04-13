#ifndef VOITURE_H
#define VOITURE_H

#include "vehicule.h"

class voiture : public vehicule
{
    static int nb;
public:
    voiture();
    
    virtual ~voiture();
    
    static int ShowNb();
    

};

#endif // VOITURE_H
