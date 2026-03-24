#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A20F430)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20F330)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex = 24719;

	class RegistrationInfo_Class_ScriptStruct : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x1E230);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_ScriptStruct_TypeDefinitionIndex)->GetStaticField(0x1E238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_SCRIPTSTRUCT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
