#include "Mediu.h"
#include "Deseu.h"

using namespace std;
using namespace Poluare; 

    Mediu::Mediu(string nume) : numeZona(nume) {}

    void Mediu::adaugaDeseu(Deseu * d) {
        container.adaugaDeseu(d);
    }

    void Mediu::afiseazaStatistici() const {
        cout << "Zona: " << numeZona << "\n";
        container.afiseazaToate();
        cout << "Impact total asupra naturii: " << container.calculeazaImpactTotal() << "\n";
    }

    void Statistici::comparaImpactul(const Mediu& m1, const Mediu& m2) {}
