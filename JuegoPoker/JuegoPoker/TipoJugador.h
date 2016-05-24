#pragma once
#include "Jugador.h"
#include "Deck.h"

class TipoJugador {
private:
	int apuestaMinima;
	int apuestaMaxima;
	list<Deck> mejorJugada;
	float probabilidadGane;

public:
	TipoJugador();

	TipoJugador(int, int, float);

	~TipoJugador();

	float probabilidadMinimaRetiro;

	int tomarDecision(float);
<<<<<<< HEAD
=======

	list<Deck*> revelar();
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0

	float analizarProbabilidad(list<Deck*> &);

	list<Deck*> encontrarMejorJugada(list<Deck*> &, list<Deck*> &);
};
