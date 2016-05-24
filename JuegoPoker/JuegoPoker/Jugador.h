#pragma once

#include "stdafx.h"
#include "TipoJugador.h"
#include "Carta.h"

using namespace std;

class TipoJugador;

class Jugador
{
private:



	int dineroRestante;

	int decision;

	TipoJugador * tipo;

public:

	Jugador(char*, int);

	~Jugador();

	int tomarDecision(float);

	void añadirAMano(Carta *);

	int apuesta;

	list<Carta*> mano;

	char* nombre;
};