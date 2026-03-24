#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class BoolPropertyParams; }
namespace UnrealTypes { class EnumPropertyParams; }
namespace UnrealTypes { class NamePropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }
namespace UnrealTypes { class UInt16PropertyParams; }
namespace UnrealTypes { class UInt8PropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B609F10)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B608880)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex = 27926;

	class RegistrationInfo_ScriptStruct_CompactStateTreeState : public ::System::Object
	{
	public:
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TasksNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206A0);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206A8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TransitionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206B0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_Type_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206B8);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206C0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_TasksBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206C8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterBindingsBatch()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206D0);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_InstanceDataNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206D8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206E0);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ParameterTemplateIndex()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206E8);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_SelectionBehavior()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206F0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_Parent()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x206F8);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_EnterConditionsBegin()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20700);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_EnterConditionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20708);
		}
		static ::UnrealTypes::UInt16PropertyParams** StaticGet_Property_ChildrenEnd()
		{
			return (::UnrealTypes::UInt16PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20710);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20718);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_TransitionsNum()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20720);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_Enabled()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20728);
		}
		static ::UnrealTypes::EnumPropertyParams** StaticGet_Property_Type()
		{
			return (::UnrealTypes::EnumPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20730);
		}
		static ::UnrealTypes::NamePropertyParams** StaticGet_Property_Name()
		{
			return (::UnrealTypes::NamePropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20738);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_LinkedState()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20740);
		}
		static ::UnrealTypes::UInt8PropertyParams** StaticGet_Property_SelectionBehavior_Underlying()
		{
			return (::UnrealTypes::UInt8PropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20748);
		}
		static ::UnrealTypes::BoolPropertyParams** StaticGet_Property_HasTransitionTasks()
		{
			return (::UnrealTypes::BoolPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20750);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_ParameterDataHandle()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_CompactStateTreeState_TypeDefinitionIndex)->GetStaticField(0x20758);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_COMPACTSTATETREESTATE_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
