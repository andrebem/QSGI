#ifndef LINHA2D_H
#define LINHA2D_H

#include "Desenhavel.h"
#include "Ponto2D.h"
#include "Window.h"
#include "Viewport.h"

class Linha2D : public Desenhavel
{
public:
    Linha2D(Ponto2D p1, Ponto2D p2);

     virtual void desenhar(Window& w, Viewport& vp);

private:
    Ponto2D m_p1;
    Ponto2D m_p2;
};

#endif // LINHA2D_H
