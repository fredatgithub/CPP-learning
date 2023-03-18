#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[0;30m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"
# define YELLOW		"\033[0;33m"
# define PURPLE		"\033[0;34m"
# define PINK		"\033[0;35m"
# define SKY		"\033[0;36m"

class Zombie
{
	private:
		std::string _name;

	public:
		void announce(void);
		void randomChump(std::string name);
		Zombie	*newZombie(std::string name);	
		Zombie	*zombieHorde(int N, std::string name);	
		void	setName(std::string name);

	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
};

#endif
