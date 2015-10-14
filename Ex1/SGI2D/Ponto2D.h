#ifndef PONTO2D_H
#define PONTO2D_H

#include "Matriz.h"

class Ponto2D
{
public:
    Ponto2D();

    float getX() const {
        return m_coordenadas.get(0, 0);
    }

    float getY() const {
        return m_coordenadas.get(0, 1);
    }

    void setX(float valor) {
        return m_coordenadas.set(0, 0, valor);
    }

    void setY(float valor) {
        return m_coordenadas.set(0, 1, valor);
    }

private:
    Matriz m_coordenadas;
};

#endif // PONTO2D_H
