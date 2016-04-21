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
<<<<<<< HEAD
	
=======

>>>>>>> master
}

Deck::~Deck()
{
<<<<<<< HEAD
	delete *carta;
=======
	delete carta;
>>>>>>> master
}

Carta Deck::obtenerCarta()
{
<<<<<<< HEAD
	return deck.begin();
=======
	
	return deck.front(); // Devuelve la primera carta.
>>>>>>> master
}
 
void Deck::revolverBaraja()
{
<<<<<<< HEAD
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
=======
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


>>>>>>> master
