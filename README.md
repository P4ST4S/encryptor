# Encryptor

Encryptor is software made for encrypt and decrypt string character. It's an Ecole 89's projet's

## Prototype of all th encryptor

`unsigned int std_hash (char *data, size_t len);`

`void std_caesar(char *data, size_t len, char *key);`

`void std_xor (char *data, size_t len, char *key);`

`void std_shaker(char *cnt, size_t len, char *key, bool cipher);`

`void std_bitshake(char *cnt, size_t len, char *key, bool cipher);`

`void std_bytbit(char *cnt, size_t len);`

`void std_switch(char *cnt, size_t len, const char *key, bool cipher);`

## Helper

-d “destination”
Allows you to choose the destination file if you want
the result is placed in a file, otherwise the base
result will be displayed in the terminal.

-s “source”
Lets you choose a source file if you want
that we encrypt a file.
Otherwise basic you have to read the terminal.

-e “encryptor”
« HASH | CAESAR | XOR | BITSHAKE | BYTBIT | SHAKER | SWITCH »
Allows you to choose the encryption you want
use.

-p allows you to put a preview, so this displays in
the terminal the result before saving or not!
You are asked for validation and you must write ok for
save it!

-c “true/false”
allows you to set the cipher to true or false for
allow to encrypt or decrypt!

-k “key”
allows you to choose a keyword to encrypt, if the
flag is not there you have to request it in the terminal
