#include "../includes/ft_irc.hpp"

ft_irc::ft_irc(const std::string& port, const std::string& password) {
    if (isport(port)) {
        this->port = atoi(port.c_str());
        if (this->port < 0 || this->port > 6500) {
            cout << RED << "Error: " << RESET << "port should be a unsigned number in the range of 1 - 6500" << endl;
            exit(-1);
        }
        this->password = password;
    }
}

int ft_irc::getPort() const {
    return port;
}

const std::string& ft_irc::getPassword() const {
    return password;
}

int ft_irc::isport(const std::string& port) const {
    for (long unsigned int i = 0; i < port.length(); i++) {
        if (isdigit(port[i]) == 0) {
            cout << RED << "Error: " << RESET << "port should be a unsigned number" << endl;
            exit(-1);
        }
    }
    return 1;
}