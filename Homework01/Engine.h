#pragma once
#include "TypeEngine.h"

class Engine
{
private:
    int hp;
    int volume;
    typeEngine type;
public:
    Engine();
    Engine(int hp, int volume, typeEngine Type);
    Engine(const Engine &e);

    void setHp(int hp);
    void setVolume(int volume);
    void setType(typeEngine Type);

    int getHp() const;
    int getVolume() const;
    typeEngine getType() const;
};
