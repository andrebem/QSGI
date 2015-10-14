#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "Ponto2D.h"
#include "Window.h"

class Viewport
{
public:
    Viewport();

    Ponto2D getTransformada(const Ponto2D& p, Window& w);

    virtual void desenharLinha(const Ponto2D& p1, const Ponto2D& p2);

    const Ponto2D& getMin() const
    {
        return m_min;
    }

    const Ponto2D& getMax() const
    {
        return m_max;
    }

protected:
    Ponto2D m_min;
    Ponto2D m_max;
};

#endif // VIEWPORT_H
