#pragma once

#include "stdafx.h"
#include "TipoJugador.h"
#include "Carta.h"

using namespace std;

class TipoJugador;

class Jugador
{
private:

	char* nombre;

	int dineroRestante;

	list<Carta*> mano;

	bool decision;

	TipoJugador * tipo;



public:

	Jugador(char*, int);

	~Jugador();

	bool tomarDecision(float);

<<<<<<< HEAD
	list<Carta> revelar();

};
=======
	void llenarMano(Carta *);

	list<Carta*> revelar();

};
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
