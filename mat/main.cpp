#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
    
    Steys::MenuItems study = { "1 - Хочу учиться математике!", Steys::study};
    Steys::MenuItems exit = { "0 - Выйти", Steys::exit};

    Steys::MenuItems* main_child[] = {&exit, &study};
    const int main_size = sizeof(main_child)/sizeof(main_child[0]);

    int input;
    do {
        std::cout << "Добро пожаловать!\n";
        for (int i = 1; i < main_size; ++i) {
            std::cout << main_child[i]->title << std::endl;
        }
        std::cout << main_child[0]->title << std::endl;
        std::cout << "> ";

        std::cin >> input;
        main_child[input]->func();

        std::cout << std::endl;
    } while (true);
    return 0;
}
