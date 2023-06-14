#include <iostream>
#include <string>


class Developer {

public:
    std::string dev_name;  
    std::string dev_alias; 

    Developer(const std::string& name, const std::string& alias);

    static auto drink_coffee()->void;

   
    auto get_dev_name() const -> const std::string&;

    
    auto get_dev_alias() const -> const std::string&;

    
    virtual void solve_problem() const = 0;


};
