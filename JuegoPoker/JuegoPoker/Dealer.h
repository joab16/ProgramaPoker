#pragma once
#include "Jugador.h"
#include "Deck.h"

class Dealer
{
private:
	int turnoActual;
	Deck * nuevoJuego;
	list<Carta*> comunitarias; // era list<Deck*>.
	list<Jugador*> participantes;
	Jugador * participante;
	int bote = 0;
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;
	int ronda = 1; //ronda que se va jugando.

public:
	Dealer(int, char *);

	~Dealer();

	void inicializarJuego(int, char *);

	void repartirCartas();

	void solicitarDecisiones();

	char* seleccionarGanador(list<Deck*> manos);

	void repartirDinero();

	void llenarBote(int);

	list<Deck*> revelar();
};