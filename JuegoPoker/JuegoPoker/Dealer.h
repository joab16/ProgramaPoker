#pragma once
#include "Jugador.h"
#include "Deck.h"

class Dealer
{
private:
	int turnoActual;
	list<Deck*> comunitarias;
	int bote;
	int ciegaPequenna;
	int ciegaGrande;
	int apuestaPequenna;
	int apuestaGrande;

public:
	Dealer();
	~Dealer();

	void inicializarJuego();

	void repartirCartas();

	void solicitarDecisiones();

	char* seleccionarGanador(list<Deck*> manos);

	void repartirDinero();

	list<Deck*> revelar();
};