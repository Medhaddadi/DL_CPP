//
// Created by mohamedElHaddadi on 4/26/2022.
//

#ifndef DL_EXAM_SET_ETUDIANT_H
#define DL_EXAM_SET_ETUDIANT_H
#include "Etudiant.h"
#include <set>

template<class T>
class set_Etudiant {
  set<Etudiant> setEtudiant;
public:
    set_Etudiant(){};
    void affichageSetEtudiant();
    friend istream & operator>>(const Etudiant &etudiant,set_Etudiant &setEtudiant1 );
    ~set_Etudiant(){setEtudiant.clear();}
};

istream & operator>>(const Etudiant &etudiant,set_Etudiant &setEtudiant1 ){
    setEtudiant1.setEtudiant.insert(etudiant);
}

#endif //DL_EXAM_SET_ETUDIANT_H
