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