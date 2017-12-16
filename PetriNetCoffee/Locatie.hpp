//
//  Locatie.hpp
//  PetriNetCoffee
//
//  Created by MacBook on 04/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#ifndef Locatie_hpp
#define Locatie_hpp

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Locatie{
    
private:
    string mTag;
    int mJeton;
public:
    Locatie (){};
    Locatie(string tag);
    bool Update(int value);
    string GetTag();
    int GetJeton();

    
    
    
    
};

#endif /* Locatie_hpp */
