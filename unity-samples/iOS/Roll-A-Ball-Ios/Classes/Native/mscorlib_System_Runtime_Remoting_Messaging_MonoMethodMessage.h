﻿#pragma once
#include <stdint.h>
// System.Reflection.MonoMethod
struct MonoMethod_t1983;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2062;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t71;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t2052  : public Object_t
{
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t1983 * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t112* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t97* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t2062 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Object_t * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t71 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t146* ___methodSignature_7;
};
