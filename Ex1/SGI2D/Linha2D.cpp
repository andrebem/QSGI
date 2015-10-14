#include "Linha2D.h"

Linha2D::Linha2D(Ponto2D p1, Ponto2D p2) : m_p1(p1), m_p2(p2)
{
}

void Linha2D::desenhar(Window& w, Viewport& vp)
{
    Ponto2D newP1 = vp.getTransformada(this->m_p1, w);
    Ponto2D newP2 = vp.getTransformada(this->m_p2, w);

    vp.desenharLinha(newP1, newP2);
}
