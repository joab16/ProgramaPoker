#include "stdafx.h"
#include "Deck.h"

/**
* @brief Constructor
*/
Deck::Deck()
{
	int numero;
	int palo;

	for (int i = 1; i <= 16; ++i) {
		for (int j = 1; j <= 4; ++j) {
			numero = i;
			palo = j;
			carta = new Carta(numero, palo);
			deck.push_back(carta);
		}
	}

}

/**
* @brief Destructor
*/
Deck::~Deck()
{
	delete carta;
}

Carta * Deck::obtenerCarta()
{
	list<Carta*>::iterator it = deck.begin();
	if (*it != nullptr)
	{
		*it = deck.front();
		deck.pop_front();
	}
	return *it; // Devuelve la primera carta y la elimina del deck.
}

//Tomado del ejemplo en clase del profesor Ruben Jimenez.
void Deck::revolverBaraja()
{

	for (int i = 0; i < 100; i++) {
		list<Carta*>::iterator it1 = deck.begin();
		list<Carta*>::iterator it2 = deck.begin();

		int limite1 = rand() % 54;
		int limite2 = rand() % 54;

		for (int i = 0; i < limite1; i++) {
			++it1;
		}

		for (int i = 0; i < limite2; i++) {
			++it2;
		}

		Carta * tmp = *it1;
		*it1 = *it2;
		*it2 = tmp;
	}

}
/*Carta v[53];
list<Carta*>::iterator it = deck.begin();
int j = 0;
list<Carta*> nueva(54);

for (int i = 0; i < 53; i++)
v[i] = *it;

auto engine = default_random_engine{};
shuffle(begin(v), end(v), engine);

for (int i = 0; i <= 53; i++) {
nueva.push_back(v[i]);
}

deck = nueva;*/

//void Deck::imprimir()
//{
//	for (list<Carta*>::iterator it = deck.begin(); it != deck.end(); ++it) {
//		cout << "La carta vale: " << (*it)->getValor() << endl;
//	}
//}