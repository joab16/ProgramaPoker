#pragma once
#include "Jugador.h"
#include "Deck.h"

class TipoJugador
{
private:
	int apuestaMinima;
	int apuestaMaxima;
	float probabilidadMinimaRetiro;
	//Deck
	list<Deck*> mejorJugada;
	float probabilidadGane;

public:
	TipoJugador(int, int, float);

	~TipoJugador();

	list<Deck*> revelar();

	float analizarProbabilidad(list<Deck*> &);

	list<Deck*> encontrarMejorJugada(list<Deck*> &, list<Deck*> &);
};
