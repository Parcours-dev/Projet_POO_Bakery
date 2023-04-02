cmake_minimum_required(VERSION 3.18.14)
project(Projet_POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projet_POO main.cpp Ingredient.hpp Gateau.hpp Patisserie.hpp Ingredient.cpp Gateau.cpp Patisserie.cpp InterfaceUtilisateur.cpp Commande.hpp)
