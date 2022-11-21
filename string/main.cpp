#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

const string VOWEL = "aiueoAIUEO";
const string CONSONANT = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
const string LETTER = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 256

void how_many_vowel(string str);         // 8.a
void how_many_consonant(string str);     // 8.b
void how_many_besides_str(string str);   // 8.c
void reverse_rekursif(string str);       // 9.a
string reverse_iteratif(string str);     // 9.a
void isPalindrome(string str);           // 10.a

// 8.d Algoritma Utama
int main() {
  string str;
  cout << endl 
       << "Masukan kata: "; 
  cin  >> str; cout << endl;
  how_many_vowel(str);
  how_many_consonant(str);
  cout << endl;
}

/* **************** FUNGSI **************** */

// 8.a Fungsi menghitung banyak nya huruf vokal didalam string
void how_many_vowel(string str) {
  int str_length = str.length();
  int vowel_counted = 0;
  for(int i = 0; i < str_length; i++) {
    for(int j = 0; j < VOWEL.length(); j++) {
      if(str[i] == VOWEL[j]) {
        vowel_counted = vowel_counted + 1;
      }
    }
  }
  cout << "Ada "
       << vowel_counted
       << " huruf vokal didalam: "
       << str
       << endl;
       isPalindrome(str);
       how_many_besides_str(str);
  cout << "Reverse iteratif: "
       << reverse_iteratif(str) 
       << endl
       << "Reverse rekursif: ";
       reverse_rekursif(str);
  cout << endl << endl;
}

// 8.b Fungsi menghitung banyak nya huruf mati didalam string
void how_many_consonant(string str) {
  int str_length = str.length();
  int consonant_counted = 0;
  for(int i = 0; i < str_length; i++) {
    for(int j = 0; j < CONSONANT.length(); j++) {
      if(str[i] == CONSONANT[j]) {
        consonant_counted = consonant_counted + 1;
      }
    }
  }
  cout << "Ada "
       << consonant_counted
       << " huruf mati didalam: "
       << str
       << endl;
       isPalindrome(str);
       how_many_besides_str(str);
  cout << "Reverse iteratif: "
       << reverse_iteratif(str) 
       << endl
       << "Reverse rekursif: ";
       reverse_rekursif(str);
  cout << endl;
}

// 8.c Fungsi untuk menghitung banyaknya karakter selain huruf yang ada dalam sebuah string.
void how_many_besides_str(string str) {
  // cout << "Ada "
  //      << char_besides_str << " karakter selain yang ada di dalam: "
  //      << "'" << str << "'"
  //      << endl;
}

// 9.a Fungsi Reverse
void reverse_rekursif(string str) {
  int strlen = str.length();
  if(strlen == 0)
    return;
  else 
    cout << str[strlen - 1];
    reverse_rekursif(str.substr(0, strlen - 1));
}

string reverse_iteratif(string str) {
  int strlen = str.length();
  int i;
  int j = 0;
  char reversed[strlen];
  string new_str;
  for(i = strlen; i >= 0; i--) {
    reversed[j] = str[i];
    new_str = new_str + reversed[j];
    j++;
  }
  return new_str;
}

// 10.a Fungsi menentukan palindrome
void isPalindrome(string str) {
  int strlen = str.length();
  int flag = 0;
  for(int i = 0; i < strlen; i++){
    if(str[i] != str [strlen - i - 1]){
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    cout << "(*** Bukan Palindrome ***)"
         << endl;
  else 
    cout << "(*** Palindrome ***)" 
         << endl;
}