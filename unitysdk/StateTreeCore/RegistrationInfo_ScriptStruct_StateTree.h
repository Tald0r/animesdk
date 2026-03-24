#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A9C6AF0)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9C5640)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex = 27746;

	class RegistrationInfo_ScriptStruct_StateTree : public ::System::Object
	{
	public:
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Nodes()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20530);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ContextDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20538);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyBindings()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20540);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ExternalDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20548);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20550);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20558);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SharedInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20560);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_States_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20568);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_DefaultInstanceData()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20570);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20578);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20580);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ContextDataDescs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20588);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Transitions_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20590);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumContextData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x20598);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_NumGlobalInstanceData()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205A0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_ExternalDataDescs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205A8);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_States()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205B0);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_Transitions()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205B8);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasGlobalTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205C0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_GlobalTasksNum()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205C8);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205D0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parameters()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTree_TypeDefinitionIndex)->GetStaticField(0x205D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
