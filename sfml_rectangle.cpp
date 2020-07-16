//
// Created by rudri on 7/15/2020.
//

#include "sfml_rectangle.h"

rectangle_t::rectangle_t(float x, float y, float width, float height, sf::RenderWindow *window):
        x{x}, y{y}, width{width}, height{height}, window{window} { }

void rectangle_t::draw() const {
    sf::RectangleShape r;
    r.setSize({width, height});
    r.setPosition(x, y);
    window->draw(r);
}
