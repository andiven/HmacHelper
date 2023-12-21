// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "picohash/picohash.h"

/**
 * 
 */
class HMACHELPER_API Picohash
{
public:
	// 计算MD5哈希
	static FString MD5(const FString& Input);

	// 计算SHA1哈希
	static FString SHA1(const FString& Input);

	// 计算SHA224哈希
	static FString SHA224(const FString& Input);

	// 计算SHA256哈希
	static FString SHA256(const FString& Input);

	// 计算HMAC-MD5
	static FString HMAC_MD5(const FString& Message, const FString& Key);

	// 计算HMAC-SHA1
	static FString HMAC_SHA1(const FString& Message, const FString& Key);

	// 计算HMAC-SHA224
	static FString HMAC_SHA224(const FString& Message, const FString& Key);

	// 计算HMAC-SHA256
	static FString HMAC_SHA256(const FString& Message, const FString& Key);

	// 计算HMAC-MD5 Base64
	static FString HMAC_MD5Base64(const FString& Message, const FString& Key);

	// 计算HMAC-SHA1 Base64
	static FString HMAC_SHA1Base64(const FString& Message, const FString& Key);

	// 计算HMAC-SHA224 Base64
	static FString HMAC_SHA224Base64(const FString& Message, const FString& Key);

	// 计算HMAC-SHA256 Base64
	static FString HMAC_SHA256Base64(const FString& Message, const FString& Key);

private:
	static FString BytesToHex(const uint8* Bytes, int32 Length);

	static FString BytesToBase64(const uint8* Bytes, int32 Length);
};
