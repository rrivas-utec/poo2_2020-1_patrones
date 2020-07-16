#include <iostream>
#include <SFML/Graphics.hpp>

#include "abstract_controller.h"
#include "sfml_controller.h"

int main()
{
    abstract_controller_ptr controller = std::make_shared<sfml_controller>(600, 400, "UTEC");
    controller->run();
    return 0;
}