#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/StateTreeCore/StateTreeDataHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace StateTreeCore { class StateTreeNodeVirtualProxy; }

#define STATETREECORE_STATETREENODEBASE_CREATE_OFFSET UNITYSDK_OFFSET(0x19BE9430)
#define STATETREECORE_STATETREENODEBASE_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x8EC540)
#define STATETREECORE_STATETREENODEBASE_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x8EC470)
#define STATETREECORE_STATETREENODEBASE_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define STATETREECORE_STATETREENODEBASE_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x8EC4D0)
#define STATETREECORE_STATETREENODEBASE_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x19BD83F0)
#define STATETREECORE_STATETREENODEBASE_RESET_OFFSET UNITYSDK_OFFSET(0x8EC410)
#define STATETREECORE_STATETREENODEBASE_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define STATETREECORE_STATETREENODEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BE94A0)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTreeNodeBase_TypeDefinitionIndex = 26957;

	struct alignas(4) StateTreeNodeBase
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x4AC0);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(StateTreeNodeBase_TypeDefinitionIndex)->GetStaticField(0x4AC4);
		}
		::UnrealTypes::FStructHandle TypeHandle; // 0x10
		::Foundation::Unreal::FName Name; // 0x14
		::System::UInt16 BindingsBatch; // 0x1C
		::System::UInt16 InstanceTemplateIndex; // 0x1E
		::StateTreeCore::StateTreeDataHandle InstanceDataHandle; // 0x20

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_RESET_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_TYPEID_OFFSET))(this);
		}

		::StateTreeCore::StateTreeNodeVirtualProxy* get_VirtualProxy()
		{
			return ((::StateTreeCore::StateTreeNodeVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_REGISTERTYPE_OFFSET))();
		}

		static ::StateTreeCore::StateTreeNodeBase Create()
		{
			return ((::StateTreeCore::StateTreeNodeBase(*)())((::PBYTE)hIl2Cpp + STATETREECORE_STATETREENODEBASE_CREATE_OFFSET))();
		}
	};
}
