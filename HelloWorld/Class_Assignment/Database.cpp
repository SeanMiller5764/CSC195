#include"DataBase.h"
#include <memory>

void Database::Create(Pokemon::eType type) 
{
    Pokemon* obj = nullptr;
    switch (type)
    {
    case Pokemon::eType::Charmander:
        obj = new Charmander();
        cin >> *obj;
        break;
    case Pokemon::eType::Squirtle:
        obj = new Squirtle();
        cin >> *obj;
        break;
    }
    objects.push_back(unique_ptr<Pokemon>{obj});
}
std::unique_ptr<Pokemon> Database::Create(int ty)
{
    
    Pokemon* obj = nullptr;
    switch (ty)
    {
    case 0:
        obj = new Charmander();
        return std::unique_ptr<Pokemon>{obj};
    case 1:
        obj = new Squirtle();
        return std::unique_ptr<Pokemon>{obj};
    }
}

void Database::Display(const string& name) 
{
    for (auto& obj : objects)
    {
        if (obj->GetName() == name)
        {
            obj->Write(cout);
        }
    }
}
void Database::DisplayAll() 
{

    for (auto& obj : objects)
    {
            obj->Write(cout);
    }
}
void Database::Display(Pokemon::eType type)
{
    for (auto& obj : objects)
    {
        if (obj->GetType() == type)
        {
            obj->Write(cout);
        }
    }
}
 
 
 void Database::Load(const string& filename) 
 {
     ifstream input(filename);
    if (input.is_open())
    {
        while (!input.eof()) 
        {
            int type;
            input >> type;
            unique_ptr<Pokemon> pokemon = Create(type);
            pokemon->Read(input);
            objects.push_back(move(pokemon));
        }
    }
 }
 void Database::Save(const string& filename)
 {
     ofstream output(filename);
     if (output.is_open())
     {

         for (auto& obj : objects)
         {
             output << static_cast<int>(obj->GetType()) << endl;
             obj->Write(output);
         }
     }
 }
 Database::~Database()
{
     for (auto& obj : objects)
    {
        obj.reset();
     }
}