//
// Created by mohamedElHaddadi on 4/26/2022.
//

#ifndef DL_EXAM_SET_ETUDIANT_H
#define DL_EXAM_SET_ETUDIANT_H
#include "Etudiant.h"
template<class T>
class set_Etudiant ;
template <class T>
void  operator>>( const T &etudiant,set_Etudiant<T> &setEtudiant1 );
template <class T>
 ostream & operator<<(ostream& os, set_Etudiant<T> &setEtudiant);
template <class T>
bool operator % (const set_Etudiant<T>& e, const T &n);
template<class T>
class set_Etudiant {
  T *elemets;
  int max;
  int nbElem;
public:
    set_Etudiant(int n=0){max=n;elemets= new T[max];nbElem=0;};
    void ajouterEt(const T &e);
    int cardinal(){return nbElem;};
    void setAffichage();
     friend bool operator% <T>(const set_Etudiant<T>& e, const T &n);
    friend  void operator>><T>( const T &etudiant,set_Etudiant<T> &setEtudiant1 );
    friend ostream & operator<< <T>(ostream& os, set_Etudiant<T> &setEtudiant);
    ~set_Etudiant(){delete[]elemets;}
};

template<class T>
void set_Etudiant<T>::setAffichage() {
    cout<<"la liste contient les etudiants suivant :"<<endl;
    for (int i = 0; i < nbElem; ++i) {
        cout<<elemets[i]<<endl;
    }
}


template<class T>
void set_Etudiant<T>::ajouterEt( const T &etudiant) {
    if(nbElem<=max)
    {
        elemets[nbElem]=etudiant;
        nbElem++;
        cout<<"Un nouveau element est ajouter avec success !!"<<endl;
    } else{
        cout<<" la set est plain !!"<<endl;
    }
}


template <class T>
bool operator % (const set_Etudiant<T>& e, const T &n){
    for (int i = 0; i < e.nbElem; ++i) {
        if(e.elemets[i]==n)
            return true;
    }
    return false;
}
template<class T>
void  operator>>(const T &etudiant,set_Etudiant<T> &setEtudiant1 ){
    setEtudiant1.ajouterEt(etudiant);
}

template<class T>
ostream & operator<<(ostream& os, set_Etudiant<T> &setEtudiant){
    os<<"les elements de la list sont :"<<endl;
    os<<"{ ";
    for (int i = 0; i < setEtudiant.nbElem; ++i) {
        cout<<setEtudiant.elemets[i]<<endl<<","<<endl;
    }
    os<<"}"<<endl;
    return os;
}


#endif //DL_EXAM_SET_ETUDIANT_H
