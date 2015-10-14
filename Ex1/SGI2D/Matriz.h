#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz
{
public:
    Matriz(int numLinhas, int numColunas);
    ~Matriz();

    void imprimir() const;

    void set(int i, int j, float valor)
    {
        m_elementos[i][j] = valor;
    }

    float& get(int i, int j)
    {
        return m_elementos[i][j];
    }

    const float& get(int i, int j) const
    {
        return m_elementos[i][j];
    }

    Matriz somar(const Matriz& outraMatriz) const;

    Matriz multiplicar(const Matriz& outraMatriz) const;

    Matriz operator+(const Matriz& outraMatriz) const
    {
        return this->somar(outraMatriz);
    }

    Matriz operator*(const Matriz& outraMatriz)
    {
        return this->multiplicar(outraMatriz);
    }

    int getLinhas() const
    {
        return m_numLinhas;
    }


    int getColunas() const
    {
        return m_numColunas;
    }

private:
    int m_numLinhas, m_numColunas;
    float** m_elementos;
};

#endif // MATRIZ_H
