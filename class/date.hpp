#ifdef date_hpp
#define date_hpp
#include <iostream>



class Date
{
    public:
        Date(int jour, int mois, int annee); jour(jour), mois(mois), annee(annee){}

        
        void getJour(){
            return jour
        }
        void getMois(){
            return mois
        }
        void getAnnee(){
            return annee
        }

        void setJour(int jour){
            this->jour = jour;
        }
        
        void setMois(int mois){
            this->mois = mois;
        }

        void setAnnee(int annee){
            this->annee = annee;
        }

    protected:
        int jour;
        int mois;
        int annee;

};


#endif