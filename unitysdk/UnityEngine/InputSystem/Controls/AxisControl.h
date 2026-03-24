#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl_Clamp.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x1A570A00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1A570B20)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1A5708A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1A570670)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1A570910)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET UNITYSDK_OFFSET(0x1A5707B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1A570940)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A570850)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AxisControl_TypeDefinitionIndex = 28833;

	class AxisControl : public ::UnityEngine::InputSystem::InputControl_1<::System::Single>
	{
	public:
		::System::Single normalizeMax; // 0xF0
		::System::Single normalizeZero; // 0xF4
		::UnityEngine::InputSystem::Controls::AxisControl_Clamp clamp; // 0xF8
		::System::Single normalizeMin; // 0xFC
		::System::Single clampMax; // 0x100
		::System::Single clampMin; // 0x104
		::System::Single clampConstant; // 0x108
		::System::Boolean scale; // 0x10C
		::System::Boolean normalize; // 0x10D
		::System::Boolean invert; // 0x10E
		::System::Single scaleFactor; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET))(this);
		}

		::System::Single Preprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET))(this, value);
		}

		::System::Single Unpreprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Single value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Boolean CompareValue(::System::Void* firstStatePtr, ::System::Void* secondStatePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET))(this, firstStatePtr, secondStatePtr);
		}

		::System::Single EvaluateMagnitude(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}
