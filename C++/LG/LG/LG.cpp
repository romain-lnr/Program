using namespace std;

#include <iostream>
#include <string.h>
#include <time.h>

void Core() {
    system("CLS");
    srand(time(NULL));
    string tableauRoles[9] = { "WereWolf", "Witch", "Little girl", "Cupid", "Hunter", "Fortune Teller", "Robber", "Peasant", "Capitain" };
    string DescRoles[9] = { "kills one person per ight, if there are multiple werewolves, they vote on who they kill.",
                            "has the power to save or kill someone, or do nothing.",
                            "is the only player who is allowed to peek while everyone's head is down. But if they are caught by the werewolf, they are killed instead of the immediate victim. they are not allowed to tell anyone outright who the werewolf is.",
                            "chooses two players to be lovers.If one of the lovers is killed, the other one dies too.",
                            "If the hunter is killed, the player can choose someone else to die.",
                            "can choose a person and look at their card, but cannot say outright if they know who a werewolf is.",
                            "can switch their cards with someone else.",
                            "don't do anything special.",
                            "the captain's vote counts for two. If they are killed, they get to pick the next captain." };
    int randomUser = rand() % 9;
    int randomPerso = rand() % 9;

    cout << "Your role assigned is " << tableauRoles[randomUser] << endl;
    cout << "Here what you can do : " << DescRoles[randomUser] << endl;

    if (randomUser == 3) cout << "It's your turn";
    else cout << "It's turn to Cupidon";

    cout << "\nNow Cupid comes and chooses two lovers.\n";

    if (randomUser == 3) 


}

void Help() {
    cout << "Werewolf / Loup Garu - kills one person per ight, if there are multiple werewolves, they vote on who they kill.\n";

    cout << "Witch / Sorciere - has the power to save or kill someone, or do nothing.\n";

    cout << "Little girl / Petite fille - is the only player who is allowed to peek while everyone's head is down. But if they are caught by the werewolf, they are killed instead of the immediate victim. they are not allowed to tell anyone outright who the werewolf is.\n";

    cout << "Cupid / Cupidon - chooses two players to be lovers.If one of the lovers is killed, the other one dies too.\n";

    cout << "Hunter / Chaseur - If the hunter is killed, the player can choose someone else to die.\n";

    cout << " Fortune Teller / Voyante - can choose a person and look at their card, but cannot say outright if they know who a werewolf is.\n";

    cout << "Robber / Voleur - can switch their cards with someone else.\n";

    cout << "Peasant / Paysan - don't do anything special.\n";

    cout << "Captain / Capitaine - the captain's vote counts for two. If they are killed, they get to pick the next captain.\n";
}

int main(void)
{
    int choice;
    cout << "1. Game\n";
    cout << "2. Help\n";
    cout << "3. Quit\n";

    cout << "Choice : ";
    cin >> choice;

    switch (choice) {
        case 1:
            Core();
            break;
        case 2:
            Help();
            break;
        case 3:
            break;

    }

}
