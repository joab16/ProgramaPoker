#include "stdafx.h"
#include "Dealer.h"
#include "Carta.h"
#include "TipoJugador.h"

Dealer::Dealer(int ciegaPequenna, int numeroJugadores)
{
	this->ciegaPequenna = ciegaPequenna;
	this->ciegaGrande = 2*ciegaPequenna;
	this->numeroJugadores = numeroJugadores;
	this->deck = new Deck();
	for (int i = 0; i < numeroJugadores; i++) {
		jugadores.pop_front(TipoJugador(0,0,0.0));
	}

}

Dealer::~Dealer()
{
}

void Dealer::inicializarJuego()
{
	turnoActual = 0;
	bote = 0;
	for (int i = 0; i < 3; i++) {
		comunitarias.push_front(deck.obtenerCarta());
	}
	repartirCartas();
}

void Dealer::repartirCartas()
{
}

void Dealer::solicitarDecisiones()
{
}

char * Dealer::seleccionarGanador(list<Deck*> manos)
{
	return nullptr;
}

char * Dealer::seleccionarGanador()
{
	return nullptr;
}

void Dealer::repartirDinero()
{
}

void Dealer::revelar()
{
}
