
#include <iostream>
#include <cmath>
#include <ctime>

class Personnage
{
public:
    int m_positionx;
    int m_positiony;
    int m_age;
    int m_timeinfected;
    bool m_malade;
    bool m_vivant;

    void deplacer(int maxx, int maxy)
    {
        m_positionx += rand() % 3 - 1;
        m_positiony += rand() % 3 - 1;
        if (m_positionx >= maxx) m_positionx = maxx - 1;
        if (m_positiony >= maxy) m_positiony = maxy - 1;
        if (m_positionx < 0) m_positionx = 0;
        if (m_positiony < 0) m_positiony = 0;
    }

    bool testposition(Personnage cible)
    {
        if (m_positionx == cible.m_positionx && m_positiony == cible.m_positiony)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void contagieux(int t, int lag)
    {
        if (m_malade)
        {
            if (t > m_timeinfected + lag) m_malade = false;
        }
    }
};

    int main()
    {

        const int maxx = 60;
        const int maxy = 60;
        const int nbre_pop = 1000;
        const int timestep = 500;
        const int timemalade = 15;
        Personnage population[nbre_pop];
        int i;
        int j;
        int t;
        int countactive = 0;
        int countanticorps = 0;

        srand(time(NULL));

        
        for (i = 0; i < nbre_pop; ++i) //INITIALISATION ALEATOIRE DES PERSONNAGES
        {
            population[i].m_positionx = rand() % maxx;
            population[i].m_positiony = rand() % maxy;
            population[i].m_malade = false;
            population[i].m_timeinfected = 0;
        }
        population[0].m_malade = true; //UN PERSONNAGE MALADE LE PATIENT ZERO
        population[0].m_timeinfected = 0;
        countanticorps = 1;
        
        for (t = 0; t < timestep; ++t) //UN PAS DANS LE TEMPS
        {
            countactive = 0; //NOMBRE DE GENS MALADE A CHAQZE ETAPE DANS LE TEMPS
            for (i = 0; i < nbre_pop; ++i) //DEPLACE CHAQUE PERSONAGE SUR L'ECHIQUIER
            {
                population[i].deplacer(maxx, maxy);
                population[i].contagieux(t, timemalade);
            }
            for (i = 0; i < nbre_pop; ++i) //test si deux personnages sont sur la meme case
            {
                for (j = i + 1; j < nbre_pop; ++j)
                {
                    if (population[i].testposition(population[j]))
                    {
                        if (population[i].m_malade || population[j].m_malade)
                        {
                            if (!population[i].m_malade && population[i].m_timeinfected==0)
                            {
                                population[i].m_malade = true;
                                population[i].m_timeinfected = t;
                                countanticorps++;

                            }
                            if (!population[j].m_malade && population[j].m_timeinfected == 0)
                            {
                                population[j].m_malade = true;
                                population[j].m_timeinfected = t;
                                countanticorps++;
                            }
                        }
                    }       
                }                                  
            }
            for (i = 0; i < nbre_pop; ++i)
            {
                if(population[i].m_malade) countactive++;
            }
            std::cout << countactive << " / " << countanticorps << std::endl;

        }


    }

