#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <iostream>
#include <string>

// Base class for developers
class Developer {

public:
    std::string dev_name;  // Member variable for name
    std::string dev_alias; // Member variable for alias

    // Constructor to initialize name and alias
    Developer(const std::string& name, const std::string& alias);

    // Static method to simulate drinking coffee
    static auto drink_coffee()->void;

    // Getter for name
    auto get_dev_name() const -> const std::string&;

    // Getter for alias
    auto get_dev_alias() const -> const std::string&;

    // Pure virtual method to solve a problem
    virtual void solve_problem() = 0;


};

//Stream operator to print Developer objects directly with std::cout
auto operator<<(std::ostream& oss, const Developer& dev) -> const std::ostream&;

// Derived class for senior developers
class SeniorDeveloper : public Developer {
    public:
        // Constructor to initialize inherited member variables
        SeniorDeveloper(const std::string& name, const std::string& alias);
        // Override solveProblem method to print a message and drink coffee
        auto solve_problem() -> void;
};

// Derived class for junior developers
class JuniorDeveloper : public Developer{
    public:
    // Constructor to initialize inherited member variables
    JuniorDeveloper(const std::string& name, const std::string& alias);
    
    // Override solveProblem method to print a message and drink coffee
    auto solve_problem() -> void;
};

#endif