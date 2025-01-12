#ifndef CONTAINER_H
#define CONTAINER_H

#include <vector>
#include "Deseu.h"

using namespace std;

namespace Poluare {
    template <typename T>
    class Container {
        vector<T*> deseuri;
    public:
        ~Container();
        void adaugaDeseu(T* d);
        void afiseazaToate() const;
        double calculeazaImpactTotal() const;
    };

    template <typename T>
    Container<T>::~Container() {
        for (auto d : deseuri) delete d;
    }

    template <typename T>
    void Container<T>::adaugaDeseu(T* d) {
        deseuri.push_back(d);
    }

    template <typename T>
    void Container<T>::afiseazaToate() const {
        for (const auto& d : deseuri) d->afisare();
    }

    template <typename T>
    double Container<T>::calculeazaImpactTotal() const {
        double total = 0;
        for (const auto& d : deseuri) total += d->impactAsupraNaturii();
        return total;
    }
}

#endif
