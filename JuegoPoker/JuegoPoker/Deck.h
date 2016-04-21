#pragma once
#include "stdafx.h"
#include "Carta.h"
using namespace std;

class Deck
{
private:

	list<Carta> deck;
<<<<<<< HEAD
	Carta *carta;
=======
	Carta * carta;
>>>>>>> master
	int cartasRestantes;
	int v[53];

public:
	Deck();

	~Deck();

	Carta obtenerCarta();

	void revolverBaraja();

	void llenarPosiciones();

};




