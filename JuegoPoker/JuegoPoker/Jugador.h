#pragma once
#include "TipoJugador.h"
#include "Deck.h"

class Jugador
{
private:
	char* nombre;
	int dineroRestante;
	list<Deck*> mano//list mano;
	//int apuesta;
	bool decision;
public:
	Jugador(char*, int);

	~Jugador();

	bool tomarDecision(float);

	list<Deck*> revelar();
};
