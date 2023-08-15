#include <iostream>

class Animal {
public:
    virtual void Voice() {
        std::cout << "Animal voice" << std::endl;
    }
private:
};

class Dog : public Animal {
public:
    void Voice() override {
        std::cout << "Whoof" << std::endl;
    }
private:
};
class Cat : public Animal {
public:
    void Voice() override {
        std::cout << "Myau" << std::endl;
    }
private:
};
class Telka : public Animal {
public:
    void Voice() override {
        std::cout << "Хочу последний айфон и на море" << std::endl;
    }
private:
};

int main()
{
    setlocale(LC_ALL, "Russian");


    Animal* Animals[3];

    Animals[0] = new Dog;
    Animals[1] = new Cat;
    Animals[2] = new Telka;

    for (int i = 0; i < 3; i++) {
        Animals[i]->Voice();
    }
}