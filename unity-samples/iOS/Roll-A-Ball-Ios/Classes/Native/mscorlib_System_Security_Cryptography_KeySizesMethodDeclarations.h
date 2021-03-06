﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.KeySizes
struct KeySizes_t1512;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1394;

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
 void KeySizes__ctor_m6450 (KeySizes_t1512 * __this, int32_t ___minSize, int32_t ___maxSize, int32_t ___skipSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
 int32_t KeySizes_get_MaxSize_m10667 (KeySizes_t1512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
 int32_t KeySizes_get_MinSize_m10668 (KeySizes_t1512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
 int32_t KeySizes_get_SkipSize_m10669 (KeySizes_t1512 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
 bool KeySizes_IsLegal_m10670 (KeySizes_t1512 * __this, int32_t ___keySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
 bool KeySizes_IsLegalKeySize_m10671 (Object_t * __this/* static, unused */, KeySizesU5BU5D_t1394* ___legalKeys, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
