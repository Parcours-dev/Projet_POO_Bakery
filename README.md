# Utilisation de CMake en C++ avec un exemple


## Cr?ation d'un projet CMake

Pour cr?er un projet **CMake**, vous devez d'abord cr?er un r?pertoire pour le projet et un fichier **CMakeLists.txt** ? la racine du projet. Le fichier **CMakeLists.txt** contiendra les instructions de g?n?ration pour **CMake**.

###  ?tape 1 : Cr?er un r?pertoire pour le projet
Dans votre terminal, cr?ez un r?pertoire pour votre projet :

    mkdir mon_projet 
    cd mon_projet

### ?tape 2 : Cr?er un fichier CMakeLists.txt

Cr?ez un fichier **CMakeLists.txt** dans le r?pertoire de votre projet :

    touch CMakeLists.txt

## ?crire le CMakeLists.txt

Le fichier **CMakeLists.txt** est le point central de votre projet **CMake**. Il contient les instructions de g?n?ration pour **CMake**, telles que les sources de votre projet, les biblioth?ques ? utiliser et les cibles ? construire. Voici un exemple simple :



    cmake_minimum_required(VERSION 3.18.4) //Version du CREMI
    
    # D?finir le nom du projet 
    project(mon_projet)
    
    # Ajouter tous les fichiers source au projet 
    file(GLOB SOURCES src/*.cpp)
     
    # Ajouter une cible ex?cutable
    add_executable(mon_executable ${SOURCES})

## Explication du CMakeLists.txt
La premi?re ligne `cmake_minimum_required(VERSION 3.10)` sp?cifie la version minimale de **CMake** requise pour construire le projet.

La deuxi?me ligne `project(mon_projet)` d?finit le nom du projet.

La troisi?me ligne `file(GLOB SOURCES src/*.cpp)` ajoute tous les fichiers source se terminant par ".cpp" dans le dossier "src" au projet. Vous pouvez modifier le chemin d'acc?s pour ajouter des fichiers de sources depuis un autre r?pertoire.

La quatri?me ligne `add_executable(mon_executable ${SOURCES})` cr?e une cible ex?cutable nomm?e "mon_executable" ? partir des fichiers sources dans la variable "SOURCES". Vous pouvez changer le nom de la cible en modifiant "mon_executable" et ajouter des biblioth?ques ? lier en ajoutant d'autres arguments ? la commande "add_executable".

## Compiler le projet
Une fois que vous avez cr?? le fichier **CMakeLists.txt** et ajout? vos sources, vous pouvez g?n?rer des fichiers de construction pour votre projet en ex?cutant la commande suivante dans le r?pertoire racine de votre projet :

    cmake .
Cela g?n?rera des fichiers de construction pour votre projet dans le r?pertoire actuel.

Ensuite, vous pouvez compiler votre projet en ex?cutant la commande suivante :

    make
Cela va compiler votre projet et cr?er l'ex?cutable que vous avez d?fini dans votre fichier **CMakeLists.txt**.

## Ex?cuter le projet
Une fois que vous avez compil? votre projet, vous pouvez l'ex?cuter en ex?cutant la commande suivante (Il s'agit du main() de InterfaceUtilisateur.cpp qui sera execut?, main.cpp nous a servi de test de fonctions) :

    ./mon_executable
## Conclusion
**CMake** est un outil puissant pour la g?n?ration de fichiers de construction dans la compilation de projets C++. Bien qu'il puisse sembler intimidant au premier abord, en comprenant les bases de son utilisation, il peut grandement faciliter la gestion de votre projet sur diff?rentes plates-formes.
