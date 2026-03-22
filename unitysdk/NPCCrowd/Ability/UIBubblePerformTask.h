#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCBaseDataFragment.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class UIBubblePerformTaskVirtualProxy; }
namespace System { class String; }

#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x648BA50)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x2D4780)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x2D4710)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x2D4770)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x648B950)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2D46A0)
#define NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x648BBC0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int UIBubblePerformTask_TypeDefinitionIndex = 79134;

	struct alignas(8) UIBubblePerformTask
	{
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTask_TypeDefinitionIndex)->GetStaticField(0xE850);
		}
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(UIBubblePerformTask_TypeDefinitionIndex)->GetStaticField(0xE854);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::System::String* textKey; // 0x30
		::System::Single duration; // 0x38
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCBaseDataFragment> entityDataHandle; // 0x3C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::UIBubblePerformTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::UIBubblePerformTask Create()
		{
			return ((::NPCCrowd::Ability::UIBubblePerformTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_UIBUBBLEPERFORMTASK_CREATE_OFFSET))();
		}
	};
}
