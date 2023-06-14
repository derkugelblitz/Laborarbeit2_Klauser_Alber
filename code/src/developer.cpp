#include "developer.hpp"
#include <iostream>
#include <string>


    
    Developer::Developer(const std::string& name, const std::string& alias) : dev_name(name), dev_alias(alias) {}

    
    auto Developer::drink_coffee()->void {
        std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
    }

    
    auto Developer::get_dev_name() const -> const std::string&
    {
        return dev_name;
    }

    
    auto Developer::get_dev_alias() const -> const std::string& {
        return dev_alias;
    }

    auto operator<<(std::ostream& oss, const Developer& dev) -> const std__ostream&
    {
        return oss << "Name: " << dev.Developer::get_dev_name() << std::endl << "Alias: " << dev.Developer::get_dev_alias();

    }

    SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias) {}

    auto SeniorDeveloper::solve_problem() -> void
    {
        std::cout << "Solving a problem: " << std::endl;
        std::cout << *this;std::cout << std::endl;
        std::cout << "That was easy!" << std::endl;
        Developer::drink_coffee();
    }

    JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) : Developer(name, alias) {}

    auto JuniorDeveloper::solve_problem() -> void 
{
    
    std::cout << "Solving a problem: " << std::endl;
    std::cout << *this;std::cout << std::endl;
    std::cout << "Puh that was though" << std::endl; 
    Developer::drink_coffee();
}