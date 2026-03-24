#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A211150)
#define UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A211010)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex = 24817;

	class RegistrationInfo_ScriptStruct_PropertyBagMissingStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x1E1D0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_PropertyBagMissingStruct_TypeDefinitionIndex)->GetStaticField(0x1E1D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_SCRIPTSTRUCT_PROPERTYBAGMISSINGSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
