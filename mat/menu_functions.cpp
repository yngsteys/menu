#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const Steys::MenuItems* Steys::exit(const MenuItems* current) {
    std::exit(0);
}


const Steys::MenuItems* Steys::show_menu(const MenuItems* current) {
    for (int i = 1; i < current->child_count; i++) {
        std::cout << current->child[i]->title << std::endl;
    }
    std::cout << current->child[0]->title << std::endl;
    std::cout << "Выбор > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->child[user_input];
}


const Steys::MenuItems* Steys::university_itmo(const MenuItems* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::university_spbstu(const MenuItems* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::university_etu(const MenuItems* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::university_go_back(const MenuItems* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}


const Steys::MenuItems* Steys::spbu_pm_pu(const MenuItems* current) {
    std::cout << current->title << std::endl;
    std::cout << "https://apmath.spbu.ru\n";
    std::cout<< std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::spbu_mm(const MenuItems* current) {
    std::cout << current->title << std::endl;
    std::cout << "https://math.spbu.ru/rus/\n";
    std::cout<< std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::spbu_phil(const MenuItems* current) {
    std::cout << current->title << std::endl;
    std::cout << "http://phil.spbu.ru\n";
    std::cout<< std::endl;
    return current->parent;
}

const Steys::MenuItems* Steys::spbu_go_back(const MenuItems* current) {
    std::cout << current->title << std::endl << std::endl;
    return current->parent->parent;
}
