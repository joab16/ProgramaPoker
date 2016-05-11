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

	list<Carta> mano;

	bool decision;

	TipoJugador * tipo;

public:

	Jugador(char*, int, Carta, Carta);

	~Jugador();

	bool tomarDecision(float);

	list<Carta> revelar();

};