#include "associativecontainers.h"

AssociativeContainers::AssociativeContainers()
{

}

AssociativeContainers::AssociativeContainers(unsigned int max)
    : MAX(max)
{
    setupContainersWithItems();
}

void AssociativeContainers::setupContainersWithItems()
{
    fillContainer(m_SetContainer);
    std::cout << "\t[Set] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_SetContainer);

    fillContainer(m_MultisetContainer);
    std::cout << "\t[Multiset] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_MultisetContainer);

    fillDictionaryContainer(m_MapContainer);
    std::cout << "\t[Map] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_MapContainer);

    fillDictionaryContainer(m_MultimapContainer);
    std::cout << "\t[Multimap] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_MultimapContainer);
}

template <typename T>
void AssociativeContainers::fillContainer(T &container)
{
    m_Duration = 0;
    std::clock_t start = std::clock();

    for (unsigned int i=0; i<MAX; i++)
    {
        std::shared_ptr<Notebook> notebook(new Notebook("Dell", "Intel", std::rand()%99));
        container.insert(notebook);
    }

    m_Duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
}

template <typename T>
void AssociativeContainers::fillDictionaryContainer(T &container)
{
    m_Duration = 0;
    std::clock_t start = std::clock();

    for (unsigned int i=0; i<MAX; i++)
    {
        std::shared_ptr<Notebook> notebook(new Notebook("Dell", "Intel", std::rand()%99));
        container.insert(std::make_pair(i, notebook));
    }

    m_Duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
}

template <typename T>
void AssociativeContainers::deleteContainerContent(T &container)
{
    container.clear();
}
