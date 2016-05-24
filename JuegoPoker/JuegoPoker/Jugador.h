#pragma once

#include "stdafx.h"
#include "TipoJugador.h"
#include "Carta.h"

using namespace std;

class TipoJugador;

class Jugador
{
private:

<<<<<<< HEAD


	int dineroRestante;

	int decision;
=======
	char* nombre;

	int dineroRestante;

	list<Carta> mano;

	bool decision;
>>>>>>> master

	TipoJugador * tipo;

public:

	Jugador(char*, int);

	~Jugador();

	int tomarDecision(float);

	void añadirAMano(Carta *);

<<<<<<< HEAD
	int apuesta;

	list<Carta*> mano;

	char* nombre;
};
=======
	list<Carta> revelar();

};
>>>>>>> master
