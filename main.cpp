#include"Dog.h"
#include"Cat.h"
int main() {
	
	Animal* animal[2];
	animal[0] = new Dog;
	animal[1] = new Cat;

	animal[0]->Attack();
	animal[1]->Attack();


	delete animal[0];
	delete animal[1];
	return 0;
}