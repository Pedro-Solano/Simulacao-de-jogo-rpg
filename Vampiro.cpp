#include "Vampiro.hpp"

Vampiro::Vampiro()
{
    
	dadoAtaque = Dado(12);
	dadoDefesa = Dado(6);

	nome = "Vampiro";
	armadura = 1;
	forca = 18;
}

int Vampiro::atacar()
{
	int atacarPts = 0;

	atacarPts += dadoAtaque.rolar();

	return atacarPts;
}

int Vampiro::defender()
{
	int defesaPts = 0;

	int defesaResultado = dadoDefesa.rolar();
	defesaPts += defesaResultado;

	if (defesaResultado % 2 == 0)
	{
		defesaPts = 2000;
	}
	
	return defesaPts;

}

Vampiro::~Vampiro() {}