#include <iostream>
#include "UI.h"
#include "teste.h"
#include "FileRepository.h"


int main() {
    test_all();

    //Repo_tonomat repo;

    FileRepository repo = FileRepository("C:\\Users\\user\\Desktop\\POO\\OOP_lab11-12\\produse.txt");

    Service service(repo);

    UI consola(service);

    consola.menu();

    return 0;
}
