#include "MagicalContainer.hpp"
#include <cmath>
using namespace std;

namespace ariel
{
    bool isPrime(int num)
    {
        if (num <= 1)
        {
            return false;
        }
        else if (num == 2)
        {
            return true;
        }
        else
        {
            for (int i = 2; i < sqrt(num); i++)
            {
                if (num % i == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }

    // MagicalContainer::MagicalContainer(/* args */)
    // {
    // }

    // MagicalContainer::~MagicalContainer()
    // {
    // }
    void MagicalContainer::addElement(int element)
    {
        _originalElements.push_back(element);

        if (isPrime(element))
        {
            _primeElements.push_back(element);
        }
        else
        {
            _sortedElements.insert(element);
        }
    }

    void MagicalContainer::removeElement(int element)
    {
    }
    int MagicalContainer::size()
    {
        return 0;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container), iter(container._sortedElements.begin()), position(0)
    {
    }
    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container), iter(other.iter), position(other.position)
    {
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other) { return *this; }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() { return *this; }

    int MagicalContainer::AscendingIterator::operator*() { return 0; }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const { return false; }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const { return false; }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const { return false; }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const { return false; }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
    {
        iter = container._sortedElements.begin();
        position = 0;
        return *this;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
    {
        iter = container._sortedElements.end();
        position = container._sortedElements.size();
        return *this;
    }
    // SideCrossIterator*

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container), iter(container._crossElements.begin()), position(0) {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container), iter(other.iter), position(other.position) {}

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other) { return *this; }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() { return *this; }
    int &MagicalContainer::SideCrossIterator::operator*() { return *iter; }
    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }
    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
    {
        iter = container._crossElements.begin();
        position = 0;
        return *this;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
    {
        iter = container._crossElements.end();
        position = container._crossElements.size();
        return *this;
    }

    // PrimeIterator
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container), iter(container._primeElements.begin()), position(0) {}

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container), iter(other.iter), position(other.position) {}

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other) { return *this; }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() { return *this; }
    int &MagicalContainer::PrimeIterator::operator*() { return *iter; }
    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const { return false; }
    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const { return false; }
    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const { return false; }
    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const { return false; }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
    {
        iter = container._primeElements.begin();
        position = 0;
        return *this;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
    {
        iter = container._primeElements.end();
        position = container._primeElements.size();
        return *this;
    }
}