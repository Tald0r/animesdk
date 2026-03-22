#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeNodeBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore { class StateTreeConditionVirtualProxy; }

#define STATETREECORE_STATETREECONDITIONBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x19BD8470)
#define STATETREECORE_STATETREECONDITIONBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8EB0B0)
#define STATETREECORE_STATETREECONDITIONBASE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x8EAFE0)
#define STATETREECORE_STATETREECONDITIONBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STATETREECORE_STATETREECONDITIONBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8EB040)
#define STATETREECORE_STATETREECONDITIONBASE_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BD82B0)
#define STATETREECORE_STATETREECONDITIONBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define STATETREECORE_STATETREECONDITIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BD84E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeConditionBase_TypeDefinitionIndex = 26918;

	struct alignas(4) StateTreeConditionBase
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x4AB0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StateTreeConditionBase_TypeDefinitionIndex)->GetStaticField(0x4AB4);
		}
		::StateTreeCore::StateTreeNodeBase Base; // 0x10
		::StateTreeCore::StateTreeConditionOperand Operand; // 0x28
		::System::SByte DeltaIndent; // 0x2C
		::StateTreeCore::StateTreeConditionEvaluationMode EvaluationMode; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_TYPEID_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionVirtualProxy* get_VirtualProxy()
		{
			return ((::StateTreeCore::StateTreeConditionVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_REGISTERTYPE_OFFSET))();
		}

		static ::StateTreeCore::StateTreeConditionBase Create()
		{
			return ((::StateTreeCore::StateTreeConditionBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREECONDITIONBASE_CREATE_OFFSET))();
		}
	};
}
