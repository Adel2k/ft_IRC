#include "../includes/ft_irc.hpp"

int main(int ac, char ** av) {
    if (ac == 3) {
        ft_irc  irc(av[1], av[2]);
        cout << irc.getPort() << " " << irc.getPassword() << endl;
        return 0;
    }
    cout << RED << "Error: " << RESET << "Wrong arguments!" << endl << "USG -> ./ircserv <port> <password>"  << endl;

    return 1;
}