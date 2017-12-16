//
//  PetriNetCoffee.hpp
//  PetriNetCoffee
//
//  Created by MacBook on 07/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#ifndef PetriNetCoffee_hpp
#define PetriNetCoffee_hpp

#include <stdio.h>
#include "Petri.hpp"
#include <iostream>
#include <list>
#include "Arc.hpp"
#include <algorithm>

using namespace std;

class PetriNetCoffee:public PetriNet
{
protected:
    void Initialize();
    list<Arc> mArc;
public:
    void Run();
    PetriNetCoffee();
    string GetState();
    void Print();
    
    
};
#endif /* PetriNetCoffee_hpp */
