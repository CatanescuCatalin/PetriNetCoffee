//
//  PetriNetCoffee.cpp
//  PetriNetCoffee
//
//  Created by MacBook on 07/12/2017.
//  Copyright © 2017 MacBook. All rights reserved.
//

#include "PetriNetCoffee.hpp"

PetriNetCoffee::PetriNetCoffee()
{
    Initialize();
}

void PetriNetCoffee::Initialize()
{
    Locatie lZeroB ("0b");
    Locatie lCinciB ("5b");
    Locatie lZeceB ("10b");
    Locatie lCincispeB ("15b");
    Locatie lDouazeciB ("20b");
    
    
    lZeceB.Update(1);
    
    mTranzitie.push_front(Tranzitie("dep5b", list<Arc>())); {
        mArc.push_front( Arc(1, lZeroB, Arc::OUT));
        mArc.push_front(Arc(1, lCinciB, Arc::IN));
    }
    
    
    mTranzitie.push_front(Tranzitie("dep10b", list<Arc>())); {
        mArc.push_front(Arc(1, lCinciB, Arc::OUT));
        mArc.push_front(Arc(1, lCincispeB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep10b", list<Arc>())); {
        mArc.push_front(Arc(1, lZeroB, Arc::OUT));
        mArc.push_front(Arc(1, lZeceB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep10b", list<Arc>())); {
        mArc.push_front(Arc(1, lZeroB, Arc::OUT));
        mArc.push_front(Arc(1, lCinciB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep10b", list<Arc>())); {
        mArc.push_front(Arc(1, lZeceB, Arc::OUT));
        mArc.push_front(Arc(1, lDouazeciB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep5b", list<Arc>())); {
       mArc. push_front(Arc(1, lCinciB, Arc::OUT));
        mArc.push_front(Arc(1, lZeceB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep5b", list<Arc>())); {
        mArc.push_front(Arc(1, lZeceB, Arc::OUT));
        mArc.push_front(Arc(1, lCincispeB, Arc::IN));
    }
    
    mTranzitie.push_front(Tranzitie("dep5b", list<Arc>())); {
        mArc.push_front(Arc(1, lCincispeB, Arc::OUT));
        mArc.push_front(Arc(1, lDouazeciB, Arc::IN));
    }
    
    
    mTranzitie.push_front(Tranzitie("iacafea15b", list<Arc>())); {
        mArc.push_front(Arc(1, lDouazeciB, Arc::OUT));
        mArc.push_front(Arc(1, lCinciB, Arc::IN));
    }
    mTranzitie.push_front(Tranzitie("iacafea15b", list<Arc>())); {
        mArc.push_front(Arc(1, lCincispeB, Arc::OUT));
        mArc.push_front(Arc(1, lZeroB, Arc::IN));
    }
    mTranzitie.push_front(Tranzitie("iacafea20b", list<Arc>())); {
        mArc.push_front(Arc(1, lDouazeciB, Arc::OUT));
        mArc.push_front(Arc(1, lZeroB, Arc::IN));
    }

}

string PetriNetCoffee::GetState()
{
    for(Tranzitie& trans : mTranzitie)
    {
    list<Locatie> locs = trans.GetLocatie();
            for(Locatie loc : locs)
        {
                if(loc.GetJeton()==1)
            {
                return loc.GetTag();
            }
            
        }
    
    }
    return nullptr;
}

void PetriNetCoffee::Run()
{
    int option;
    do
    {
        Print();
        std::cin>>option;
        switch(option)
        {
                
            case 1:
                Exec("dep5b");
                std::cout<<"Ati depus 5 bani"<<endl;
                break;
            case 2:
                Exec("dep10b");
                std::cout<<"Ati depus 10 bani"<<endl;
                break;
            case 3:
                Exec("iacafea15b");
                std::cout<<"Ati cumparat o cafea mica"<<endl;
                break;
            case 4:
                Exec("iacafea20b");
                std::cout<<"Ati cumparat o cafea mare"<<endl;
                break;
        }
        
    }while(option!=0);
}

void PetriNetCoffee::Print()
{
    //std::cout<<"Creditul dumneavoastra este de "<<GetState()<<endl;
    std::cout<<endl<<endl<<"1. Introduceti 5 bani"<<endl;
    std::cout<<"2. Introduceti 10 bani"<<endl;
    std::cout<<"3. Cumparati o cafea mica"<<endl;
    std::cout<<"4. Cumparati o cafea mare"<<endl;
    std::cout<<"0. Iesiti"<<endl;

}
