#include <iostream>
#include "Deseu.h"
#include "Mediu.h"

using namespace std;
using namespace Poluare;

int main() {
    
    Mediu zona1("Parcul National");
    Mediu zona2("Orașul X");

    
    zona1.adaugaDeseu(new DeseuPlastic(50));
    zona1.adaugaDeseu(new DeseuOrganic(30));

    zona2.adaugaDeseu(new DeseuPlastic(80));
    zona2.adaugaDeseu(new DeseuOrganic(20));

    cout << "Statistici pentru prima zonă:\n";
    zona1.afiseazaStatistici();

    cout << "\nStatistici pentru a doua zonă:\n";
    zona2.afiseazaStatistici();

    cout << "\nComparare impact:\n";
    Statistici::comparaImpactul(zona1, zona2);

    DeseuPlastic d1(40);
    DeseuOrganic d2(60);
    cout << "\nImpact total combinat între un deseu de plastic și unul organic: "
        << (d1 + d2) << "\n";

    return 0;
}