#include <iostream>

struct vec2
{
    float x,y;

    vec2(){
        x=0;
        y=0;
    }
    
    vec2(float x, float y)
        : x(x), y(y) {}

    vec2 operator+(const vec2& other) const{
        return vec2(x + other.x , y + other.y);
    }

    vec2 operator-(const vec2& other) const{
        return vec2(x - other.x , y - other.y);
    }
};




class Entity
{
public:

    int health;
    vec2 pos;
    
    Entity(){
        health=100;
    }

    Entity(int health, float x, float y)
        : health(health), pos(x,y) {}

    Entity(float x, float y)
        : health(100), pos(x,y) {}

public:

    void Print(){
        std::cout << "(" << pos.x <<" , " << pos.y << ")" << " health: " << health << std::endl;
    }
};





int main() {
    int x,y;
    float hpdecrease;

    std::cout << "Enter starting pos: " << std::endl;
    std::cin >> x;
    std::cin >> y;
    
    Entity e(x,y);
    e.pos = e.pos + vec2(5,7); 

    e.Print();
    std::cout << "Enter hp decrease: ";
    std::cin >> hpdecrease;
    e.health = e.health - hpdecrease;

    e.Print();
}