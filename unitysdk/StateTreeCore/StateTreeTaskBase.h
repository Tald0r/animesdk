#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeNodeBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore { class StateTreeTaskVirtualProxy; }

#define STATETREECORE_STATETREETASKBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x19BEA080)
#define STATETREECORE_STATETREETASKBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8ECED0)
#define STATETREECORE_STATETREETASKBASE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x8ECE00)
#define STATETREECORE_STATETREETASKBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STATETREECORE_STATETREETASKBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8ECE60)
#define STATETREECORE_STATETREETASKBASE_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BD8860)
#define STATETREECORE_STATETREETASKBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define STATETREECORE_STATETREETASKBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BEA0F0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeTaskBase_TypeDefinitionIndex = 26972;

	struct alignas(4) StateTreeTaskBase
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x4AD0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StateTreeTaskBase_TypeDefinitionIndex)->GetStaticField(0x4AD4);
		}
		::StateTreeCore::StateTreeNodeBase Base; // 0x10
		::System::Boolean ShouldStateChangeOnReselect; // 0x28
		::System::Boolean ShouldCallTick; // 0x29
		::System::Boolean ShouldCallTickOnlyOnEvents; // 0x2A
		::System::Boolean ShouldCopyBoundPropertiesOnTick; // 0x2B
		::System::Boolean ShouldCopyBoundPropertiesOnExitState; // 0x2C
		::System::Boolean ShouldAffectTransitions; // 0x2D
		::System::Boolean TaskEnabled; // 0x2E

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_TYPEID_OFFSET))(this);
		}

		::StateTreeCore::StateTreeTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::StateTreeCore::StateTreeTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_REGISTERTYPE_OFFSET))();
		}

		static ::StateTreeCore::StateTreeTaskBase Create()
		{
			return ((::StateTreeCore::StateTreeTaskBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREETASKBASE_CREATE_OFFSET))();
		}
	};
}
