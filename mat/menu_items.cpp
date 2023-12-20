#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace {
    const Steys::MenuItems* const main_children[] = {
            &Steys::EXIT,
            &Steys::UNIVERSITY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

namespace {
    const Steys::MenuItems* const university_children[] = {
            &Steys:: UNIVERSITY_GO_BACK,
            &Steys:: UNIVERSITY_SPBU,
            &Steys:: UNIVERSITY_ITMO,
            &Steys:: UNIVERSITY_SPBSTU,
            &Steys:: UNIVERSITY_ETU,
    };
    const int university_size = sizeof(university_children) / sizeof(university_children[0]);
}

namespace {
    const Steys::MenuItems* const spbu_children[] = {
            &Steys:: SPBU_GO_BACK,
            &Steys:: SPBU_PM_PU,
            &Steys:: SPBU_MM,
            &Steys:: SPBU_PHIL,
    };
    const int spbu_size = sizeof(spbu_children) / sizeof(spbu_children[0]);
}

const Steys::MenuItems Steys::MAIN = {
        nullptr,
        Steys::show_menu,
        nullptr,
        main_children,
        main_size
};

const Steys::MenuItems Steys::EXIT = {
        "0 - Я уже студент",
        Steys::exit,
        &Steys::MAIN
};
const Steys::MenuItems Steys::UNIVERSITY = {
        "1 - Посмотреть университеты Санкт-Петербурга",
        Steys::show_menu,
        &Steys::MAIN,
        university_children,
        university_size
};

const Steys::MenuItems Steys::UNIVERSITY_GO_BACK = {
        "0 - Выйти в главное меню",
        Steys::university_go_back,
        &Steys::UNIVERSITY,
};
const Steys::MenuItems Steys::UNIVERSITY_ITMO = {
        "2 - ИТМО",
        Steys::university_itmo,
        &Steys::UNIVERSITY
};
const Steys::MenuItems Steys::UNIVERSITY_SPBSTU = {
        "3 - Политех",
        Steys::university_spbstu,
        &Steys::UNIVERSITY
};
const Steys::MenuItems Steys::UNIVERSITY_ETU = {
        "4 - ЛЭТИ",
        Steys::university_etu,
        &Steys::UNIVERSITY
};
const Steys::MenuItems Steys::UNIVERSITY_SPBU = {
        "1 - СПбГУ",
        Steys::show_menu,
        &Steys::UNIVERSITY,
        spbu_children,
        spbu_size
};

const Steys::MenuItems Steys::SPBU_GO_BACK = {
        "0 - Выйти в предыдущее меню",
        Steys::spbu_go_back,
        &Steys::UNIVERSITY_SPBU
};
const Steys::MenuItems Steys::SPBU_PM_PU = {
        "1 - Факультет ПМ-ПУ",
        Steys::spbu_pm_pu,
        &Steys::UNIVERSITY_SPBU
};
const Steys::MenuItems Steys::SPBU_MM = {
        "2 - Факультет МатМех",
        Steys::spbu_mm,
        &Steys::UNIVERSITY_SPBU
};
const Steys::MenuItems Steys::SPBU_PHIL = {
        "3 - Лингвистический факультет",
        Steys::spbu_phil,
        &Steys::UNIVERSITY_SPBU
};
