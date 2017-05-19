#ifndef SEQUENCECONTAINERS_H
#define SEQUENCECONTAINERS_H
#include "notebook.h"
#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <memory>
#include <ctime>

class SequenceContainers
{
private:
    double m_Duration;
    unsigned int MAX = 10000000; // default value
    std::vector<std::shared_ptr<Notebook>> m_VectorContainer;
    std::list<std::shared_ptr<Notebook>> m_ListContainer;
    std::deque<std::shared_ptr<Notebook>> m_DequeContainer;
    std::forward_list<std::shared_ptr<Notebook>> m_ForwardListContainer;

    void setupContainersWithItems();
    void fillForwardList();

    template <typename T>
    void fillContainer(T &container);

    template <typename T>
    void showContainerContent(T &container) const;

    template <typename T>
    void deleteContainerContent(T &container);

public:
    SequenceContainers();
    SequenceContainers(unsigned int max);
    ~SequenceContainers();
};

#endif // SEQUENCECONTAINERS_H
