#include<iostream>
using namespace std;

class Animal
{
    string name;
    string sp;
    string continent;
    double kg;
public:
    Animal() {}
    Animal(string nm, string s, string cont, double k)
    {
        name = nm;
        sp = s;
        continent = cont;
        kg = k;
    }
    void Print()
    {
        cout << name << "\t" << sp << "\t" << continent << "\t" << kg << endl;

    }
    void Eat()
    {
        cout << "Пока не понятно что)))\n";
    }
    void Sound()
    {
        cout << "Пока не понятно какие звуки издает)))\n";
    }
};

class Elephant :public Animal
{
public:
    Elephant() {}
    Elephant(string nm, string s, string cont, double k) :Animal(nm, s, cont, k) {}
    void Eat()
    {
        cout << "Слоны травоядные животные\n";
    }
    void Sound()
    {
        cout << "Ищите слона в зоопарке, и услышете какие звкуи издают!!\n";
    }
};

class Parrot :public Animal {
public:
    Parrot() {}
    Parrot(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "Попугаи травоядные животные" << endl;
    }
    void Sound() {
        cout << "Ищити попугая в зоопарке, и услышите какие звуки он издаёт!" << endl;
    }
};

class Cat :public Animal {
public:
    Cat() {}
    Cat(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "Коты зоофаги" << endl;
    }
    void Sound() {
        cout << "Ищите диких котов в зоопарке, и услышите какие звуки они издают!" << endl;
    }
};


class Dog :public Animal {
public:
    Dog() {}
    Dog(string nm, string s, string cont, double k) : Animal(nm, s, cont, k) {}

    void Eat() {
        cout << "Собаки зоофаги" << endl;
    }
    void Sound() {
        cout << "Ищите собак в зоопарке, и услышите какие звуки они издают!" << endl;
    }
};

int main()
{
    setlocale(0, "ru");
    Elephant obj1("Indian elephant ", "Elephant", "Asia", 5000);
    obj1.Print();
    obj1.Eat();
    obj1.Sound();

    cout << endl;

    setlocale(0, "ru");
    Parrot obj2("African gray parrots ", "Parrot   ", "Africa", 0.4);
    obj2.Print();
    obj2.Eat();
    obj2.Sound();

    cout << endl;

    setlocale(0, "ru");
    Cat obj3("Wild cat ", "Cat   ", "Europe", 8);
    obj3.Print();
    obj3.Eat();
    obj3.Sound();

    cout << endl;

    setlocale(0, "ru");
    Dog obj4("Maltese dog ", "Dog   ", "Europe", 4);
    obj4.Print();
    obj4.Eat();
    obj4.Sound();
}
