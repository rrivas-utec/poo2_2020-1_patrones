//
// Created by rudri on 7/15/2020.
//

#include "sfml_controller.h"
#include "sfml_shape_factory.h"

sfml_controller::sfml_controller(float width, float height,
        const std::string &title):
        window{sf::VideoMode(static_cast<int>(width), static_cast<int>(height)), title}{

    factory = std::make_shared<sfml_shape_factory>(&window);
    circle = factory->create_circle(10, 10, 60);
    rectangle = factory->create_rectangle(100, 100, 50, 50);
}

void sfml_controller::run() {
    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        circle->draw();
        rectangle->draw();
        window.display();
    }

}
