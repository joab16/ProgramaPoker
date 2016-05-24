#pragma once
#include "Jugador.h"
#include "Deck.h"

class Dealer
{
private:
	int turnoActual;
	list<Carta*> comunitarias;
	int bote;
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;
	int numeroJugadores;
	Deck* deck;
	list<Jugador*> jugadores;

public:
	Dealer(int ciegaPequenna, int numeroJugadores);
	~Dealer();

	void inicializarJuego();

	void repartirCartas(int turno);

	void solicitarDecisiones();

	char* seleccionarGanador();

	void repartirDinero();

	
};