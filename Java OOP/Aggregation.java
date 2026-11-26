class Player {
    String name;

    Player(String name) {
        this.name = name;
    }
}

class Team {
    String teamName;
    Player playerName;

    Team(String name, Player playerName) {
        this.teamName = name;
        this.playerName = playerName;
    }

    void display() {
        System.out.println("Team name " + teamName);
        System.out.println("Player name " + playerName.name);
    }

}

public class Aggregation {
    public static void main(String[] args) {

        Player p = new Player("vini jr");
        Team t = new Team("Real madrid", p);

        t.display();

    }

}
