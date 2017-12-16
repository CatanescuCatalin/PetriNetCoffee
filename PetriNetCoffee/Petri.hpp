//
//  Petri.hpp
//  PetriNetCoffee
//
//  Created by MacBook on 07/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#ifndef Petri_hpp
#define Petri_hpp

#include <stdio.h>
#include <list>
#include<iostream>
#include "Tranzitie.hpp"

using namespace std;


class PetriNet
{
protected:
    list<Tranzitie> mTranzitie;
    
public:
    PetriNet();
    void Exec(string action);
    
    
    
};
#endif /* Petri_hpp */
