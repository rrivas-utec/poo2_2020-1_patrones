//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_ABSTRACT_FACTORY_H
#define POO2_2020_1_PATRONES_ABSTRACT_FACTORY_H

#include <memory>

class shape_t;

using shape_ptr = std::shared_ptr<shape_t>;

class abstract_factory_t {
public:
    virtual shape_ptr create_circle(float x, float y, float radio) = 0;
    virtual shape_ptr create_rectangle(float x, float y, float width, float height) = 0;
};

using abstract_factory_ptr = std::shared_ptr<abstract_factory_t>;



#endif //POO2_2020_1_PATRONES_ABSTRACT_FACTORY_H
