#ifndef OBJETOGRAFICO_H
#define OBJETOGRAFICO_H

#include "Window.h"
#include "Viewport.h"

class Desenhavel
{
public:
    Desenhavel();

    virtual void desenhar(Window& w, Viewport& vp) = 0;
};

#endif // OBJETOGRAFICO_H
