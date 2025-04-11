#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "libs/sqlite3.h"

int main() {
    setlocale(LC_ALL, "");
    sqlite3 *db;
    char *errMsg = 0;
    int rc;

    //tenta abrir ou criar um banco de dados chamado "main.db"
    rc = sqlite3_open("main.db", &db);
    if (rc) {
        printf("Erro ao abrir o banco de dados %s\n", sqlite3_errmsg(db));
        return 1;
    } else {
        printf("Banco de dados aberto com sucesso!\n");
    }

    //criar tabelas
    const char *sql = 
    "CREATE TABLE IF NOT EXISTS usuarios ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
    "nome TEXT NOT NULL, "
    "email TEXT UNIQUE NOT NULL);"
    
    "CREATE TABLE IF NOT EXISTS problemas ("
    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
    "descricao TEXT NOT NULL, "
    "categoria TEXT NOT NULL);";

    rc = sqlite3_exec(db, sql, 0, 0, &errMsg);
    if (rc != SQLITE_OK) {
        printf("Erro ao criar tabelas: %s\n");
        sqlite3_free(errMsg);
    } else {
        printf("Tabelas criadas com sucesso!\n");
    }

    //fecha o banco de dados
    sqlite3_close(db);
    return 0;
}