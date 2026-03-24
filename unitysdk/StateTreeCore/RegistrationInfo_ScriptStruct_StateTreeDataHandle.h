#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B60AB60)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B60A5E0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex = 27919;

	class RegistrationInfo_ScriptStruct_StateTreeDataHandle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x204E0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_Index()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x204E8);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Source_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x204F0);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x204F8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x20500);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Source()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x20508);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_StateHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreeDataHandle_TypeDefinitionIndex)->GetStaticField(0x20510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEDATAHANDLE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
