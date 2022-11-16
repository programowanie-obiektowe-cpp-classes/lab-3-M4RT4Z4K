#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
int oddano = 0;
    int sum      = 0;
    int zaglowce = 0;
    if (towar > 0) {
        while (oddano < towar) {
            //utworz statek
            Stocznia stocznia{};
            Statek*  s = stocznia();
            //wykonaj transport

            sum= s->transportuj();
            oddano += sum;
            //zanotuj, czy zaglowka
            if (dynamic_cast<Zaglowiec*>(s) != nullptr) {
                zaglowce += 1;
            }
            //spal na popiol
            delete s;
        }
    }
    return zaglowce;
}
