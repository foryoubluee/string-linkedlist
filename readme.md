# PSEUDO CODE STRING

Aryasena Putra | 825220185

### Declare Constant variable
```
const string VOWEL = "aiueoAIUEO";
const string CONSONANT = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
const string LETTER = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
```

### Declare Function
```
how_many_vowel(string str) -> void;         // 8.a
how_many_consonant(string str) -> void;     // 8.b
how_many_besides_str(string str) -> void;   // 8.c
reverse_rekursif(string str) -> void;       // 9.a
reverse_iteratif(string str) -> string;     // 9.a
isPalindrome(string str) -> void;           // 10.a
```

### Main Algorithm
#### [Start]
```
// 8.d, 9.b, 10.b Algoritma Utama
main() -> int {
  string str;
  Display << endl 
          << "Masukan kata: "; 
  Write   >> str; 
  Display << endl;
  how_many_vowel(str);
  how_many_consonant(str);
  Display << endl;
  return 0;
}
```
#### [Halt]

### Define Function
```
// 8.a Fungsi menghitung banyak nya huruf vokal didalam string
how_many_vowel(string str) {
  int str_length = str.length();
  int vowel_counted = 0;
  for(int i = 0; i < str_length; i++) {
    for(int j = 0; j < VOWEL.length(); j++) {
      if(str[i] == VOWEL[j]) {
        vowel_counted = vowel_counted + 1;
      }
    }
  }
  Display << "Ada "
          << vowel_counted
          << " huruf vokal didalam: "
          << str
          << endl;
          isPalindrome(str);
          how_many_besides_str(str);
  Display << "Reverse iteratif: "
          << reverse_iteratif(str) 
          << endl
          << "Reverse rekursif: ";
          reverse_rekursif(str);
  Display << endl << endl;
}

// 8.b Fungsi menghitung banyak nya huruf mati didalam string
how_many_consonant(string str) {
  int str_length = str.length();
  int consonant_counted = 0;
  for(int i = 0; i < str_length; i++) {
    for(int j = 0; j < CONSONANT.length(); j++) {
      if(str[i] == CONSONANT[j]) {
        consonant_counted = consonant_counted + 1;
      }
    }
  }
  Display << "Ada "
          << consonant_counted
          << " huruf mati didalam: "
          << str
          << endl;
          isPalindrome(str);
          how_many_besides_str(str);
  Display << "Reverse iteratif: "
          << reverse_iteratif(str) 
          << endl
          << "Reverse rekursif: ";
          reverse_rekursif(str);
  Display << endl;
}

// 8.c Fungsi untuk menghitung banyaknya karakter selain huruf yang ada dalam sebuah string.
how_many_besides_str(string str) {
  // Display << "Ada "
  //          << char_besides_str << " karakter selain yang ada di dalam: "
  //          << "'" << str << "'"
  //          << endl;
}

// 9.a Fungsi Reverse
reverse_rekursif(string str) {
  int strlen = str.length();
  if(strlen == 0)
    return;
  else 
    Display << str[strlen - 1];
    reverse_rekursif(str.substr(0, strlen - 1));
}

reverse_iteratif(string str) {
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
isPalindrome(string str) {
  int strlen = str.length();
  int flag = 0;
  for(int i = 0; i < strlen; i++){
    if(str[i] != str [strlen - i - 1]){
      flag = 1;
      break;
    }
  }
  if (flag == 1)
    Display << "(*** Bukan Palindrome ***)"
            << endl;
  else 
    Display << "(*** Palindrome ***)" 
            << endl;
}
```