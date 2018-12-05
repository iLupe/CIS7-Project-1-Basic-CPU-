// Jonathan Carreon
// CIS7
// Project: Case Project 3 (Encryption)
// Team Name: Basic CPU
#include <iostream>
using namespace std;

string generateKey(string text, string key)
{
  int v = text.size();

  for (int i = 0; ; i++)
  {
    if (v == i)
      i = 0;
    if (key.size() == text.size())
      break;
    key.push_back(key[i]);
  }
  return key; 
}

string cipherText(string text, string key)
{
  string cipher_text;

  for (int i = 0; i < text.size(); i++)
  {
    int v = (text[i] + key[i]) %26;

    v += 'A';

    cipher_text.push_back(v);
  }
  return cipher_text;
}

// Use 'WEWILLTRY' as Plaintext
// Use 'WOW' as keyword
int main()
{
  string text, keyWord;

  cout << "Insert Plaintext: ";
  cin >> text;

  cout << "Insert Keyword: ";
  cin >> keyWord;

  string key = generateKey(text, keyWord);
  string cipher_text = cipherText(text, key);

  cout << "Ciphertext: " << cipher_text << "\n";

  return 0;
}

***************************************************************
hhhhh
