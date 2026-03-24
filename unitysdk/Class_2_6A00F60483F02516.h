#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1EB8C469AAE7B7DE.h"
#include "unitysdk/Class_2_7A7FC78D520103F5_Enum_3_C81EECEE92663449.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_7A7FC78D520103F5_Class_1_84D29A777CDEE069;
class Class_2_A8F5ABF31E066ED4;
class Class_2_E87F1D15F1D4AC72;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_6A00F60483F02516_METHOD_2_3E18040C55B2B43B_OFFSET UNITYSDK_OFFSET(0x767B300)
#define CLASS_2_6A00F60483F02516_METHOD_2_9D768FB7C06C1DF3_OFFSET UNITYSDK_OFFSET(0x767B000)
#define CLASS_2_6A00F60483F02516_METHOD_2_C127CCAC2E254BF7_OFFSET UNITYSDK_OFFSET(0x767B1F0)
#define CLASS_2_6A00F60483F02516__CCTOR_OFFSET UNITYSDK_OFFSET(0x767B0C0)
#define CLASS_2_6A00F60483F02516__CTOR_OFFSET UNITYSDK_OFFSET(0x767B070)

inline static constexpr unsigned int Class_2_6A00F60483F02516_TypeDefinitionIndex = 39017;

class Class_2_6A00F60483F02516 : public ::Class_1_1EB8C469AAE7B7DE
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_2_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6A00F60483F02516_TypeDefinitionIndex)->GetStaticField(0x46410);
	}
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516__CCTOR_OFFSET))();
	}

	::System::Void Method_2_9D768FB7C06C1DF3(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_9D768FB7C06C1DF3_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C127CCAC2E254BF7(::Class_2_7A7FC78D520103F5_Enum_3_C81EECEE92663449 a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_7A7FC78D520103F5_Enum_3_C81EECEE92663449, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_C127CCAC2E254BF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3E18040C55B2B43B(::Class_2_7A7FC78D520103F5_Class_1_84D29A777CDEE069* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7A7FC78D520103F5_Class_1_84D29A777CDEE069*))((::PBYTE)hIl2Cpp + CLASS_2_6A00F60483F02516_METHOD_2_3E18040C55B2B43B_OFFSET))(this, a1);
	}
};
