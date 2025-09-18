#include <iostream>
#include <vector>
using namespace std;
class Player {
    private:
    std:: string name;
    static int ID;
    int id;
    std::string choice;
    int score; 
    public:
    Player(std::string Name    )
    {
        id = ID++;
        this->name = Name;
        score = 0;
    }
    
     void makeChoice(string c) {
        choice = c;
    }

    string getChoice() {
        return choice;
    }

    string getName() {
        return name;
    }
     void displayInfo() {
        cout << name << " chose " << choice << endl;
    }
    void increaseScore() {
        score++;
    }
     int getScore() {
        return score;
    }
};
class Game {
private:
    vector<Player> players;

    string determineWinner(string c1, string c2) {
        if (c1 == c2) return "Draw";

        if ((c1 == "rock" && c2 == "scissors") ||
            (c1 == "paper" && c2 == "rock") ||
            (c1 == "scissors" && c2 == "paper")) {
            return "Player1";
        }
        return "Player2";
    }

public:
    void addPlayer(std::string p) {
        players.emplace_back(p);
    }

    void playRound() {
        if (players.size() != 2) {
            cout << "Game needs exactly 2 players!" << endl;
            return;
        }

        

        players[0].displayInfo();
        players[1].displayInfo();

        string result = determineWinner(players[0].getChoice(), players[1].getChoice());

        if (result == "Draw") {
            cout << "It's a draw!" << endl;
        } else if (result == "Player1") {
            cout << players[0].getName() << " wins this round!" << endl;
            players[0].increaseScore();
        } else {
            cout << players[1].getName() << " wins this round!" << endl;
            players[1].increaseScore();
        }

        cout << "Score: " << players[0].getName() << " [" << players[0].getScore()
             << "] - " << players[1].getName() << " [" << players[1].getScore() << "]\n\n";
    }
    Player& getPlayer(int index) {
        return players[index];
    }

};

string getComputerChoice() {
    int r = rand() % 3; // 0, 1, 2
    if (r == 0) return "rock";
    if (r == 1) return "paper";
    return "scissors";
}


int Player::ID = 1;
int main() {
        int mode;
    cout << "Choose game mode:\n1. Player vs Player\n2. Player vs Computer\nEnter choice: ";
    cin >> mode;

    Game game;
    string name1, name2;

    cout << "Enter Player 1 name: ";
    cin >> name1;
    game.addPlayer( name1);

    if (mode == 1) {
        cout << "Enter Player 2 name: ";
        cin >> name2;
        game.addPlayer( name2);
    } else {
        game.addPlayer("Computer");
    }

    while (game.getPlayer(0).getScore() < 3 && game.getPlayer(1).getScore() < 3) {
        string choice;

        cout << "\n" << game.getPlayer(0).getName() << ", enter your choice (rock/paper/scissors): ";
        cin >> choice;
        game.getPlayer(0).makeChoice(choice);

        if (mode == 1) {
            cout << game.getPlayer(1).getName() << ", enter your choice (rock/paper/scissors): ";
            cin >> choice;
            game.getPlayer(1).makeChoice(choice);
        } else {
            game.getPlayer(1).makeChoice(getComputerChoice());
        }

        game.playRound();
    }

    if (game.getPlayer(0).getScore() == 3) {
        cout << game.getPlayer(0).getName() << " wins the match!" << endl;
    } else {
        cout << game.getPlayer(1).getName() << " wins the match!" << endl;
    }

    return 0;

}
