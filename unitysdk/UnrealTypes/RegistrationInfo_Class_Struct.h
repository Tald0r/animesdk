#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_STRUCT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A20F540)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_STRUCT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20F440)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Struct_TypeDefinitionIndex = 24717;

	class RegistrationInfo_Class_Struct : public ::System::Object
	{
	public:
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Struct_TypeDefinitionIndex)->GetStaticField(0x1E1F0);
		}
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Struct_TypeDefinitionIndex)->GetStaticField(0x1E1F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_STRUCT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_STRUCT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
