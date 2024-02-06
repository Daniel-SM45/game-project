#include<iostream>

class Player{
public: 

    Player(std::string playerName, std::string playerAlias, std::string playerMagic, int playerAge)
    :name(playerName), alias(playerAlias),magic(playerMagic), age(playerAge){
        
        if (playerAge < 0 ){
            age = 0;
        }
    }
    std::string setName(std::string sName)
    {
        name = sName;
        return name;
    }
    std::string setAlias(std::string sAlias)
    {
        alias = sAlias;
        return alias;
    }
    std::string setMagic(std::string sMagic)
    {
        magic = sMagic;
        return magic;
    }
    int setAge(int sAge)
    {
        age = sAge;
        return age;
    }

    std::string getName() const { return name; }
    std::string getAlias() const { return alias; }
    std::string getMagic() const { return magic; }
    int getAge() const { return age; }

private:
    std::string name;
    std::string alias;
    std::string magic;
    int age{0};
};
//Danil will have to create the Player object!
int main ()
{
     
    return 0;
}