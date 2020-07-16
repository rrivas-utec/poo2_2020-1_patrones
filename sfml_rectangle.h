//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_SFML_RECTANGLE_H
#define POO2_2020_1_PATRONES_SFML_RECTANGLE_H

#include "abstract_shape.h"
#include "SFML/Graphics.hpp"

class rectangle_t: public shape_t {
    float x;
    float y;
    float width;
    float height;
    sf::RenderWindow* window;
public:
    rectangle_t(float x, float y, float width, float height, sf::RenderWindow* window);
    void draw() const override;
};


#endif //POO2_2020_1_PATRONES_SFML_RECTANGLE_H
