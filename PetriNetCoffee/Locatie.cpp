//
//  Locatie.cpp
//  PetriNetCoffee
//
//  Created by MacBook on 04/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#include "Locatie.hpp"

Locatie::Locatie(string tag)
{
    mTag=tag;
    mJeton=0;
}


string Locatie::GetTag()
{
    return mTag;
}

int Locatie::GetJeton()
{
    return mJeton;
}

bool Locatie::Update(int value)
{
    int rez = mJeton + value;
    
    if(rez<0)
        return false;
    else
    {
        mJeton=rez;
        return true;
    }
}
