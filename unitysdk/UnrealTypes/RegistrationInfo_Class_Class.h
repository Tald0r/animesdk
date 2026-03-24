#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A20EF00)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20EE00)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Class_TypeDefinitionIndex = 24718;

	class RegistrationInfo_Class_Class : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x1E200);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Class_TypeDefinitionIndex)->GetStaticField(0x1E208);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_CLASS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
