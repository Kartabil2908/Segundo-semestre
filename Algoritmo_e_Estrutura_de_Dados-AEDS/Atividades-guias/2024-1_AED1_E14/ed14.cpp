#include "procedimentos.hpp"

int main() {
    std::string str;

    std::cout << "Selecione uma opção:\n";
    std::cout << "1. stringToInt\n";
    std::cout << "2. getDouble\n";
    std::cout << "3. getBoolean\n";
    std::cout << "4. contains\n";
    std::cout << "5. toUpperCase\n";
    std::cout << "6. toLowerCase\n";
    std::cout << "7. replace\n";
    std::cout << "8. encrypt\n";
    std::cout << "9. decrypt\n";
    std::cout << "10. split\n";

    int opcao;
    std::cin >> opcao;

    switch (opcao) {
        case 1: {
            std::cout << "Digite uma string para converter para inteiro: ";
            std::cin >> str;
            int valor = stringToInt(str);
            std::cout << "Valor inteiro: " << valor << std::endl;
            break;
        }
        case 2: {
            std::cout << "Digite uma string para converter para double: ";
            std::cin >> str;
            double valor = getDouble(str);
            std::cout << "Valor double: " << valor << std::endl;
            break;
        }
        case 3: {
            std::cout << "Digite uma string para converter para boolean: ";
            std::cin >> str;
            bool valor = getBoolean(str);
            std::cout << "Valor boolean: " << (valor ? "true" : "false") << std::endl;
            break;
        }
        case 4: {
            std::cout << "Digite uma string para verificar se contém outro: ";
            std::cin >> str;
            std::cout << "Digite a string a ser procurada: ";
            std::string parametro;
            std::cin >> parametro;
            bool resultado = contains(str, parametro);
            std::cout << "Resultado: " << (resultado ? "true" : "false") << std::endl;
            break;
        }
        case 5: {
            std::cout << "Digite uma string para converter para maiúscula: ";
            std::cin >> str;
            std::string upperStr = toUpperCase(str);
            std::cout << "String em maiúscula: " << upperStr << std::endl;
            break;
        }
        case 6: {
            std::cout << "Digite uma string para converter para minúscula: ";
            std::cin >> str;
            std::string lowerStr = toLowerCase(str);
            std::cout << "String em minúscula: " << lowerStr << std::endl;
            break;
        }
        case 7: {
            std::cout << "Digite uma string para substituir caracteres: ";
            std::cin >> str;
            std::cout << "Digite o caractere original: ";
            char original;
            std::cin >> original;
            std::cout << "Digite o caractere novo: ";
            char novo;
            std::cin >> novo;
            std::string result = replace(str, original, novo);
            std::cout << "String substituída: " << result << std::endl;
            break;
        }
        case 8: {
            std::cout << "Digite uma string para criptografar: ";
            std::cin >> str;
            std::cout << "Digite o deslocamento: ";
            int shift;
            std::cin >> shift;
            std::string encrypted = encrypt(str, shift);
            std::cout << "String criptografada: " << encrypted << std::endl;
            break;
        }
        case 9: {
            std::cout << "Digite uma string para descriptografar: ";
            std::cin >> str;
            std::cout << "Digite o deslocamento: ";
            int shift;
            std::cin >> shift;
            std::string decrypted = decrypt(str, shift);
            std::cout << "String descriptografada: " << decrypted << std::endl;
            break;
        }
        case 10: {
            std::cout << "Digite uma string para dividir em tokens: ";
            std::cin >> str;
            std::string sequence[10];
            int count = split(str, sequence);
            std::cout << "Tokens: ";
            for (int i = 0; i < count; i++) {
                std::cout << sequence[i] << " ";
            }
            std::cout << std::endl;
            break;
        }
        default:
            std::cout << "Opção inválida!" << std::endl;
            break;
    }

    return 0;
}
