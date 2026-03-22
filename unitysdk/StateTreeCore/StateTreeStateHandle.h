#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STATETREECORE_STATETREESTATEHANDLE_DESCRIBE_OFFSET UNITYSDK_OFFSET(0x8ECD50)
#define STATETREECORE_STATETREESTATEHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x843680)
#define STATETREECORE_STATETREESTATEHANDLE_FROMCOMPLETIONSTATUS_OFFSET UNITYSDK_OFFSET(0x19BDB4B0)
#define STATETREECORE_STATETREESTATEHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3305B0)
#define STATETREECORE_STATETREESTATEHANDLE_GET_ISCOMPLETIONSTATE_OFFSET UNITYSDK_OFFSET(0x8ECC80)
#define STATETREECORE_STATETREESTATEHANDLE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x8ECC70)
#define STATETREECORE_STATETREESTATEHANDLE_ISVALIDINDEX_OFFSET UNITYSDK_OFFSET(0x19BE9E60)
#define STATETREECORE_STATETREESTATEHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19BD7C30)
#define STATETREECORE_STATETREESTATEHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19BE5D60)
#define STATETREECORE_STATETREESTATEHANDLE_TOCOMPLETIONSTATUS_OFFSET UNITYSDK_OFFSET(0x8ECD20)
#define STATETREECORE_STATETREESTATEHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BE9F60)
#define STATETREECORE_STATETREESTATEHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8ECC90)
#define STATETREECORE_STATETREESTATEHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3305D0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeStateHandle_TypeDefinitionIndex = 26983;

	struct alignas(2) StateTreeStateHandle
	{
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Succeeded()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x4A70);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Root()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x4A72);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Failed()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x4A74);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Stopped()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x4A76);
		}
		static ::StateTreeCore::StateTreeStateHandle* StaticGet_Invalid()
		{
			return (::StateTreeCore::StateTreeStateHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeStateHandle_TypeDefinitionIndex)->GetStaticField(0x4A78);
		}
		// static const ::System::UInt16 InvalidIndex = 0xFFFF; // 0x0
		// static const ::System::UInt16 SucceededIndex = 0xFFFE; // 0x0
		// static const ::System::UInt16 FailedIndex = 0xFFFD; // 0x0
		// static const ::System::UInt16 StoppedIndex = 0xFFFC; // 0x0
		// static const ::System::UInt16 RootIndex = 0x0; // 0x0
		::System::UInt16 Index; // 0x10

		::System::Void _ctor(::System::UInt16 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CTOR_OFFSET))(this, index);
		}

		::System::Void _ctor_1(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CTOR_1_OFFSET))(this, index);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsCompletionState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GET_ISCOMPLETIONSTATE_OFFSET))(this);
		}

		static ::System::Boolean IsValidIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_ISVALIDINDEX_OFFSET))(index);
		}

		::StateTreeCore::StateTreeRunStatus ToCompletionStatus()
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_TOCOMPLETIONSTATUS_OFFSET))(this);
		}

		static ::StateTreeCore::StateTreeStateHandle FromCompletionStatus(::StateTreeCore::StateTreeRunStatus status)
		{
			return ((::StateTreeCore::StateTreeStateHandle(*)(::StateTreeCore::StateTreeRunStatus))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_FROMCOMPLETIONSTATUS_OFFSET))(status);
		}

		::System::Boolean Equals(::StateTreeCore::StateTreeStateHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_EQUALS_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::StateTreeCore::StateTreeStateHandle lhs, ::StateTreeCore::StateTreeStateHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::StateTreeCore::StateTreeStateHandle lhs, ::StateTreeCore::StateTreeStateHandle rhs)
		{
			return ((::System::Boolean(*)(::StateTreeCore::StateTreeStateHandle, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		::System::String* Describe()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREESTATEHANDLE_DESCRIBE_OFFSET))(this);
		}
	};
}
