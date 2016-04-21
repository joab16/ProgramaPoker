#pragma once

class Jugadas
{
private:
	int cantidadCartas;
	float calificacion;

public:
	Jugadas();

	~Jugadas();

	void establecerCalificacion(float);

	float compararJugadas(/*list, list*/);

	int esFlorImperial(/*list*/);

	int esEscaleraColor(/*list*/);

	int esPoker(/*list*/);

	int esFull(/*list*/);

	int esColor(/*list*/);

	int esEscalera(/*list*/);

	int esTrio(/*list*/);

	int esDoblePareja(/*list*/);

	int esPareja(/*list*/);

	int esCartaAlta(/*list*/);
};
