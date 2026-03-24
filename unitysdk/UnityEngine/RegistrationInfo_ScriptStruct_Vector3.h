#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class FloatPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }

#define UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A202390)
#define UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A201E70)

namespace UnityEngine
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex = 24665;

	class RegistrationInfo_ScriptStruct_Vector3 : public ::System::Object
	{
	public:
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E010);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_z()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E018);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_x()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E020);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E028);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E030);
		}
		static ::UnrealTypes::FloatPropertyParams** StaticGet_Property_y()
		{
			return (::UnrealTypes::FloatPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_Vector3_TypeDefinitionIndex)->GetStaticField(0x1E038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_REGISTRATIONINFO_SCRIPTSTRUCT_VECTOR3_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
