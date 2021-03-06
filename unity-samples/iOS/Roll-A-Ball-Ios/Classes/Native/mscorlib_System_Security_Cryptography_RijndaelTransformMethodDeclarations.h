﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2156;
// System.Security.Cryptography.Rijndael
struct Rijndael_t1531;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.UInt32[]
struct UInt32U5BU5D_t1365;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m10773 (RijndaelTransform_t2156 * __this, Rijndael_t1531 * ___algo, bool ___encryption, ByteU5BU5D_t97* ___key, ByteU5BU5D_t97* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m10774 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m10775 (RijndaelTransform_t2156 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m10776 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m10777 (RijndaelTransform_t2156 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m10778 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m10779 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m10780 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m10781 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m10782 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m10783 (RijndaelTransform_t2156 * __this, ByteU5BU5D_t97* ___indata, ByteU5BU5D_t97* ___outdata, UInt32U5BU5D_t1365* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
