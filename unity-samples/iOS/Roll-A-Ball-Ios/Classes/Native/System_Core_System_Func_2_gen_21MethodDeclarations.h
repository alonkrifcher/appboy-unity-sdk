﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t269;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityTest.TestResult
struct TestResult_t232;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityTest.TestResult,System.String>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Object>
#include "System_Core_System_Func_2_gen_5MethodDeclarations.h"
#define Func_2__ctor_m1539(__this, ___object, ___method, method) (void)Func_2__ctor_m15656_gshared((Func_2_t326 *)__this, (Object_t *)___object, (IntPtr_t107)___method, method)
// TResult System.Func`2<UnityTest.TestResult,System.String>::Invoke(T)
#define Func_2_Invoke_m16400(__this, ___arg1, method) (String_t*)Func_2_Invoke_m15658_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, method)
// System.IAsyncResult System.Func`2<UnityTest.TestResult,System.String>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m16401(__this, ___arg1, ___callback, ___object, method) (Object_t *)Func_2_BeginInvoke_m15660_gshared((Func_2_t326 *)__this, (Object_t *)___arg1, (AsyncCallback_t473 *)___callback, (Object_t *)___object, method)
// TResult System.Func`2<UnityTest.TestResult,System.String>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m16402(__this, ___result, method) (String_t*)Func_2_EndInvoke_m15662_gshared((Func_2_t326 *)__this, (Object_t *)___result, method)
