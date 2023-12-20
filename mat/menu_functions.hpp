#pragma once

#include "menu.hpp"

 namespace Steys {
     const MenuItems* show_menu(const MenuItems* current);

     const MenuItems* exit(const MenuItems* current);

     const MenuItems* university_itmo(const MenuItems* current);
     const MenuItems* university_spbstu(const MenuItems* current);
     const MenuItems* university_etu(const MenuItems* current);
     const MenuItems* university_go_back(const MenuItems* current);

     const MenuItems* spbu_pm_pu(const MenuItems* current);
     const MenuItems* spbu_mm(const MenuItems* current);
     const MenuItems* spbu_phil(const MenuItems* current);
     const MenuItems* spbu_go_back(const MenuItems* current);
}
