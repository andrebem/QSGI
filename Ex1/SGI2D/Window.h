#ifndef WINDOW_H
#define WINDOW_H

#include "Ponto2D.h"

class Window
{
public:
    Window(const Ponto2D& min, const Ponto2D& max);

    const Ponto2D& getMin() const
    {
        return m_min;
    }

    const Ponto2D& getMax() const
    {
        return m_max;
    }

    void setMin(const Ponto2D& min)
    {
        m_min = min;
    }

    void setMax(const Ponto2D& max)
    {
        m_max = max;
    }

private:
    Ponto2D m_min;
    Ponto2D m_max;
};

#endif // WINDOW_H
