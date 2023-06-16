#include "developer.hpp"
#include <iostream>
#include <string>


    // Implement constructor of base class
    Developer::Developer(const std::string& name, const std::string& alias) : dev_name(name), dev_alias(alias) {}

    // Implement drink coffee method
    auto Developer::drink_coffee()->void {
        std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
    }

    // Implement Getter for name
    auto Developer::get_dev_name() const -> const std::string&
    {
        return dev_name;
    }

    // Implement Getter for alias
    auto Developer::get_dev_alias() const -> const std::string& {
        return dev_alias;
    }

    // Implement Stream operator to print Developer objects
    auto operator<<(std::ostream& oss, const Developer& dev) -> const std::ostream&
    {
        return oss << "Name: " << dev.Developer::get_dev_name() << std::endl << "Alias: " << dev.Developer::get_dev_alias();

    }

    // Implement Constructor of Senior Developer
    SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias) {}

    // Implement solve problem method
    auto SeniorDeveloper::solve_problem() -> void
    {
        std::cout << "Solving a problem: " << std::endl;
        std::cout << *this;std::cout << std::endl;
        std::cout << "That was easy!" << std::endl;
        Developer::drink_coffee();
    }

    // Implement Constructor of Junior Developer
    JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias) {}

    // Implement solve Problem method
    auto JuniorDeveloper::solve_problem() -> void 
{
    
    std::cout << "Solving a problem: " << std::endl;
    std::cout << *this;std::cout << std::endl;
    std::cout << "Puh that was though" << std::endl; 
    Developer::drink_coffee();
}