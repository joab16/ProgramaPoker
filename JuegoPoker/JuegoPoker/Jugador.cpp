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
<<<<<<< HEAD
	
=======
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
}

Jugador::~Jugador()
{
<<<<<<< HEAD
=======
	delete tipo;
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
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

list<Carta*> Jugador::revelar()
{
	return mano;
}