#include "stdafx.h"
#include "Jugador.h"

Jugador::Jugador(char * nombre, int dinero)
{
	this->nombre = nombre;
	this->dineroRestante = dinero;
	this->tipo = new TipoJugador();
	
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