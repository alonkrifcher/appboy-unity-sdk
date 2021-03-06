﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3710;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t77;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Predicate`1<System.Object>
struct Predicate_1_t2759;
// System.Comparison`1<System.Object>
struct Comparison_1_t2760;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
 void IndexedSet_1__ctor_m19059_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m19059(__this, method) (void)IndexedSet_1__ctor_m19059_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19061_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19061(__this, method) (Object_t *)IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m19061_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
 void IndexedSet_1_Add_m19062_gshared (IndexedSet_1_t3710 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m19062(__this, ___item, method) (void)IndexedSet_1_Add_m19062_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
 bool IndexedSet_1_Remove_m19063_gshared (IndexedSet_1_t3710 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m19063(__this, ___item, method) (bool)IndexedSet_1_Remove_m19063_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
 Object_t* IndexedSet_1_GetEnumerator_m19065_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m19065(__this, method) (Object_t*)IndexedSet_1_GetEnumerator_m19065_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
 void IndexedSet_1_Clear_m19066_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m19066(__this, method) (void)IndexedSet_1_Clear_m19066_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
 bool IndexedSet_1_Contains_m19068_gshared (IndexedSet_1_t3710 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m19068(__this, ___item, method) (bool)IndexedSet_1_Contains_m19068_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void IndexedSet_1_CopyTo_m19070_gshared (IndexedSet_1_t3710 * __this, ObjectU5BU5D_t112* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m19070(__this, ___array, ___arrayIndex, method) (void)IndexedSet_1_CopyTo_m19070_gshared((IndexedSet_1_t3710 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
 int32_t IndexedSet_1_get_Count_m19071_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m19071(__this, method) (int32_t)IndexedSet_1_get_Count_m19071_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
 bool IndexedSet_1_get_IsReadOnly_m19073_gshared (IndexedSet_1_t3710 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m19073(__this, method) (bool)IndexedSet_1_get_IsReadOnly_m19073_gshared((IndexedSet_1_t3710 *)__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
 int32_t IndexedSet_1_IndexOf_m19075_gshared (IndexedSet_1_t3710 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m19075(__this, ___item, method) (int32_t)IndexedSet_1_IndexOf_m19075_gshared((IndexedSet_1_t3710 *)__this, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
 void IndexedSet_1_Insert_m19077_gshared (IndexedSet_1_t3710 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m19077(__this, ___index, ___item, method) (void)IndexedSet_1_Insert_m19077_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
 void IndexedSet_1_RemoveAt_m19079_gshared (IndexedSet_1_t3710 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m19079(__this, ___index, method) (void)IndexedSet_1_RemoveAt_m19079_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * IndexedSet_1_get_Item_m19080_gshared (IndexedSet_1_t3710 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m19080(__this, ___index, method) (Object_t *)IndexedSet_1_get_Item_m19080_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
 void IndexedSet_1_set_Item_m19082_gshared (IndexedSet_1_t3710 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m19082(__this, ___index, ___value, method) (void)IndexedSet_1_set_Item_m19082_gshared((IndexedSet_1_t3710 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 void IndexedSet_1_RemoveAll_m19083_gshared (IndexedSet_1_t3710 * __this, Predicate_1_t2759 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m19083(__this, ___match, method) (void)IndexedSet_1_RemoveAll_m19083_gshared((IndexedSet_1_t3710 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
 void IndexedSet_1_Sort_m19084_gshared (IndexedSet_1_t3710 * __this, Comparison_1_t2760 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m19084(__this, ___sortLayoutFunction, method) (void)IndexedSet_1_Sort_m19084_gshared((IndexedSet_1_t3710 *)__this, (Comparison_1_t2760 *)___sortLayoutFunction, method)
