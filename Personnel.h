#pragma once

#include "Commandes.h"
#include <string>

using namespace std;

class Personnel : public Commandes {
public:
	Personnel();
	int Cr�ation_Personnel(string nom, string pr�nom, string adresse, int age, int num�ro);
	//void Modifier_Personnel(string nom, string pr�nom, string adresse, int age, int num�ro);
	//void Supprimer_Personnel(int ID);
	string Afficher_Personnel(int ID) const;

	static int dernierID; // Variable statique pour suivre le dernier ID attribu�
	int ID; // ID unique pour chaque personnel

private:
	string nom;
	string pr�nom;
	string adresse;
	int age;
	int num�ro;
};