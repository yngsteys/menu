#pragma once

namespace Steys {
    struct MenuItems {
        const char* const title;
        const MenuItems* (*func)(const MenuItems* current);

        const MenuItems* parent;

        const MenuItems* const *child;
        const int child_count;
    };
}
