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

	void llenarMano(Carta *);

	list<Carta*> revelar();

};