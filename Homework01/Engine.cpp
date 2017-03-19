#include "Engine.h"

Engine::Engine()
{
    this-> hp = 0;
    this-> volume = 0;
    this-> type = ELECTRIC;
}
Engine::Engine(int hp, int volume, typeEngine Type)
{
    this-> hp = hp;
    this-> volume = volume;
    this-> type = Type;
}
Engine::Engine(const Engine &e)
{
    this -> hp = e.hp;
    this -> volume = e.volume;
    this -> type = e.type;
}

void Engine::setHp(int hp)
{
    this-> hp = hp;
}
void Engine::setVolume(int volume)
{
    this-> volume = volume;
}
void Engine::setType(typeEngine Type)
{
    this-> type = Type;
}

int Engine::getHp() const
{
    return this-> hp;
}
int Engine::getVolume() const
{
    return this-> volume;
}
typeEngine Engine::getType() const
{
    return this-> type;
}
