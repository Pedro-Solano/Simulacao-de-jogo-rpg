#include "Dado.hpp"

Dado::Dado()
{
    lados = 0;
}

Dado::Dado(int numLados)
{
	lados = numLados;
}

Dado::~Dado(){}

int Dado::rolar()
{
  int resultado = rand() % lados + 1;
  return resultado;
}
