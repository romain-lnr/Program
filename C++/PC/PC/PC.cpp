using namespace std;

// Sleep
#ifdef _WIN32
#include <windows.h>

void sleep(unsigned seconds)
{
    Sleep(seconds * 1000);
}
#else
#include <chrono>
#include <thread>

void sleep(unsigned seconds)
{
    std::chrono::duration<int, std::milli> timespan(seconds * 1000);
    std::this_thread::sleep_for(timespan);
}
#endif

// LIBRAIRIES
#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>

// DISK SIZE (En KB)
#define DISQUE_SIZE_C 1000000000000

// Time delay (En MB)
#define SIZE_OS 18900

// GAMES SIZE
#define SIZE_BOTW 14766
#define SIZE_TP 5374
#define SIZE_WS 71
#define SIZE_WSR 99
#define SIZE_RO 145
#define SIZE_GI 30000

// APP SIZE
#define SIZE_VSC 1000
#define SIZE_STEAM 8000
#define SIZE_DISCORD 137.7
#define SIZE_NETFLIX 28.4
#define SIZE_SPOTIFY 464


// Composants
#define BORNE_PASSANTE 80 // Vitesse de téléchargement

// Valeurs
#define NUMBER_GAMES 6 // Nombre de jeux présents dans la database
#define NUMBER_APP 5 // Nombre d'application présents dans la database

void DiskTransfo(string d, int * disk) {
    if (d == "A") *disk = 0;
    if (d == "B") *disk = 1;
    if (d == "C") *disk = 2;
    if (d == "D") *disk = 3;
    if (d == "E") *disk = 4;
    if (d == "F") *disk = 5;
    if (d == "G") *disk = 6;
    if (d == "H") *disk = 7;
    if (d == "I") *disk = 8;
    if (d == "J") *disk = 9;
    if (d == "K") *disk = 10;
    if (d == "L") *disk = 11;
    if (d == "M") *disk = 12;
    if (d == "N") *disk = 13;
    if (d == "O") *disk = 14;
    if (d == "P") *disk = 15;
    if (d == "Q") *disk = 16;
    if (d == "R") *disk = 17;
    if (d == "S") *disk = 18;
    if (d == "T") *disk = 19;
    if (d == "U") *disk = 20;
    if (d == "V") *disk = 21;
    if (d == "W") *disk = 22;
    if (d == "X") *disk = 23;
    if (d == "Y") *disk = 24;
    if (d == "Z") *disk = 25;
}
void DB_Games() {
    system("CLS");
    cout << "1.Zelda : Breath of the Wild\n";
    cout << "2.Zelda : Twilight Princess\n";
    cout << "3.Wii sports\n";
    cout << "4.Wii sports resort\n";
    cout << "5.Rayman : origins\n";
    cout << "6.Genshin Impact";
}
void DB_App() {
    system("CLS");
    cout << "1.Visual Studio Code\n";
    cout << "2.Steam\n";
    cout << "3.Discord\n";
    cout << "4.Netflix\n";
    cout << "5.Spotify";
}
int main()
{
    int choice, disk, amount_games[26][NUMBER_GAMES] = {0}, amount_app[26][NUMBER_GAMES] = { 0 };
    float j_size[26][NUMBER_GAMES], a_size[26][NUMBER_GAMES];
    long float disk_size[26] = { 0 };
    long float games_size[NUMBER_GAMES] = { SIZE_BOTW, SIZE_TP, SIZE_WS, SIZE_WSR, SIZE_RO, SIZE_GI };
    long float app_size[NUMBER_APP] = { SIZE_VSC, SIZE_STEAM, SIZE_DISCORD, SIZE_NETFLIX, SIZE_SPOTIFY };
    long double newVolumeDisk, addVolumeDisk;
    char choice_ch;
    string j_str[26][NUMBER_GAMES], a_str[26][NUMBER_GAMES], choice_disk, choice_str;
    string games_str[NUMBER_GAMES] = { "{Zelda : Breath of the Wild}", "{Zelda : Twilight Princess}", "{Wii sports}", "{Wii sports resort}", "{Rayman : origins}", "{Genshin Impact}" };
    string app_str[NUMBER_APP] = { "{Visual Studio Code}", "{Steam}", "{Discord}", "{Netflix}", "{Spotify}" };
    const string disk_alphabet[26] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };
    long long int bp = BORNE_PASSANTE;
    disk_size[2] = DISQUE_SIZE_C;
    //Gestion des accents dans la console
    SetConsoleOutputCP(65001);
    cout << "Vous doté d'un PC de 1 TB\n";
    system("pause");

    restart_main:
    system("CLS");
    cout << "1.Installer un système d'exploitation";
    cout << "\nChoix : ";
    cin >> choice;

    switch (choice) {
    case 1:
        for (int t = 0; t < SIZE_OS; t++) {
            system("CLS");
            cout << t << "\\" << SIZE_OS << " MB";
            t += bp;
            Sleep(1);
        }
        system("CLS");
        cout << "Votre système d'exploitation est prêt\n";
        cout << "Cela vous aura coûté 18.9 GB\n";
        disk_size[2] -= 18900000000;
        system("pause");
            
    restart:
        do {
            system("CLS");
            cout << "1.Créer un nouveau disque\n2.Augmenter le volume d'un disque\n3.Miner du bitcoin\n4.Installer une application\n5.Installer un jeu\n6.Voir le contenu de mon/mes disques\n7.Supprimer des éléments de mon disque\n8.Détruire un disque\n";
            cout << "Choix : ";
            cin >> choice;
            switch (choice) {
            case 1:
                system("CLS");
                do {
                    cout << "Quel numéro de disque aura-t-il ?\nNuméro restant :";
                    for (int n = 0; n < 26; n++) {
                        if (disk_size[n] == 0) {
                            cout << disk_alphabet[n] << ".";
                        }
                    }
                    cout << "\nChoix : ";
                    cin >> choice_str;
                    DiskTransfo(choice_str, &disk);
                } while (disk_size[disk] != 0);

                cout << "\n\nCombien de volume ce disque aura ? (En KB)";
                cout << "\nChoix : ";
                cin >> newVolumeDisk;

                cout << "\nLe disque " << disk_alphabet[disk] << " a été créé avec " << newVolumeDisk / 1000000000 << " GB.\n";
                disk_size[disk] = newVolumeDisk;
                disk_size[2] -= newVolumeDisk;
                system("pause");
                break;
            case 2:
                do {
                    system("CLS");
                    cout << "De quel disque voulez-vous augmenter le volume ?\nDisque(s) actif(s) : ";
                    for (int d = 0; d < 26; d++) {
                        if (disk_size[d] > 0) {
                            cout << disk_alphabet[d] << ".";
                        }
                    }
                    cout << "\nChoix : ";
                    cin >> choice_disk;
                    DiskTransfo(choice_disk, &disk);
                } while (disk_size[disk] == 0 || disk_alphabet[disk] == "C");
                cout << "\n\nDe combien d'espace voulez-vous procéder ? (En KB)";
                cout << "\nChoix : ";
                cin >> addVolumeDisk;
                cout << "\nLe disque " << disk_alphabet[disk] << " a augmenté de " << addVolumeDisk / 1000000000 << " GB.\n";
                disk_size[disk] += addVolumeDisk;
                disk_size[2] -= addVolumeDisk;
                system("pause");
                break;
            case 4: 
                do {
                    DB_App();
                    cout << "\nChoix : ";
                    cin >> choice;
                } while (choice < 1 || choice > NUMBER_APP);
                cout << "\nSur quel disque voulez-vous le mettre ?\nDisque(s) actif(s) : ";
                for (int d = 0; d < 26; d++) {
                    if (disk_size[d] > 0) {
                        cout << disk_alphabet[d] << ".";
                    }
                }
                cout << "\nChoix : ";
                cin >> choice_disk;
                DiskTransfo(choice_disk, &disk);
                if (disk_size[disk] > 0) {
                    for (int t = 0; t < app_size[choice - 1]; t++) {
                        system("CLS");
                        cout << t << "\\" << app_size[choice - 1] << " MB";
                        t += bp;
                        Sleep(1);
                    }
                    a_str[disk][choice - 1] = app_str[choice - 1];
                    a_size[disk][choice - 1] = app_size[choice - 1];
                    disk_size[disk] -= app_size[choice - 1] * 1000000;
                    amount_app[disk][choice - 1]++;
                }
                else {
                    system("CLS");
                    cout << "Disque pas créé...\n";
                    system("pause");
                }
                break;

            case 5:
                do {
                    DB_Games();
                    cout << "\nChoix : ";
                    cin >> choice;
                } while (choice < 1 || choice > NUMBER_GAMES);
                cout << "\nSur quel disque voulez-vous le mettre ?\nDisque(s) actif(s) : ";
                for (int d = 0; d < 26; d++) {
                    if (disk_size[d] > 0) {
                        cout << disk_alphabet[d] << ".";
                    }
                }
                cout << "\nChoix : ";
                cin >> choice_disk;
                    DiskTransfo(choice_disk, &disk);
                    if (disk_size[disk] > 0) {
                        for (int t = 0; t < games_size[choice-1]; t++) {
                            system("CLS");
                            cout << t << "\\" << games_size[choice-1] << " MB";
                            t += bp;
                            Sleep(1);
                        }
                        j_str[disk][choice-1] = games_str[choice-1];
                        j_size[disk][choice-1] = games_size[choice-1];
                        disk_size[disk] -= games_size[choice-1] * 1000000;
                        amount_games[disk][choice-1]++;
                    }
                    else {
                        system("CLS");
                        cout << "Disque pas créé...\n";
                        system("pause");
                    }
                    break;
            case 6:
                system("CLS");
                for (int d = 0; d < 26; d++) {
                    system("CLS");
                    if (disk_size[d] > 0) {
                        cout << "Disque dur {" << disk_alphabet[d] << ":}\n";
                        cout << "STOCKAGE " << disk_size[d] / 1000000000 << " GB\n";
                        cout << "\nApplications :";
                        cout << "\n" << "\n";
                        for (int i = 0; i < NUMBER_APP; i++) {
                            for (int j = 0; j < amount_app[d][i]; j++) {
                                if (a_size[d][i] > 0) {
                                    cout << a_str[d][i] << "\n";
                                    printf("DONEE : %.1f GB\n\n", a_size[d][i] / 1000);
                                }
                            }
                        }
                        cout << "\nGAMES :";
                        cout << "\n" << "\n";
                        for (int i = 0; i < NUMBER_GAMES; i++) {
                            for (int j = 0; j < amount_games[d][i]; j++) {
                                if (j_size[d][i] > 0) {
                                    cout << j_str[d][i] << "\n";
                                    printf("DONEE : %.1f GB\n\n", j_size[d][i] / 1000);
                                }
                            }
                        }
                        system("pause");
                    }
                }
                break;
            case 7:
                system("CLS");
                cout << "Disque : ";
                for (int d = 0; d < 26; d++) {
                    if (disk_size[d] > 0) {
                        cout << disk_alphabet[d] << ".";
                    }
                }
                cout << "\n\nApplications :";
                cout << "\n" << "\n";
                for (int d = 0; d < 26; d++) {
                    if (disk_size[d] > 0) {
                        for (int i = 0; i < NUMBER_APP; i++) {
                            for (int j = 0; j < amount_app[d][i]; j++) {
                                if (a_size[d][i] > 0) {
                                    cout << a_str[d][i] << "\n";
                                    printf("DONEE : %.1f GB\n\n", a_size[d][i] / 1000);
                                }
                            }
                        }
                    }
                }
                cout << "\nGAMES :";
                cout << "\n" << "\n";
                for (int d = 0; d < 26; d++) {
                    if (disk_size[d] > 0) {
                        for (int i = 0; i < NUMBER_GAMES; i++) {
                            for (int j = 0; j < amount_games[d][i]; j++) {
                                if (j_size[d][i] > 0) {
                                    cout << j_str[d][i] << "\n";
                                    printf("DONEE : %.1f GB\n\n", j_size[d][i] / 1000);
                                }
                            }
                        }
                    }
                }
                cout << "Souhaitez-vous supprimer une application ou un jeu ? [A / J]";
                cin >> choice_ch;

                switch (choice_ch) {
                case 'A':
                    do {
                        cout << "\nQue souhaitez-vous supprimer ?";
                        DB_App();
                        cout << "\nChoix : ";
                        cin >> choice;
                    } while (choice < 1 || choice > NUMBER_APP);

                    for (int d = 0; d < 26; d++) {
                        if (amount_app[d][choice - 1] > 0) {
                            cout << "\nNous avons trouvé cette application dans le disque " << disk_alphabet[d] << "\nVoulez-vous supprimer celui-ci ?[Y / N]\n";
                            cout << "Choix : ";
                            cin >> choice_str;

                            if (choice_str == "Y") {
                                disk_size[d] += app_size[choice - 1] * 1000000;
                                amount_app[d][choice - 1]--;
                                break;
                            }
                            else if (choice_str == "N") continue;
                        }
                    }
                    break;
                case 'J':
                    do {
                        cout << "\nQue souhaitez-vous supprimer ?";
                        DB_Games();
                        cout << "\nChoix : ";
                        cin >> choice;
                    } while (choice < 1 || choice > NUMBER_GAMES);

                    for (int d = 0; d < 26; d++) {
                        if (amount_games[d][choice - 1] > 0) {
                            cout << "\nNous avons trouvé ce jeu dans le disque " << disk_alphabet[d] << "\nVoulez-vous supprimer celui-ci ?[Y / N]\n";
                            cout << "Choix : ";
                            cin >> choice_str;

                            if (choice_str == "Y") {
                                disk_size[d] += games_size[choice - 1] * 1000000;
                                amount_games[d][choice - 1]--;
                                break;
                            }
                            else if (choice_str == "N") continue;
                        }
                    }
                }
                system("\npause");
                break;
            case 8:
                system("CLS");

                do {
                    cout << "De quel disque voulez-vous supprimer ?\n\nDisque(s) actif(s) :\n";
                    for (int d = 0; d < 26; d++) {
                        if (disk_size[d] > 0) {
                            cout << disk_alphabet[d] << ".";
                        }
                    }
                    cout << "\nChoix : ";
                    cin >> choice_str;
                    DiskTransfo(choice_str, &disk);
                } while (disk_size[disk] == 0 || disk_alphabet[disk] == "C");
                cout << "Le disque " << disk_alphabet[disk] << " est supprimé et l'espace est redistribué sur le disque " << disk_alphabet[2] << ".\n";
                disk_size[2] += disk_size[disk];
                disk_size[disk] = 0;
                system("pause");
                break;

            default:
                goto restart;
            }
        } while (2 == 2);
    default:
        goto restart_main;
    }
}
