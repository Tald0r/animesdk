#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class Class; }
namespace UnrealTypes { class ClassParams; }

#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A20F100)
#define UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20F020)

namespace UnrealTypes
{
	inline static constexpr unsigned int RegistrationInfo_Class_Object_TypeDefinitionIndex = 24727;

	class RegistrationInfo_Class_Object : public ::System::Object
	{
	public:
		static ::UnrealTypes::ClassParams** StaticGet_ClassParams()
		{
			return (::UnrealTypes::ClassParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x1E210);
		}
		static ::UnrealTypes::Class** StaticGet_Class()
		{
			return (::UnrealTypes::Class**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_Class_Object_TypeDefinitionIndex)->GetStaticField(0x1E218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_REGISTRATIONINFO_CLASS_OBJECT_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
