﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t527;
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t520;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode
#include "UnityEngine_UI_UnityEngine_EventSystems_StandaloneInputModul.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.EventSystems.StandaloneInputModule::.ctor()
 void StandaloneInputModule__ctor_m2215 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.StandaloneInputModule/InputMode UnityEngine.EventSystems.StandaloneInputModule::get_inputMode()
 int32_t StandaloneInputModule_get_inputMode_m2216 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::get_allowActivationOnMobileDevice()
 bool StandaloneInputModule_get_allowActivationOnMobileDevice_m2217 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_allowActivationOnMobileDevice(System.Boolean)
 void StandaloneInputModule_set_allowActivationOnMobileDevice_m2218 (StandaloneInputModule_t527 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.StandaloneInputModule::get_inputActionsPerSecond()
 float StandaloneInputModule_get_inputActionsPerSecond_m2219 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_inputActionsPerSecond(System.Single)
 void StandaloneInputModule_set_inputActionsPerSecond_m2220 (StandaloneInputModule_t527 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_horizontalAxis()
 String_t* StandaloneInputModule_get_horizontalAxis_m2221 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_horizontalAxis(System.String)
 void StandaloneInputModule_set_horizontalAxis_m2222 (StandaloneInputModule_t527 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_verticalAxis()
 String_t* StandaloneInputModule_get_verticalAxis_m2223 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_verticalAxis(System.String)
 void StandaloneInputModule_set_verticalAxis_m2224 (StandaloneInputModule_t527 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_submitButton()
 String_t* StandaloneInputModule_get_submitButton_m2225 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_submitButton(System.String)
 void StandaloneInputModule_set_submitButton_m2226 (StandaloneInputModule_t527 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.StandaloneInputModule::get_cancelButton()
 String_t* StandaloneInputModule_get_cancelButton_m2227 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::set_cancelButton(System.String)
 void StandaloneInputModule_set_cancelButton_m2228 (StandaloneInputModule_t527 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::UpdateModule()
 void StandaloneInputModule_UpdateModule_m2229 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::IsModuleSupported()
 bool StandaloneInputModule_IsModuleSupported_m2230 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::ShouldActivateModule()
 bool StandaloneInputModule_ShouldActivateModule_m2231 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ActivateModule()
 void StandaloneInputModule_ActivateModule_m2232 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::DeactivateModule()
 void StandaloneInputModule_DeactivateModule_m2233 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::Process()
 void StandaloneInputModule_Process_m2234 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendSubmitEventToSelectedObject()
 bool StandaloneInputModule_SendSubmitEventToSelectedObject_m2235 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::AllowMoveEventProcessing(System.Single)
 bool StandaloneInputModule_AllowMoveEventProcessing_m2236 (StandaloneInputModule_t527 * __this, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::GetRawMoveVector()
 Vector2_t184  StandaloneInputModule_GetRawMoveVector_m2237 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendMoveEventToSelectedObject()
 bool StandaloneInputModule_SendMoveEventToSelectedObject_m2238 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMouseEvent()
 void StandaloneInputModule_ProcessMouseEvent_m2239 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::UseMouse(System.Boolean,System.Boolean,UnityEngine.EventSystems.PointerEventData)
 bool StandaloneInputModule_UseMouse_m2240 (Object_t * __this/* static, unused */, bool ___pressed, bool ___released, PointerEventData_t461 * ___pointerData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::SendUpdateEventToSelectedObject()
 bool StandaloneInputModule_SendUpdateEventToSelectedObject_m2241 (StandaloneInputModule_t527 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.StandaloneInputModule::ProcessMousePress(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
 void StandaloneInputModule_ProcessMousePress_m2242 (StandaloneInputModule_t527 * __this, MouseButtonEventData_t520 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
