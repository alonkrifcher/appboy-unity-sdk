﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>
struct Func_2_t253;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m1481 (Func_2_t253 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>::Invoke(T)
 int32_t Func_2_Invoke_m16348 (Func_2_t253 * __this, KeyValuePair_2_t257  ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m16349 (Func_2_t253 * __this, KeyValuePair_2_t257  ___arg1, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Func_2_EndInvoke_m16350 (Func_2_t253 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
