//
// Created by rudri on 7/15/2020.
//

#include "sfml_shape_factory.h"
#include "sfml_circle.h"
#include "sfml_rectangle.h"

sfml_shape_factory::sfml_shape_factory(sf::RenderWindow *window):
    window{window}{}

shape_ptr sfml_shape_factory::create_circle(float x, float y, float radio) {
    return std::make_shared<circle_t>(x, y, radio, window);
}

shape_ptr sfml_shape_factory::create_rectangle(float x, float y, float width, float height) {
    return std::make_shared<rectangle_t>(x, y, width, height, window);
}
