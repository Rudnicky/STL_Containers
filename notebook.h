#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <iostream>

class Notebook
{
private:
    std::string m_Company;
    std::string m_Processor;
    double m_Price;
public:
    Notebook();
    Notebook(std::string company, std::string processor, double price);
    friend std::ostream& operator<<(std::ostream& output, const Notebook& notebook);
    ~Notebook();
};

#endif // NOTEBOOK_H
