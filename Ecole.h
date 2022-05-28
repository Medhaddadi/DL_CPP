//
// Created by mohamedElHaddadi on 4/27/2022.
//

#ifndef DL_EXAM_ECOLE_H
#define DL_EXAM_ECOLE_H

#include "set_Etudiant.h"
class Ecole {
  string nomEcole;
  string ville;
  int nbMAxEtudiant;
 float  moyeeneMin;
 set_Etudiant<Etudiant> section;
 //friend void affectation(set_Etudiant<Etudiant> section,Ecole &E);
public:
    Ecole(string nom="",string vill="",int nb=0,float moy=0.0):nomEcole(nom),ville(vill),nbMAxEtudiant(nb),moyeeneMin(moy){};
    void affichageEcole();//por afficher l'ecole
    void affectation(set_Etudiant<Etudiant> etudiants);
    ~Ecole(){};
};


#endif //DL_EXAM_ECOLE_H
