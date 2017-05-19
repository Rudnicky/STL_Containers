#ifndef ASSOCIATIVECONTAINERS_H
#define ASSOCIATIVECONTAINERS_H
#include "notebook.h"
#include <iostream>
#include <ctime>
#include <memory>
#include <set>
#include <map>

class AssociativeContainers
{
private:
    double m_Duration;
    unsigned int MAX = 10000000; // default value
    std::set<std::shared_ptr<Notebook>> m_SetContainer;
    std::multiset<std::shared_ptr<Notebook>> m_MultisetContainer;
    std::map<int, std::shared_ptr<Notebook>> m_MapContainer;
    std::multimap<int, std::shared_ptr<Notebook>> m_MultimapContainer;
    void setupContainersWithItems();

    template <typename T>
    void fillContainer(T &container);

    template <typename T>
    void fillDictionaryContainer(T &container);

    template <typename T>
    void deleteContainerContent(T &container);

public:
    AssociativeContainers();
    AssociativeContainers(unsigned int max);
};

#endif // ASSOCIATIVECONTAINERS_H
