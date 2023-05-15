#include <iostream>
using namespace std;

//declaro um array chamado 'salas' com capacidade para 6 elementos inteiros.
int main() {
    int salas[6] = {35, 4, 22, 20, 36, 30};
    int Alunos = 0;

//usado o 'for' para percorrer cada elemento do array 'salas', para no final do loop, terá o total de alunos de todas as salas.
    for (int i = 0; i < 6; i++) {
        Alunos += salas[i];
    }

//O operador "/" divide o valor de "Alunos" por 6, resultando em um valor inteiro. E é usado a função "static_cast<float>" para converter "Alunos" em um tipo de ponto flutuante antes da divisão, para obter uma média decimal precisa.
    float media = static_cast<float>(Alunos) / 6;

//monstra a frase ao usuario junto com a média calculada.
    cout << "A média de alunos por sala é: " << media << endl;

//aqui é  imprimido quais salas têm um número de alunos acima da média. Ele percorre novamente o array "salas" e verifica se o valor de cada sala é maior do que a média. Se for o caso, o número da sala (índice + 1) é impresso na saída padrão.
    cout << "Salas acima da média: ";
    for (int i = 0; i < 6; i++) {
        if (salas[i] > media) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}
