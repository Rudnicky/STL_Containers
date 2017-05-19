#include "sequencecontainers.h"

SequenceContainers::SequenceContainers()
{
    setupContainersWithItems();
}

SequenceContainers::SequenceContainers(unsigned int max)
    : MAX(max)
{
    setupContainersWithItems();
}

SequenceContainers::~SequenceContainers()
{

}

void SequenceContainers::setupContainersWithItems()
{
    fillContainer(m_VectorContainer);
    std::cout << "\t[Vector] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_VectorContainer);

    fillContainer(m_ListContainer);
    std::cout << "\t[List] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_ListContainer);

    fillContainer(m_DequeContainer);
    std::cout << "\t[Deque] Time elapsed: " << m_Duration << std::endl;
    deleteContainerContent(m_DequeContainer);

    fillForwardList();
    deleteContainerContent(m_ForwardListContainer);
}

void SequenceContainers::fillForwardList()
{
    m_Duration = 0;
    std::clock_t start = std::clock();

    for (unsigned int i=0; i<MAX; i++)
    {
        std::shared_ptr<Notebook> notebook(new Notebook("Dell", "Intel", std::rand()%99));
        m_ForwardListContainer.push_front(notebook);
    }

    m_Duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
    std::cout << "\t[ForwardList] Time elapsed: " << m_Duration << std::endl;
}


template <typename T>
void SequenceContainers::fillContainer(T &container)
{
    m_Duration = 0;
    std::clock_t start = std::clock();

    for (unsigned int i=0; i<MAX; i++)
    {
        std::shared_ptr<Notebook> notebook(new Notebook("Dell", "Intel", std::rand()%99));
        container.push_back(notebook);
    }

    m_Duration = (std::clock() - start) / (double) CLOCKS_PER_SEC;
}

template <typename T>
void SequenceContainers::showContainerContent(T &container) const
{
    if (!container.empty())
    {
        for (auto element : container)
            std::cout << *element << std::endl;
    }
    else
    {
        std::cout << "There's no items in Container\n";
    }
}

template <typename T>
void SequenceContainers::deleteContainerContent(T &container)
{
    container.clear();
}
