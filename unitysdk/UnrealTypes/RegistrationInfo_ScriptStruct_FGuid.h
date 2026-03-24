#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A20F9F0)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20F8B0)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex = 24681;

	class RegistrationInfo_ScriptStruct_FGuid : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex)->GetStaticField(0x1E080);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_FGuid_TypeDefinitionIndex)->GetStaticField(0x1E088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_FGUID_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
