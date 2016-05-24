#pragma once
#include "Jugador.h"
#include "Deck.h"

class Dealer
{
private:
	int turnoActual;
<<<<<<< HEAD
	list<Carta*> comunitarias;
	int bote;
=======
	Deck * nuevoJuego;
	list<Carta*> comunitarias; // era list<Deck*>.
	list<Jugador*> participantes;
	Jugador * participante;
	int bote = 0;
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;
<<<<<<< HEAD
	int numeroJugadores;
	Deck* deck;
	list<Jugador*> jugadores;

public:
	Dealer(int ciegaPequenna, int numeroJugadores);
	~Dealer();

	void inicializarJuego();
=======
	int ronda = 1; //ronda que se va jugando.

public:
	Dealer(int, char *);

	~Dealer();

	void inicializarJuego(int, char *);
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0

	void repartirCartas();

	void solicitarDecisiones();

	char* seleccionarGanador(list<Deck*> manos);

	void repartirDinero();

<<<<<<< HEAD
	
=======
	void llenarBote(int);

	list<Deck*> revelar();
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
};