
using System;

namespace name {
    struct Ecole {
        public string nom = default;
        public int nbEleve = default;

        public Ecole(string nomEcole, int nombre) { 
            nom = nomEcole;
            nbEleve = nombre;
        }
    }
    class Program {
        static void Main(string[] args) {
            Ecole ecole1 = new Ecole("EPFL", 1300);
            Ecole ecole2 = new Ecole("CPNV", 900);
            Console.WriteLine(ecole1.nom + " " + ecole1.nbEleve);
            Console.WriteLine(ecole2.nom + " " + ecole2.nbEleve);
        }
    }
}
