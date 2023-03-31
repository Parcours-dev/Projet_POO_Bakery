cmake_minimum_required(VERSION 3.24)
project(Projet_POO)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projet_POO main.cpp Ingredient.hpp Gateau.hpp Chou.hpp Tarte.hpp Patisserie.hpp Ingredient.cpp Gateau.cpp Chou.cpp Tarte.cpp Patisserie.cpp InterfaceUtilisateur.cpp Commande.hpp)
