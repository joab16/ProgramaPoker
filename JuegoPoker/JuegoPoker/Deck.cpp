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
	list<Carta> lista;
	llenarPosiciones();
	int posicion = 0;

	for (list<Carta>::iterator it = deck.begin(); it != deck.end(); ++it){
		lista.insert(v[posicion], *it);
		i++;
	}
	deck = lista;
}

void Deck::llenarPosiciones ()
	{
		int posicion;
		int repetido;

		for (int i = 0; i < 26; i++) {
			posicion= rand() % 26;
			repetido = 0;
			for (int j = 0; j <= i; j++) {
				if (posicion == v[j]) {
					repetido = 1;
					break;
				}
			}
			if (repetido == 1)
				i--;
			else
				v[i] = posicion;
		}

		for (int i = 26; i < 54; i++) {
			posicion = rand() % 26 + 26;
			repetido = 0;
			for (int j = 26; j <= i; j++) {
				if (posicion == v[j]) {
					repetido = 1;
					break;
				}
			}
			if (repetido == 1)
				i--;
			else
				v[i] = posicion;
		}
	}
