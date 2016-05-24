#pragma once

#include "Jugadas.h"
#include "Jugador.h"
#include "Deck.h"

class Dealer
{
	friend class PruebaDealer;
private:
	int turnoActual;
<<<<<<< HEAD
	Deck * deck;
	list<Carta*> comunitarias; // era list<Deck*>.
	list<Jugador*> jugadores;
	int bote = 0;
=======
	list<Carta*> comunitarias;
	int bote;
>>>>>>> master
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;
<<<<<<< HEAD
	int ronda = 1; //ronda que se va jugando.
	int numeroJugadores;

public:

	Dealer();
	Dealer(int, int);

=======
	int numeroJugadores;
	Deck* deck;
	list<Jugador*> jugadores;

public:
	Dealer(int ciegaPequenna, int numeroJugadores);
>>>>>>> master
	~Dealer();

	void inicializarJuego(int, int);

	void repartirCartas(int turno);

	bool solicitarDecisiones(Jugador * it);

	char* seleccionarGanador();

	void repartirDinero();

<<<<<<< HEAD
	void llenarBote(int);

	list<Deck*> revelar();
=======
	
>>>>>>> master
};