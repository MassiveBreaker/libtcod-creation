#include "main.hpp"

Engine engine(100, 85);

int main() {
    while (!TCODConsole::isWindowClosed()) {
        engine.update();
        engine.render();
        TCODConsole::flush();
    }
    return 0;
}
