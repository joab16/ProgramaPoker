#include "stdafx.h"
#include "Deck.h"
#include <cstdlib> 
#include <ctime> 
#include <algorithm> 
#include <random>
using namespace std;

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
	delete carta;
}

Carta Deck::obtenerCarta()
{
	
	return deck.front(); // Devuelve la primera carta.
}
 
void Deck::revolverBaraja()
{
	Carta v[53];
	list<Carta>::iterator it = deck.begin();
	int j = 0;	
	list<Carta> nueva(53);

	for ( int i = 0; i < 53; i++)
		v[i] = *it;
	
	auto engine = default_random_engine{};
	shuffle(begin(v), end(v), engine);

	for (int i = 0; i <= 53 ; i++) {
		nueva.push_back(v[i]);
	}

	deck = nueva;
	
}

void Carta::operator=(Carta & otra)
{
	this->numeroCarta = otra.numeroCarta;
	this->palo = otra.palo;
}


