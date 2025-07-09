#ifndef FIGURE_H
#define FIGURE_H


class Figure {
protected:
    int _numSides;
    std::string _name;
    Figure(int sides, const std::string& name);

public:
    int getNumSides() const;
    std::string getName() const;
    virtual void printInfo() const = 0;
    virtual ~Figure() = default;
};

#endif