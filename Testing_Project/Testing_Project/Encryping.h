#pragma once
using namespace System;
using namespace System::Security::Cryptography;
using namespace System::Text;
using namespace System::IO;
public ref class Encryping
{
public:

    static String^ Encrypt(String^ Text, String^ key);
    static String^ Decrypt(String^ Text, String^ key);
    static void WriteEncryptedToFile(String^ encryptedText, String^ filePath);
    static String^ ReadEncryptedFromFile(String^ filePath);
    static bool IsLoginExists(String^ login_Pas, String^ filePath);
    static bool IsPasswordExists(String^ login_Pas, String^ filePath);
};

