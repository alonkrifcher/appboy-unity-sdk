﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1376;
// Mono.Security.ASN1
struct ASN1_t1373;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
 void ContentInfo__ctor_m5615 (ContentInfo_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
 void ContentInfo__ctor_m5616 (ContentInfo_t1376 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
 void ContentInfo__ctor_m5617 (ContentInfo_t1376 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
 void ContentInfo__ctor_m5618 (ContentInfo_t1376 * __this, ASN1_t1373 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
 ASN1_t1373 * ContentInfo_get_Content_m5619 (ContentInfo_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
 void ContentInfo_set_Content_m5620 (ContentInfo_t1376 * __this, ASN1_t1373 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
 String_t* ContentInfo_get_ContentType_m5621 (ContentInfo_t1376 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
