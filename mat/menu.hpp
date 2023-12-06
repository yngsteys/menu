#pragma once

namespace Steys {
    struct MenuItems {
        const char* const title;
        void (*func)();
    };
}