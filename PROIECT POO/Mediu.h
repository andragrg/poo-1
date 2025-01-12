#ifndef MEDIU_H
#define MEDIU_H

#include "Container.h"

namespace Poluare {
    class Mediu {
        Container<Deseu> container;
        string numeZona;
    public:
        Mediu(string nume);
        void adaugaDeseu(Deseu* d);
        void afiseazaStatistici() const;

        friend class Statistici;
    };

    class Statistici {
    public:
        static void comparaImpactul(const Mediu& m1, const Mediu& m2);
    };

}

#endif
