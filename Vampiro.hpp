#ifndef VAMPIRO_HPP
#define VAMPIRO_HPP

#include "Criatura.hpp"

class Vampiro : public Criatura
{

private:
	Dado dadoAtaque;
	Dado dadoDefesa;

public:
	Vampiro();
    ~Vampiro();
  int atacar();
  int defender();

};

#endif