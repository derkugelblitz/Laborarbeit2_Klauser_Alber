#include "developer.hpp"
#include <iostream>
#include <memory>
#include <vector>


auto main()->int {

    std::vector<std::shared_ptr<Developer>> developers;

    
    developers.push_back(std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman"));
    developers.push_back(std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman"));


    for (auto &it : developers)
     {
        it->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}