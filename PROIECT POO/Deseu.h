#ifndef DESEU_H
#define DESEU_H

#include <iostream>
#include <string>

using namespace std;

namespace Poluare {
    class Deseu {
    protected:
        string tip;
        double cantitate; 
    public:
        Deseu(string t = "Necunoscut", double c = 0.0);
        virtual ~Deseu() {}
        virtual void afisare() const = 0; 
        virtual double impactAsupraNaturii() const = 0;
        double getCantitate() const;
    };

    class DeseuPlastic : public Deseu {
    public:
        DeseuPlastic(double c);
        void afisare() const override;
        double impactAsupraNaturii() const override;
    };

    class DeseuOrganic : public Deseu {
    public:
        DeseuOrganic(double c);
        void afisare() const override;
        double impactAsupraNaturii() const override;
    };

    double operator+(const Deseu& d1, const Deseu& d2);

} 
#endif

