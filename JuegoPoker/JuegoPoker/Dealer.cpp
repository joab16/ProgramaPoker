#include "stdafx.h"
#include "Jugador.h"

void Jugador::llenarMano(Carta * carta)
{
	mano.push_front(carta);
}

Jugador::Jugador(char * nombre, int dinero)
{
	this->nombre = nombre;
	this->dineroRestante = dinero;
	this->tipo = new TipoJugador();
}

Jugador::~Jugador()
{
	delete tipo;
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