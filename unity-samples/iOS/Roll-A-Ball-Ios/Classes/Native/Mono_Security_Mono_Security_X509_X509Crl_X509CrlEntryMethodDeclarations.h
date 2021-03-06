﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1412;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1405;
// Mono.Security.ASN1
struct ASN1_t1373;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
 void X509CrlEntry__ctor_m5796 (X509CrlEntry_t1412 * __this, ASN1_t1373 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
 ByteU5BU5D_t97* X509CrlEntry_get_SerialNumber_m5797 (X509CrlEntry_t1412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
 DateTime_t837  X509CrlEntry_get_RevocationDate_m5798 (X509CrlEntry_t1412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
 X509ExtensionCollection_t1405 * X509CrlEntry_get_Extensions_m5799 (X509CrlEntry_t1412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
