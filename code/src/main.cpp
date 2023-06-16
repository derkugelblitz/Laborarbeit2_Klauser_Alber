#include "developer.hpp"
#include <iostream>
#include <memory>
#include <vector>


auto main()->int {

    // Create a vector of shared pointer to Developer objects
    std::vector<std::shared_ptr<Developer>> developers;

    // Create developers and add to vector
    developers.push_back(std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman"));
    developers.push_back(std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman"));

    // Use a loop and an iterator to go over the vector and let the developers solve a problem
    for (auto &it : developers)
     {
        it->solve_problem();
        std::cout << std::endl;
    }

    return 0;
}