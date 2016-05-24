#include "stdafx.h"
<<<<<<< HEAD
#include "Dealer.h"
#include "Carta.h"
#include "TipoJugador.h"
#include "Deck.h"
=======
#include "Jugador.h"
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0

void Jugador::llenarMano(Carta * carta)
{
<<<<<<< HEAD
	this->ciegaPequenna = ciegaPequenna;
	this->ciegaGrande = 2*ciegaPequenna;
	this->numeroJugadores = numeroJugadores;
	this->deck = new Deck();
	for (int i = 0; i < numeroJugadores; i++) {
		jugadores.push_front(new Jugador("jugador",10000));
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
		comunitarias.push_front(deck->obtenerCarta());
	}
	repartirCartas(0);
=======
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
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
}

bool Jugador::tomarDecision(float calificacion)
{
<<<<<<< HEAD
}

void Dealer::solicitarDecisiones()
{
}

char * Dealer::seleccionarGanador()
{
	return nullptr;
}


void Dealer::repartirDinero()
{
}


=======
	bool decision;
	if (calificacion <= tipo->probabilidadMinimaRetiro)
		decision = false;
	else
		decision = true;
	return decision;
}
>>>>>>> 3ef8428f9ffab0b13a45bbaac9aa6ca1a8e853b0
