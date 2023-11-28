#pragma once

#include "Commandes.h"
#include <string>

using namespace std;

class Personnel : public Commandes {
public:
	Personnel();
	int Création_Personnel(string nom, string prénom, string adresse, int age, int numéro);
	//void Modifier_Personnel(string nom, string prénom, string adresse, int age, int numéro);
	//void Supprimer_Personnel(int ID);
	string Afficher_Personnel(int ID) const;

	static int dernierID; // Variable statique pour suivre le dernier ID attribué
	int ID; // ID unique pour chaque personnel

private:
	string nom;
	string prénom;
	string adresse;
	int age;
	int numéro;
};