﻿#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t195;
// UnityEngine.GameObject
struct GameObject_t140;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// UnityTest.MemberResolver
struct MemberResolver_t143  : public Object_t
{
	// System.Object UnityTest.MemberResolver::m_CallingObjectRef
	Object_t * ___m_CallingObjectRef_0;
	// System.Reflection.MemberInfo[] UnityTest.MemberResolver::m_Callstack
	MemberInfoU5BU5D_t195* ___m_Callstack_1;
	// UnityEngine.GameObject UnityTest.MemberResolver::m_GameObject
	GameObject_t140 * ___m_GameObject_2;
	// System.String UnityTest.MemberResolver::m_Path
	String_t* ___m_Path_3;
};
