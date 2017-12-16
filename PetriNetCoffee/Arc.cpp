//
//  Arc.cpp
//  PetriNetCoffee
//
//  Created by MacBook on 04/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#include "Arc.hpp"

Arc::Arc(int capacitate,Locatie locatie,int directie)
{
    mCapacitate=capacitate;
    mLocatie=locatie;
    mDirectie=directie;
}

Locatie Arc::GetLocatie()
{
    return mLocatie;
}

bool Arc::Valid()
{
    
                if(mDirectie==IN)
                    {
                           return true;
                    }
                else
                {
                       return (mCapacitate <= mLocatie.GetJeton());
                }
}


void Arc::Update()
{
    if(mDirectie==IN)
    {
        mLocatie.Update(mCapacitate);
    }
    else
    {
        mLocatie.Update(-mCapacitate);
    }
}
