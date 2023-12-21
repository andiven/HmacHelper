// Fill out your copyright notice in the Description page of Project Settings.


#include "HmacLibrary.h"


#pragma region Utility 
FString UHmacLibrary::BytesToHex(const TArray<uint8>& Bytes)
{
	return Bytes.Num() > 0 ? FString::FromHexBlob(Bytes.GetData(), Bytes.Num()) : FString();
}

TArray<uint8> UHmacLibrary::HexToBytes(const FString& Hex)
{
	TArray<uint8> Bytes;
	Bytes.Init(0, Hex.Len() / 2);
	for (int32 Index = 0; Index < Hex.Len(); Index += 2)
	{
		FString ByteString = Hex.Mid(Index, 2);
		uint8 Byte = FParse::HexNumber(*ByteString);
		Bytes[Index / 2] = Byte;
	}
	return Bytes;
}

TArray<uint8> UHmacLibrary::StringToBytes(const FString& String)
{
	TArray<uint8> Bytes;
	Bytes.Append(reinterpret_cast<const uint8*>(TCHAR_TO_UTF8(*String)), String.Len());
	return Bytes;
}

FString UHmacLibrary::BytesToString(const TArray<uint8>& Bytes)
{
	FString String;
	String.AppendChars(reinterpret_cast<const TCHAR*>(Bytes.GetData()), Bytes.Num());
	return String;
}

FString UHmacLibrary::BytesToBase64(const TArray<uint8>& Bytes)
{
	return FBase64::Encode(Bytes);
}

TArray<uint8> UHmacLibrary::Base64ToBytes(const FString& Base64)
{
	TArray<uint8> Bytes;
	FBase64::Decode(Base64, Bytes);
	return Bytes;
}

FString UHmacLibrary::StringToBase64(const FString& String)
{
	return FBase64::Encode(String);
}

FString UHmacLibrary::Base64ToString(const FString& Base64)
{
	FString DecodedString;
	FBase64::Decode(Base64, DecodedString);
	return DecodedString;
}

FString UHmacLibrary::StringToHex(const FString& String)
{
	return BytesToHex(StringToBytes(String));
}

FString UHmacLibrary::HexToString(const FString& Hex)
{
	return BytesToString(HexToBytes(Hex));
}
#pragma endregion


#pragma region Algorithms
FString UHmacLibrary::MD5(const FString& Message)
{
	return Picohash::MD5(Message);
}

FString UHmacLibrary::SHA1(const FString& Message)
{
	return Picohash::SHA1(Message); 
}

FString UHmacLibrary::SHA224(const FString& Message)
{
	return Picohash::SHA224(Message); 
}

FString UHmacLibrary::SHA256(const FString& Message)
{
	return Picohash::SHA256(Message); 
}
#pragma endregion


#pragma region HMAC
FString UHmacLibrary::HMAC_MD5(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_MD5(Message, Key); 
}

FString UHmacLibrary::HMAC_MD5Base64(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_MD5Base64(Message, Key); 
}

FString UHmacLibrary::HMAC_SHA1(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA1(Message, Key); 
}

FString UHmacLibrary::HMAC_SHA1Base64(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA1Base64(Message, Key); 
}

FString UHmacLibrary::HMAC_SHA224(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA224(Message, Key); 
}

FString UHmacLibrary::HMAC_SHA224Base64(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA224Base64(Message, Key);
}

FString UHmacLibrary::HMAC_SHA256(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA256(Message, Key); 
}

FString UHmacLibrary::HMAC_SHA256Base64(const FString& Message, const FString& Key)
{
	return Picohash::HMAC_SHA256Base64(Message, Key); 
}
#pragma endregion