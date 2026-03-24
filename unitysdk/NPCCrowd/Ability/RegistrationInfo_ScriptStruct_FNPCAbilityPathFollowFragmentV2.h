#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x6344220)
#define NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET UNITYSDK_OFFSET(0x6344060)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex = 50990;

	class RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2 : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x43550);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FNPCAbilityPathFollowFragmentV2_TypeDefinitionIndex)->GetStaticField(0x43558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_REGISTRATIONINFO_SCRIPTSTRUCT_FNPCABILITYPATHFOLLOWFRAGMENTV2_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
