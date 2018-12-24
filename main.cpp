#include "Tree.h"

int main()
{

    Tree TreeObject("NoName1", "wood", 100, 200, "green", 10, "Usa", 70);
    TreeObject.print_name();
    TreeObject.print_material();
    TreeObject.print_price();
    TreeObject.print_height();
    TreeObject.print_color();
    TreeObject.print_age();
    TreeObject.print_country();
    TreeObject.print_width();

    Tree TreeObject1("NoName2", "plastic", 150, 250, "white", 12, "Canada", 60);
    TreeObject1.print_name();
    TreeObject1.print_material();
    TreeObject1.print_price();
    TreeObject1.print_height();
    TreeObject1.print_color();
    TreeObject1.print_age();
    TreeObject1.print_country();
    TreeObject1.print_width();

    Tree TreeObject2("NoName3", "wood", 200, 300, "red", 11, "Ukraine", 50);
    TreeObject2.print_name();
    TreeObject2.print_material();
    TreeObject2.print_price();
    TreeObject2.print_height();
    TreeObject2.print_color();
    TreeObject2.print_age();
    TreeObject2.print_country();
    TreeObject2.print_width();

    return 0;
}