//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_SFML_SHAPE_FACTORY_H
#define POO2_2020_1_PATRONES_SFML_SHAPE_FACTORY_H

#include <SFML/Graphics.hpp>
#include "abstract_factory.h"

class sfml_shape_factory: public abstract_factory_t {
    sf::RenderWindow* window;
public:
    explicit sfml_shape_factory(sf::RenderWindow* window);
    shape_ptr create_circle(float x, float y, float radio) override;
    shape_ptr create_rectangle(float x, float y, float width, float height) override;
};


#endif //POO2_2020_1_PATRONES_SFML_SHAPE_FACTORY_H
