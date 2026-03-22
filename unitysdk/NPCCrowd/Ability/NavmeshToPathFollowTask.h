#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NavmeshToPathFollowType.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/StateTreeCore/StateTreeTaskBase.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnrealTypes/FStructHandle.h"

namespace NPCCrowd::Ability { class NavmeshToPathFollowTaskVirtualProxy; }

#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_CREATE_OFFSET UNITYSDK_OFFSET(0x7225850)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x3206C0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x320650)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x3206B0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_REGISTERTYPE_OFFSET UNITYSDK_OFFSET(0x7225750)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x3205E0)
#define NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK__CCTOR_OFFSET UNITYSDK_OFFSET(0x72259D0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NavmeshToPathFollowTask_TypeDefinitionIndex = 57878;

	struct alignas(4) NavmeshToPathFollowTask
	{
		static ::System::UInt32* StaticGet_PersistentTypeHash()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(NavmeshToPathFollowTask_TypeDefinitionIndex)->GetStaticField(0x11770);
		}
		static ::UnrealTypes::FStructHandle* StaticGet_Struct()
		{
			return (::UnrealTypes::FStructHandle*)Il2CppClass::FromTypeDefinitionIndex(NavmeshToPathFollowTask_TypeDefinitionIndex)->GetStaticField(0x11774);
		}
		::StateTreeCore::StateTreeTaskBase Base; // 0x10
		::NPCCrowd::Ability::NavmeshToPathFollowType moveType; // 0x30
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FTransformFragment> transformHandle; // 0x34
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCNavmeshFragment> navmeshHandle; // 0x3C
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> blackboardHandle; // 0x44
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> pathFollowHandle; // 0x4C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK__CCTOR_OFFSET))();
		}

		::UnrealTypes::FStructHandle get_TypeInfo()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_TYPEINFO_OFFSET))(this);
		}

		::System::Void set_TypeInfo(::UnrealTypes::FStructHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FStructHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_SET_TYPEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TypeId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_TYPEID_OFFSET))(this);
		}

		::NPCCrowd::Ability::NavmeshToPathFollowTaskVirtualProxy* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTaskVirtualProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::FStructHandle get_StaticStruct()
		{
			return ((::UnrealTypes::FStructHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_GET_STATICSTRUCT_OFFSET))(this);
		}

		static ::System::Void RegisterType()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_REGISTERTYPE_OFFSET))();
		}

		static ::NPCCrowd::Ability::NavmeshToPathFollowTask Create()
		{
			return ((::NPCCrowd::Ability::NavmeshToPathFollowTask(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NAVMESHTOPATHFOLLOWTASK_CREATE_OFFSET))();
		}
	};
}
