#include "Tree.h"

Tree::Tree(string Name, string Material, double Price, double Height, string Color, double Age, string Country, double Width):
name(Name), material(Material), price(Price), height(Height), color(Color), age(Age), country(Country), width(Width)
{
}

void Tree::print_name()
{
    cout << "Name: " << name << endl;
}
void Tree::print_material()
{
    cout << "Material: " << material << endl;
}
void Tree::print_price()
{
    cout << "Price: " << price << endl;
}
void Tree::print_height()
{
    cout << "Height: " << height << endl;
}
void Tree::print_color()
{
    cout << "Color: " << color << endl;
}
void Tree::print_age()
{
    cout << "Age: " << age << endl;
}
void Tree::print_country()
{
    cout << "Country: " << country << endl;
}
void Tree::print_width()
{
    cout << "width: " << width << endl;
}