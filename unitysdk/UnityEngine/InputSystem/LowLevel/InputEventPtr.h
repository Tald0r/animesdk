#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x922AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET UNITYSDK_OFFSET(0x922A80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x1A58C070)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET UNITYSDK_OFFSET(0x1A58C060)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x922790)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x922620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET UNITYSDK_OFFSET(0x9226C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9228D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x922770)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET UNITYSDK_OFFSET(0x922970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET UNITYSDK_OFFSET(0x922A00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x9229F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET UNITYSDK_OFFSET(0x922820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x922760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET UNITYSDK_OFFSET(0x2D41A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET UNITYSDK_OFFSET(0x922A10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A58C030)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A58BF60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A58C050)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A58C040)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x9227B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x922640)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET UNITYSDK_OFFSET(0x9226E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x9228F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET UNITYSDK_OFFSET(0x922840)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET UNITYSDK_OFFSET(0x21C7C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x922A40)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR__CTOR_OFFSET UNITYSDK_OFFSET(0x2C3980)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventPtr_TypeDefinitionIndex = 27802;

	struct alignas(8) InputEventPtr
	{
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_EventPtr; // 0x10

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR__CTOR_OFFSET))(this, eventPtr);
		}

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_VALID_OFFSET))(this);
		}

		::System::Boolean get_handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_HANDLED_OFFSET))(this);
		}

		::System::Void set_handled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_HANDLED_OFFSET))(this, value);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_ID_OFFSET))(this, value);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TYPE_OFFSET))(this);
		}
		*/

		::System::UInt32 get_sizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_deviceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_TIME_OFFSET))(this, value);
		}

		::System::Double get_internalTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_INTERNALTIME_OFFSET))(this);
		}

		::System::Void set_internalTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_SET_INTERNALTIME_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::LowLevel::InputEvent* get_data()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_DATA_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_stateFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEFORMAT_OFFSET))(this);
		}
		*/

		::System::UInt32 get_stateSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATESIZEINBYTES_OFFSET))(this);
		}

		::System::UInt32 get_stateOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GET_STATEOFFSET_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventPtr Next()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_NEXT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOSTRING_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEvent* ToPointer()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_TOPOINTER_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::InputSystem::LowLevel::InputEventPtr other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::InputSystem::LowLevel::InputEventPtr left, ::UnityEngine::InputSystem::LowLevel::InputEventPtr right)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_INEQUALITY_OFFSET))(left, right);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEventPtr op_Implicit(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_OFFSET))(eventPtr);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEventPtr From(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROM_OFFSET))(eventPtr);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEvent* op_Implicit_1(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_OP_IMPLICIT_1_OFFSET))(eventPtr);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEvent* FromInputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTPTR_FROMINPUTEVENTPTR_OFFSET))(eventPtr);
		}
	};
}
