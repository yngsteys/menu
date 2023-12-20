#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"
#include "menu_items.hpp"

int main() {
    const Steys::MenuItems* current = &Steys::MAIN;
    do {
        current = current->func(current);
    } while (true);
    return 0;
}
