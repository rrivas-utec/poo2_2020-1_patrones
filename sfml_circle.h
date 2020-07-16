//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_SFML_CIRCLE_H
#define POO2_2020_1_PATRONES_SFML_CIRCLE_H

#include "abstract_shape.h"
#include "SFML/Graphics.hpp"

class circle_t: public shape_t {
    sf::RenderWindow* window;
    float x;
    float y;
    float diameter;
public:
    circle_t(float x, float y, float diameter, sf::RenderWindow* window);
    void draw() const override;
};


#endif //POO2_2020_1_PATRONES_SFML_CIRCLE_H
