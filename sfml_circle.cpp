//
// Created by rudri on 7/15/2020.
//

#include "sfml_circle.h"

circle_t::circle_t(float x, float y, float diameter, sf::RenderWindow *window) :
    x{x}, y{y}, diameter{diameter}, window{window} { }

void circle_t::draw() const {
    sf::CircleShape c;
    c.setRadius(diameter/2);
    c.setPosition(x, y);
    window->draw(c);
}
