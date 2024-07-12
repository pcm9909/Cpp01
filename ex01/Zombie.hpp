#include <iostream>

class Zombie
{
public:
    Zombie();
    ~Zombie(void);

    void SetName(std::string name);
    void announce(void) const;

private:
    std::string _name;
};


Zombie* zombieHorde(int N, std::string name);