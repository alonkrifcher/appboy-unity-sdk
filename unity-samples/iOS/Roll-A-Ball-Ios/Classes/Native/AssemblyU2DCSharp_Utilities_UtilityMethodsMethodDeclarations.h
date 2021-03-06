﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Utilities.UtilityMethods
struct UtilityMethods_t133;
// System.String
struct String_t;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void Utilities.UtilityMethods::.ctor()
 void UtilityMethods__ctor_m652 (UtilityMethods_t133 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::textIsValid(System.String)
 bool UtilityMethods_textIsValid_m653 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToInt(System.String,System.String,System.Int32&)
 bool UtilityMethods_ParseStringToInt_m654 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___ErrorDescription, int32_t* ___ParsedInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToDecimal(System.String,System.String,System.Decimal&)
 bool UtilityMethods_ParseStringToDecimal_m655 (Object_t * __this/* static, unused */, String_t* ___text, String_t* ___ErrorDescription, Decimal_t5 * ___ParsedDecimal, MethodInfo* method) IL2CPP_METHOD_ATTR;
