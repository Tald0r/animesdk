#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnrealTypes { class ArrayPropertyParams; }
namespace UnrealTypes { class PropertyParamsBase; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class StructParams; }
namespace UnrealTypes { class StructPropertyParams; }

#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS_ENSURERUNTIMEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B5ADC70)
#define STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5ACDA0)

namespace StateTreeCore
{
	inline static constexpr unsigned int RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex = 27871;

	class RegistrationInfo_ScriptStruct_StateTreePropertyBindings : public ::System::Object
	{
	public:
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyReferencePaths()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20840);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_SourceStructs()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20848);
		}
		static ::UnrealTypes::ScriptStruct** StaticGet_ScriptStruct()
		{
			return (::UnrealTypes::ScriptStruct**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20850);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_CopyBatches()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20858);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyReferencePaths_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20860);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyAccesses()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20868);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyCopies()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20870);
		}
		static ::UnrealTypes::StructParams** StaticGet_StructParams()
		{
			return (::UnrealTypes::StructParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20878);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyPathBindings()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20880);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyAccesses_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20888);
		}
		static ::UnrealTypes::ArrayPropertyParams** StaticGet_Property_PropertyIndirections()
		{
			return (::UnrealTypes::ArrayPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20890);
		}
		static ::Il2CppArray<::UnrealTypes::PropertyParamsBase*>** StaticGet_Properties()
		{
			return (::Il2CppArray<::UnrealTypes::PropertyParamsBase*>**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x20898);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_SourceStructs_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x208A0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyPathBindings_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x208A8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_CopyBatches_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x208B0);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyIndirections_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x208B8);
		}
		static ::UnrealTypes::StructPropertyParams** StaticGet_Property_PropertyCopies_Inner()
		{
			return (::UnrealTypes::StructPropertyParams**)Il2CppClass::FromTypeDefinitionIndex(RegistrationInfo_ScriptStruct_StateTreePropertyBindings_TypeDefinitionIndex)->GetStaticField(0x208C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureRuntimeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STATETREECORE_REGISTRATIONINFO_SCRIPTSTRUCT_STATETREEPROPERTYBINDINGS_ENSURERUNTIMEINITIALIZE_OFFSET))();
		}
	};
}
