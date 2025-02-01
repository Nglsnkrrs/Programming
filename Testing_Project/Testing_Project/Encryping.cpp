#include "Encryping.h"

String^ Encryping::Encrypt(String^ Text, String^ key)
{
    array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
    array<Byte>^ iv = gcnew array<Byte>(16);  

    Aes^ aesAlg = Aes::Create();
    aesAlg->Key = keyBytes;
    aesAlg->IV = iv;

    ICryptoTransform^ encryptor = aesAlg->CreateEncryptor(aesAlg->Key, aesAlg->IV);

    array<Byte>^ inputBytes = Encoding::UTF8->GetBytes(Text);

    array<Byte>^ encryptedBytes = encryptor->TransformFinalBlock(inputBytes, 0, inputBytes->Length);
    return Convert::ToBase64String(encryptedBytes);
}

String^ Encryping::Decrypt(String^ Text, String^ key)
{
    array<Byte>^ keyBytes = Encoding::UTF8->GetBytes(key);
    array<Byte>^ iv = gcnew array<Byte>(16);

    Aes^ aesAlg = Aes::Create();
    aesAlg->Key = keyBytes;
    aesAlg->IV = iv;

    ICryptoTransform^ decryptor = aesAlg->CreateDecryptor(aesAlg->Key, aesAlg->IV);

    array<Byte>^ cipherBytes = Convert::FromBase64String(Text);

    array<Byte>^ decryptedBytes = decryptor->TransformFinalBlock(cipherBytes, 0, cipherBytes->Length);
    return Encoding::UTF8->GetString(decryptedBytes);
}

void Encryping::WriteEncryptedToFile(String^ encryptedText, String^ filePath)
{
    try
    {
        StreamWriter^ writer = gcnew StreamWriter(filePath, true);
        writer->WriteLine(encryptedText); 
        writer->Close(); 
    }
    catch (Exception^ e)
    {
        Console::WriteLine("Ошибка при записи в файл: " + e->Message);
    }
}

String^ Encryping::ReadEncryptedFromFile(String^ filePath)
{
    try
    {
        
        StreamReader^ reader = gcnew StreamReader(filePath);
        String^ encryptedText = reader->ReadToEnd();
        reader->Close();
        return encryptedText;
    }
    catch (Exception^ e)
    {
        Console::WriteLine("Ошибка при чтении файла: " + e->Message);
        return nullptr;
    }
}

bool Encryping::IsLoginExists(String^ login, String^ filePath)
{
    StreamReader^ reader = nullptr;
    bool isLoginTaken = false;

    String^ Key = "MySecretKey12345";

    String^ encrypt = Encrypt(login, Key);
    try
    {
        reader = gcnew StreamReader(filePath);
        String^ line;

        while ((line = reader->ReadLine()) != nullptr)
        {
            array<String^>^ userFields = line->Split(';');
            if (userFields->Length > 0 && userFields[0] == encrypt)
            {
                isLoginTaken = true;
                break;
            }
        }
    }
    finally
    {
        if (reader != nullptr)
        {
            reader->Close();
        }
    }

    return isLoginTaken;
}

bool Encryping::IsPasswordExists(String^ Pass, String^ filePath)
{
    StreamReader^ reader = nullptr;
    bool isLoginTaken = false;

    String^ Key = "MySecretKey12345";

    String^ encrypt = Encrypt(Pass, Key);
    try
    {
        reader = gcnew StreamReader(filePath);
        String^ line;

        while ((line = reader->ReadLine()) != nullptr)
        {
            array<String^>^ userFields = line->Split(';');
            if (userFields->Length > 0 && userFields[1] == encrypt)
            {
                isLoginTaken = true;
                break;
            }
        }
    }
    finally
    {
        if (reader != nullptr)
        {
            reader->Close();
        }
    }

    return isLoginTaken;
}


