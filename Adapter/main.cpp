#include <iostream>
#include <cmath>
using namespace std;

// Protótipo da classe RoundPeg
class RoundPeg;

// Classe RoundHole (Buraco Redondo)
class RoundHole {
private:
    double radius;
public:
    RoundHole(double radius) : radius(radius) {}
    double getRadius() const {
        return radius;
    }
    bool fits(const RoundPeg& peg) const;
};

// Classe RoundPeg (Pino Redondo)
class RoundPeg {
private:
    double radius;
public:
    RoundPeg(double radius) : radius(radius) {}
    double getRadius() const {
        return radius;
    }
};

// Classe SquarePeg (Pino Quadrado)
class SquarePeg {
private:
    double width;
public:
    SquarePeg(double width) : width(width) {}
    double getWidth() const {
        return width;
    }
};

// Uma classe adaptadora permite que você encaixe pinos
// quadrados em buracos redondos. Ela estende a classe RoundPeg
// para permitir que objetos do adaptador ajam como pinos
// redondos.
class SquarePegAdapter : public RoundPeg {
private:
    SquarePeg peg;
public:
// O adaptador finge que é um pino redondo com um raio
// que encaixaria o pino quadrado que o adaptador está
// envolvendo.
    SquarePegAdapter(const SquarePeg& peg) : peg(peg), RoundPeg(peg.getWidth() * sqrt(2) / 2) {}
};

// Implementação do método fits da classe RoundHole
bool RoundHole::fits(const RoundPeg& peg) const {
    return getRadius() >= peg.getRadius();
}

int main() {
    RoundHole hole(5);
    RoundPeg rpeg(5);

    cout << boolalpha;

    // Verificando se o pino redondo cabe no buraco redondo
    cout << "O pino redondo cabe no buraco redondo? " << hole.fits(rpeg) << endl;

    // Criando pinos quadrados com larguras de 5 e 10 unidades
    SquarePeg small_sqpeg(5);
    SquarePeg large_sqpeg(10);

    // Criando adaptadores para os pinos quadrados
    SquarePegAdapter small_sqpeg_adapter(small_sqpeg);
    SquarePegAdapter large_sqpeg_adapter(large_sqpeg);

    cout << "O adaptador para o pino quadrado pequeno cabe no buraco redondo? " << hole.fits(static_cast<RoundPeg>(small_sqpeg_adapter)) << endl;
    cout << "O adaptador para o pino quadrado grande cabe no buraco redondo? " << hole.fits(static_cast<RoundPeg>(large_sqpeg_adapter)) << endl;

    return 0;
}