//
// Created by rudri on 7/15/2020.
//

#ifndef POO2_2020_1_PATRONES_ABSTRACT_CONTROLLER_H
#define POO2_2020_1_PATRONES_ABSTRACT_CONTROLLER_H

#include <memory>

class abstract_controller_t {
public:
    virtual void run() = 0;
};

using abstract_controller_ptr = std::shared_ptr<abstract_controller_t>;


#endif //POO2_2020_1_PATRONES_ABSTRACT_CONTROLLER_H
