#pragma once
#include <iostream>
#include <string>

using namespace std;

class Tree
{

private:

    string name;
    double price;
    string material;
    double height;

protected:

    string color;
    double age;

public:
    string country;
    double width;

    Tree(string Name, string material, double price, double Height,string color, double age, string country, double width);
    void print_name();
    void print_material();
    void print_price();
    void print_height();
    void print_country();
    void print_width();
    void print_color();
    void print_age();
};