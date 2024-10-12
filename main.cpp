#include <iostream>
#include <classPokemon.h>

int main() {
    Pokemon::Gengar("Gengar", 100, 100, 100);

    std::cout  << Gengar.getPokemonName() << std::endl;
    return 0;
}