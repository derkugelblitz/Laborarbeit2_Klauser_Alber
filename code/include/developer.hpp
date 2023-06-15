#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

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

    
    virtual void solve_problem() = 0;


};

auto operator<<(std::ostream& oss, const Developer& dev) -> const std::ostream&;

class SeniorDeveloper : public Developer {
    public:
        
        SeniorDeveloper(const std::string& name, const std::string& alias);

        auto solve_problem() -> void;
};

class JuniorDeveloper : public Developer{
    public:

    JuniorDeveloper(const std::string& name, const std::string& alias);

    auto solve_problem() -> void;
};

#endif