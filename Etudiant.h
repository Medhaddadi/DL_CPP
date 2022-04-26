//
// Created by mohamedElHaddadi on 4/26/2022.
//

#ifndef DL_EXAM_ETUDIANT_H
#define DL_EXAM_ETUDIANT_H
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Etudiant {
  string CNE;
  string nom ;
  string prenom;
  float moyenne;
  pair<string,string> preference;
public:
    Etudiant(string cne="",string Nom="",string Prenom="");
    friend ostream & operator<<(ostream& os,const Etudiant &etudiant);
    Etudiant& operator<( Etudiant &etudiant);
    bool operator==(const Etudiant & etudiant);
    void setPreference();
    void setMoyenne(float moy);
    ~Etudiant(){};
};
Etudiant & EtudiantMoyMax(Etudiant *etudiant,int taille);

#endif //DL_EXAM_ETUDIANT_H
