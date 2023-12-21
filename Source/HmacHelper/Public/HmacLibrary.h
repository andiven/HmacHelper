// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Picohash.h"
#include "HmacLibrary.generated.h"

/**
 * cn: 用于蓝图的HMAC算法及常用工具库
 * en: A library of HMAC algorithms and common utilities for blueprint
 */
UCLASS()
class HMACHELPER_API UHmacLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
#pragma region Utility
	// BytesToHex
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString BytesToHex(const TArray<uint8>& Bytes);

	// HexToBytes
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static TArray<uint8> HexToBytes(const FString& Hex);
	
	// BytesToBase64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString BytesToBase64(const TArray<uint8>& Bytes);

	// Base64ToBytes
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static TArray<uint8> Base64ToBytes(const FString& Base64);

	// StringToBase64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString StringToBase64(const FString& String);

	// Base64ToString
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString Base64ToString(const FString& Base64);

	// StringToHex
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString StringToHex(const FString& String);

	// HexToString
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HexToString(const FString& Hex);

	// StringToBytes
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static TArray<uint8> StringToBytes(const FString& String);

	// BytesToString
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString BytesToString(const TArray<uint8>& Bytes);
#pragma endregion

	
#pragma region Algorithms
	// MD5
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString MD5(const FString& Message);

	// SHA1
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString SHA1(const FString& Message);

	// SHA224
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString SHA224(const FString& Message);

	// SHA256
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString SHA256(const FString& Message);
#pragma endregion

#pragma region HMAC
	// HMAC-MD5
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_MD5(const FString& Message, const FString& Key);

	// HMAC-MD5 Base64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_MD5Base64(const FString& Message, const FString& Key);

	// HMAC-SHA1
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA1(const FString& Message, const FString& Key);

	// HMAC-SHA1 Base64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA1Base64(const FString& Message, const FString& Key);

	// HMAC-SHA224
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA224(const FString& Message, const FString& Key);

	// HMAC-SHA224 Base64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA224Base64(const FString& Message, const FString& Key);

	// HMAC-SHA256
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA256(const FString& Message, const FString& Key);

	// HMAC-SHA256 Base64
	UFUNCTION(BlueprintCallable, Category = "HmacHelper")
	static FString HMAC_SHA256Base64(const FString& Message, const FString& Key);
#pragma endregion
};
