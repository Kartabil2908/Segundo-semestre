#ifndef _PROCEDIMENTOS_HPP_
#define _PROCEDIMENTOS_HPP_

#include <string>
#include <iostream>
#include <cctype>
#include <cmath>
#include <sstream>

int stringToInt(const std::string& str) {
    int valor = 0;
    bool negativo = false;
    bool valido = true;

    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (i == 0 && c == '-') {
            negativo = true;
        } else if (i == 0 && c == '+') {
            // ignora o sinal de positivo
        } else if (c >= '0' && c <= '9') {
            valor = valor * 10 + (c - '0');
        } else {
            valido = false;
        }
    }

    if (!valido) {
        return -1;
    }

    if (negativo) {
        valor = -valor;
    }

    return valor;
}


double getDouble(const std::string& str) {
    double valor = 0.0;
    bool valido = true;
    bool ponto = false;
    int parteInteira = 0;
    int parteFracionaria = 0;
    int decimalPlaces = 0;

    for (int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (i == 0 && (c == '-' || c == '+')) {
            // ignora o sinal de negativo/positivo
        } else if (c == '.') {
            if (ponto) {
                valido = false;
                break;
            }
            ponto = true;
        } else if (c >= '0' && c <= '9') {
            if (ponto) {
                parteFracionaria = parteFracionaria * 10 + (c - '0');
                decimalPlaces++;
            } else {
                parteInteira = parteInteira * 10 + (c - '0');
            }
        } else {
            valido = false;
            break;
        }
    }

    if (!valido) {
        return 0.0;
    }

    valor = parteInteira + (parteFracionaria / pow(10, decimalPlaces));

    if (str[0] == '-') {
        valor = -valor;
    }

    return valor;
}


bool getBoolean(const std::string& str) {
    std::string lowerStr = str;
    for (char& c : lowerStr) {
        c = std::tolower(c);
    }

    if (lowerStr == "true" || lowerStr == "t" || lowerStr == "1") {
        return true;
    } else if (lowerStr == "false" || lowerStr == "f" || lowerStr == "0") {
        return false;
    } else {
        return false;
    }
}

bool contains(const std::string& conteudo, const std::string& parametro) {
    return conteudo.find(parametro) != std::string::npos;
}

std::string toUpperCase(const std::string& str) {
    std::string upperStr = str;
    for (char& c : upperStr) {
        c = std::toupper(c);
    }
    return upperStr;
}

std::string toLowerCase(const std::string& str) {
    std::string lowerStr = str;
    for (char& c : lowerStr) {
        c = std::tolower(c);
    }
    return lowerStr;
}

std::string replace(const std::string& str, char original, char novo) {
    std::string result = str;
    for (char& c : result) {
        if (c == original) {
            c = novo;
        }
    }
    return result;
}

std::string encrypt(const std::string& str, int shift) {
    std::string encrypted = str;
    for (char& c : encrypted) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            c = (c - base + shift) % 26 + base;
        }
    }
    return encrypted;
}

std::string decrypt(const std::string& str, int shift) {
    std::string decrypted = str;
    for (char& c : decrypted) {
        if (std::isalpha(c)) {
            char base = std::isupper(c) ? 'A' : 'a';
            c = (c - base - shift) % 26 + base;
        }
    }
    return decrypted;
}

int split(const std::string& str, std::string sequence[]) {
    int count = 0;
    std::istringstream iss(str);
    std::string token;

    while (iss >> token) {
        sequence[count++] = token;
    }

    return count;
}

#endif
