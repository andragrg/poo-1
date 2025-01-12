#include "Deseu.h"

namespace Poluare {
    Deseu::Deseu(string t, double c) : tip(t), cantitate(c) {}

    double Deseu::getCantitate() const {
        return cantitate;
    }

    DeseuPlastic::DeseuPlastic(double c) : Deseu("Plastic", c) {}

    void DeseuPlastic::afisare() const {
        cout << "[Plastic] Cantitate: " << cantitate << " kg, Impact: " << impactAsupraNaturii() << "\n";
    }

    double DeseuPlastic::impactAsupraNaturii() const {
        return cantitate * 10;
    }

    DeseuOrganic::DeseuOrganic(double c) : Deseu("Organic", c) {}

    void DeseuOrganic::afisare() const {
        cout << "[Organic] Cantitate: " << cantitate << " kg, Impact: " << impactAsupraNaturii() << "\n";
    }

    double DeseuOrganic::impactAsupraNaturii() const {
        return cantitate * 2;
    }

    double operator+(const Deseu& d1, const Deseu& d2) {
        return d1.impactAsupraNaturii() + d2.impactAsupraNaturii();
    }
}