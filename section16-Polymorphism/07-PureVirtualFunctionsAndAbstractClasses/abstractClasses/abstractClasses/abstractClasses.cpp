#include <iostream>

class Shape { // Abstract base class
private:

public:
    virtual void draw() = 0; // Pure virtual function
    virtual void rotate() = 0; // Yet another virtual function
    virtual ~Shape() {};
};

class Open_Shape : public Shape { // Abstract  class
private:

public:
    virtual ~Open_Shape() {};
};

class Closed_Shape : public Shape{
private:
public:
    virtual ~Closed_Shape() {};
};

class Circle : public Closed_Shape{
private:

public:
    virtual void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating circle" << std::endl;
    }

    virtual ~Circle() {};
};

class Line : public Open_Shape {
private:

public:
    virtual void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating line" << std::endl;
    }

    virtual ~Line() {};
};

class Square : public Closed_Shape {
private:

public:
    virtual void draw() override {
        std::cout << "Drawing a Square" << std::endl;
    }

    virtual void rotate() override {
        std::cout << "Rotating square" << std::endl;
    }

    virtual ~Square() {};
};

int main()
{

    //Gives an error, because this is an abstract class 
    //Shape shape{};
    //Shape newShape{new Open_Shape{}};

    Shape* shape1{ new Circle {} };
    Closed_Shape *shape2{ new Square{} };
    Line line;

    Open_Shape &shape3{line};
    Shape* shape4{&shape3};

    shape1->rotate();
    shape2->draw();
    shape3.draw();
    shape4->rotate();

    delete shape1;
    return 0;
}