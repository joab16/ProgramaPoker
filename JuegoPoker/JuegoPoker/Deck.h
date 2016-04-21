#pragma once
#include "stdafx.h"
#include "Carta.h"
using namespace std;

class Deck
{
private:

	list<Carta> deck;
	Carta * carta;
	int cartasRestantes;
	int v[53];

public:
	Deck();

	~Deck();

	Carta obtenerCarta();

	void revolverBaraja();

};




