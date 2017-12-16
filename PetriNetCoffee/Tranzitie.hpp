//
//  Tranzitie.hpp
//  PetriNetCoffee
//
//  Created by MacBook on 06/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#ifndef Tranzitie_hpp
#define Tranzitie_hpp

#include <stdio.h>
#include <iostream>
#include <list>
#include "Arc.hpp"
#include "Locatie.hpp"

using namespace std;

class Tranzitie
{
private:
    list<Arc> mArce;
    string mTag;
public:
    Tranzitie(string aTag,list<Arc> aArce);
    bool isValid();
    void Update();
    string GetTag();
    list<Locatie> GetLocatie();
    
};

#endif /* Tranzitie_hpp */
