//
//  Arc.hpp
//  PetriNetCoffee
//
//  Created by MacBook on 04/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#ifndef Arc_hpp
#define Arc_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Locatie.hpp"

using namespace std;

class Arc {
private:
    int mCapacitate;
    Locatie mLocatie;
    int mDirectie;
public:
    Arc(int capacitate,Locatie locatie,int directie);
    void Update(void);
    bool Valid();
    Locatie GetLocatie();
    enum Direction{IN=0,OUT=1 };
    
    
    
    
    
    
    
};
#endif /* Arc_hpp */
