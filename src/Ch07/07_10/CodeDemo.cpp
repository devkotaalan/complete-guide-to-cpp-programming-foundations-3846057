// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person{
    // Write your code here
    public:
    Person(const std::string& name_i, float energy_i, float happiness_i, float health_i): name(name_i), energy(energy_i), happiness(happiness_i), health(health_i){}

    void Eat(float calories){
        this->energy = this->energy + (calories * 7.0/200.0);
        if (energy > 100) 
            energy = 100;
    }

    void Play(float minutes){
        this->happiness = this->happiness + minutes/2.0;
        this->energy = this->energy - minutes/3.0;
        if (happiness > 100) 
            happiness = 100;
        if (energy < 0) 
            energy = 0;
    }

    void Sleep(float hours){
        this->energy = this->energy + hours*3.75;
        this->health = this->health + hours*2.5;
        if (energy > 100) 
            energy = 100;
        if (health > 100) 
            health = 100;
    }

    float GetEnergy() const {
        return this->energy;
    }

    float GetHappiness() const {
        return this->happiness;
    }

    float GetHealth() const {
        return this->health;
    }

    private:
    std::string name;
    float energy;
    float happiness;
    float health;
};

int main(){
    // Example 1
    // std::string name = "Alice";
    // float energy = 40;
    // float happiness = 22;
    // float health = 80;

    // float calories = 300;
    // float playMinutes = 120;
    // float sleepHours = 5;

    // Example 2
    std::string name = "Joe";
    float energy = 50;
    float happiness = 70;
    float health = 60;

    float calories = 1000;
    float playMinutes = 60;
    float sleepHours = 8;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}