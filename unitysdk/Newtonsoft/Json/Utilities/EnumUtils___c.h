#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class FieldInfo; }
namespace System::Runtime::Serialization { class EnumMemberAttribute; }

#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0B7140)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B7180)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__GETNAMES_B__6_0_OFFSET UNITYSDK_OFFSET(0x1A0B71E0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__GETVALUES_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A0B71B0)
#define NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__INITIALIZEENUMTYPE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A0B7190)

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int EnumUtils___c_TypeDefinitionIndex = 6918;

	class EnumUtils___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils___c_TypeDefinitionIndex)->GetStaticField(0x5D90);
		}
		static ::Newtonsoft::Json::Utilities::EnumUtils___c** StaticGet___9()
		{
			return (::Newtonsoft::Json::Utilities::EnumUtils___c**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils___c_TypeDefinitionIndex)->GetStaticField(0x5D98);
		}
		static ::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Runtime::Serialization::EnumMemberAttribute*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils___c_TypeDefinitionIndex)->GetStaticField(0x5DA0);
		}
		static ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EnumUtils___c_TypeDefinitionIndex)->GetStaticField(0x5DA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__CTOR_OFFSET))(this);
		}

		::System::String* _InitializeEnumType_b__1_0(::System::Runtime::Serialization::EnumMemberAttribute* a)
		{
			return ((::System::String*(*)(::PVOID, ::System::Runtime::Serialization::EnumMemberAttribute*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__INITIALIZEENUMTYPE_B__1_0_OFFSET))(this, a);
		}

		::System::Boolean _GetValues_b__5_0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__GETVALUES_B__5_0_OFFSET))(this, f);
		}

		::System::Boolean _GetNames_b__6_0(::System::Reflection::FieldInfo* f)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_UTILITIES_ENUMUTILS___C__GETNAMES_B__6_0_OFFSET))(this, f);
		}
	};
}
