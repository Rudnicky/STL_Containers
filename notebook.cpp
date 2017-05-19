#include "notebook.h"

Notebook::Notebook()
{

}

Notebook::Notebook(std::string company, std::string processor, double price)
    : m_Company(company),
      m_Processor(processor),
      m_Price(price)
{

}

std::ostream& operator<<(std::ostream& output, const Notebook& notebook)
{
    output << notebook.m_Company << ", "
           << notebook.m_Processor << ", "
           << notebook.m_Price;
    return output;
}

Notebook::~Notebook()
{

}

