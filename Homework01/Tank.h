#pragma once

class Tank
{
private:
    int capacity;
public:
    Tank();
    Tank(int capacity);

    void setCapacity(int capacity);
    int getCapacity() const;
};
