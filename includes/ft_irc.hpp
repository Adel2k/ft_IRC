#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include <string>
#include <iostream>
#include <cstdlib>


using std::cout;
using std::cin;
using std::endl;

# define GREEN "\e[1;32m"
# define RESET "\e[0m"
# define RED "\e[1;91m"
# define CYAN "\e[1;36m"
# define YELLOW "\e[1;33m"
# define PURPLE "\e[1;35m"
# define BLUE "\e[1;34m"

class ft_irc{
    private:
        int         port;
        std::string password;

        int isport(const std::string& port) const;
    
    public:
        ft_irc(const std::string& port, const std::string& password);


        int                   getPort() const;
        const std::string&    getPassword() const;



};