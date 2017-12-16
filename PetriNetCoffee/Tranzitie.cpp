//
//  Tranzitie.cpp
//  PetriNetCoffee
//
//  Created by MacBook on 06/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#include "Tranzitie.hpp"

Tranzitie::Tranzitie(string aTag,list<Arc> aArce)
{
    mTag=aTag;
    mArce=aArce;
}

bool Tranzitie::isValid()
{
    for(Arc& arc : mArce)
    {
        if(!arc.Valid())
        {
            return false;
        }
        
    }
    return true;
}

void Tranzitie::Update()
{
    for(Arc& arc : mArce)
    {
        arc.Update();
    }
    
}

string Tranzitie::GetTag()
{
    return mTag;
}

list<Locatie> Tranzitie::GetLocatie()
{
    list<Locatie> locs;
    for(Arc& arc : mArce)
    {
        locs.push_front(arc.GetLocatie());
    }
    return locs;
}
