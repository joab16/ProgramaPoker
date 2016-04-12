#include "stdafx.h"
#include "Deck.h"

Deck::Deck()
{
	int numero;
	int palo;

	for (int i = 1; i <= 16; ++i) {
		for (int j = 1; j <= 4; ++j) {
			numero = i;
			palo = j;
			carta = new Carta(numero, palo);
			deck.push_back(*carta);
		}
	}
	
}

Deck::~Deck()
{
	delete *carta;
}

Carta Deck::obtenerCarta()
{
	return deck.begin();
}

void Deck::revolverBaraja()
{
	int posicion;
	list<Carta> lista;

	for (list<Carta>::iterator it = deck.begin(); it != deck.end(); ++it){
		posicion = rand() % 55;
		v[i] = posicion;
		i++;
		if ((repetido(posicion) == 0);
		lista.insert(posicion, *it);
		else
			it--;
	}
	deck = lista;
}

int repetido(int posicion)
	{
		int repeat = 0;
		for (int j = 1; j <= 54; j++) {
			if (posicion != v[j])
				repeat = repeat + 0;
			else
				repeat = repeat + 1;
		}
		return repeat;
	}
