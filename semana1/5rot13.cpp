#include <string>
#include <iostream>

using namespace std;

#define a 97
#define m 109
#define z 122

#define A 65
#define M 77
#define Z 90

#define ROT_13_CONSTANT 13

// operation = 1 add
// operation = 0 subs
void appendEncryptedChar(char asciiCharacter, bool operation, string &result) {
  int encryptedAscii;
  operation ? 
    encryptedAscii = asciiCharacter + ROT_13_CONSTANT:
    encryptedAscii = asciiCharacter - ROT_13_CONSTANT;
  char encryptedAsciiChar = char (encryptedAscii);
  result += encryptedAsciiChar;
}

string rot13(string wordToEncrypt){
  string result = "";
  for (int c = 0; c < wordToEncrypt.size(); c++)
  {
    int asciiCharacter = int (wordToEncrypt[c]);
    if(
      (asciiCharacter >= a && asciiCharacter <= m) ||
      (asciiCharacter >= A && asciiCharacter <= M)
    ){
      appendEncryptedChar(asciiCharacter, true, result);
    } else if (
      (asciiCharacter > m && asciiCharacter <= z) || 
      (asciiCharacter > M && asciiCharacter <= Z)
    ){
      appendEncryptedChar(asciiCharacter, false, result);
    }
    else {
      result += wordToEncrypt[c];
    }
  }
  return result;
}

// parametros por referencia
int suma (int factor1, int factor2, int &respuesta){
  respuesta = factor1 + factor2;
  return 0;
}

int main(int argc, char const *argv[])
{
  int fa = 10;
  int fb = 5;
  int respuesta;

  suma(fa, fb, respuesta);
  cout << "respuesta: " << respuesta << endl;

  // "UBYN/"
  string hola = "Hola/"; 
  string encryptedWord = rot13(hola);
  cout << "Encrypted word: " << encryptedWord << endl;
  return 0;
}