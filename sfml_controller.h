//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_SFML_CONTROLLER_H
#define POO2_2020_1_PATRONES_SFML_CONTROLLER_H

#include "abstract_factory.h"
#include "abstract_shape.h"
#include "abstract_controller.h"
#include "sfml_rectangle.h"
#include "sfml_circle.h"
#include <memory>

using abstract_factory_ptr = std::shared_ptr<abstract_factory_t>;

class sfml_controller: public abstract_controller_t{
    abstract_factory_ptr factory;
    shape_ptr circle;
    shape_ptr rectangle;
    sf::RenderWindow window;
public:
    sfml_controller(float width, float height, const std::string& title);
    void run() override;
};


#endif //POO2_2020_1_PATRONES_SFML_CONTROLLER_H
