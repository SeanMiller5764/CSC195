#include"DataBase.h"
void Database::Create(Pokemon::eType type) 
{
    Pokemon* obj = nullptr;
    switch (type)
    {
    case Pokemon::eType::Charmander:
        obj = new Charmander;
        break;
    case Pokemon::eType::Squirtle:
        obj = new Squirtle;
        break;
    }
    obj->Read(cout,cin);
    objects.push_back(obj);
}
void Database::Display(const string& name) 
{
    for (Pokemon* obj : objects)
    {
        if (obj->GetName() == name)
        {
            obj->Write(cout);
        }
    }
}
void Database::DisplayAll() 
{

    for (Pokemon* obj : objects)
    {
            obj->Write(cout);
    }
}
void Database::Display(Pokemon::eType type)
{
    for (Pokemon* obj : objects)
    {
        if (obj->GetType() == type)
        {
            obj->Write(cout);
        }
    }
}
 Database::~Database() 
{
     for (Pokemon* obj : objects)
     {
         delete obj;
     }
}