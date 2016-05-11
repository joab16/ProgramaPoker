#include "stdafx.h"
#include "Jugador.h"

Jugador::Jugador(char * nombre, int dinero, Carta carta1, Carta carta2)
{
	this->nombre = nombre;
	this->dineroRestante = dinero;
	this->tipo = new TipoJugador();
	mano.push_back(carta1);
	mano.push_back(carta1);
}

Jugador::~Jugador()
{
}

bool Jugador::tomarDecision(float calificacion)
{
	bool decision;
	if (calificacion <= tipo->probabilidadMinimaRetiro)
		decision = false;
	else
		decision = true;
	return decision;
}

list<Carta> Jugador::revelar()
{
	return mano;
}