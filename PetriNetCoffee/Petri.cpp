//
//  Petri.cpp
//  PetriNetCoffee
//
//  Created by MacBook on 07/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#include "Petri.hpp"

PetriNet::PetriNet()
{
    
}

void PetriNet::Exec(std::string action)
{
    for(Tranzitie& trans: mTranzitie)
    {
        if(trans.GetTag()==action && trans.isValid())
        {
            trans.Update();
            return;
        }
    }
}
