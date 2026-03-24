#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Enum; }
namespace UnrealTypes { class EnumParams; }

#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B080150)
#define STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B080040)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex = 27791;

	class RegistrationInfo_Enum_StateTreeUpdatePhase : public ::System::Object
	{
	public:
		static ::UnrealTypes::EnumParams** StaticGet_EnumParams()
		{
			return (::UnrealTypes::EnumParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x20E20);
		}
		static ::UnrealTypes::Enum** StaticGet_Enum()
		{
			return (::UnrealTypes::Enum**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Enum_StateTreeUpdatePhase_TypeDefinitionIndex)->GetStaticField(0x20E28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_ENUM_STATETREEUPDATEPHASE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
