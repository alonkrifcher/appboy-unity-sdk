﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Alert
struct Alert_t1432;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
 void Alert__ctor_m5889 (Alert_t1432 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void Alert__ctor_m5890 (Alert_t1432 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::get_Level()
 uint8_t Alert_get_Level_m5891 (Alert_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::get_Description()
 uint8_t Alert_get_Description_m5892 (Alert_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsWarning()
 bool Alert_get_IsWarning_m5893 (Alert_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Alert::get_IsCloseNotify()
 bool Alert_get_IsCloseNotify_m5894 (Alert_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Alert::inferAlertLevel()
 void Alert_inferAlertLevel_m5895 (Alert_t1432 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.Alert::GetAlertMessage(Mono.Security.Protocol.Tls.AlertDescription)
 String_t* Alert_GetAlertMessage_m5896 (Object_t * __this/* static, unused */, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
