//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_ABSTRACT_SHAPE_H
#define POO2_2020_1_PATRONES_ABSTRACT_SHAPE_H

#include <memory>

class shape_t {
public:
    virtual void draw() const = 0;
};

using shape_ptr = std::shared_ptr<shape_t>;


#endif //POO2_2020_1_PATRONES_ABSTRACT_SHAPE_H

