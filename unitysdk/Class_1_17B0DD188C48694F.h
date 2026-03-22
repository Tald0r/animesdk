#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_17B0DD188C48694F_Enum_3_3FA6BB930E2029A5.h"
#include "unitysdk/System/Object.h"

class Class_1_17B0DD188C48694F_Class_1_954AF24A4D21596B;
class Class_1_17B0DD188C48694F_Class_1_D0083DEF4C346762;
class Class_1_17B0DD188C48694F_Class_1_EF7799E5B46D5F2F;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_17B0DD188C48694F_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x64B7380)
#define CLASS_1_17B0DD188C48694F_METHOD_1_50FE47ECC4E39251_OFFSET UNITYSDK_OFFSET(0x64B7BB0)
#define CLASS_1_17B0DD188C48694F_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x64B77D0)
#define CLASS_1_17B0DD188C48694F_METHOD_1_B6C010078B18FB6C_OFFSET UNITYSDK_OFFSET(0x64B7870)
#define CLASS_1_17B0DD188C48694F_METHOD_1_D4856607AA7B36C0_OFFSET UNITYSDK_OFFSET(0x64B7410)
#define CLASS_1_17B0DD188C48694F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x64B7C30)
#define CLASS_1_17B0DD188C48694F_METHOD_1_F0C822EB41C2642C_OFFSET UNITYSDK_OFFSET(0x64B7600)
#define CLASS_1_17B0DD188C48694F__CCTOR_OFFSET UNITYSDK_OFFSET(0x64B7210)
#define CLASS_1_17B0DD188C48694F__CTOR_OFFSET UNITYSDK_OFFSET(0x64B7200)

inline static constexpr unsigned int Class_1_17B0DD188C48694F_TypeDefinitionIndex = 56875;

class Class_1_17B0DD188C48694F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B0DD188C48694F_TypeDefinitionIndex)->GetStaticField(0x37970);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17B0DD188C48694F_TypeDefinitionIndex)->GetStaticField(0x37978);
	}
	::Class_1_17B0DD188C48694F_Class_1_EF7799E5B46D5F2F* Field_1_3; // 0x10
	::Class_1_17B0DD188C48694F_Class_1_D0083DEF4C346762* Field_1_2; // 0x18
	::System::String* Field_1_4; // 0x20
	::Class_1_17B0DD188C48694F_Enum_3_3FA6BB930E2029A5 Field_1_5; // 0x28

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Void Method_1_D4856607AA7B36C0(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_D4856607AA7B36C0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0C822EB41C2642C(::System::Int32 a1, ::System::Collections::Generic::List_1<::Class_1_17B0DD188C48694F_Class_1_954AF24A4D21596B*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_17B0DD188C48694F_Class_1_954AF24A4D21596B*>*))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_F0C822EB41C2642C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	static ::System::Boolean Method_1_B6C010078B18FB6C(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::String*>*>*& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::String*>*>*&))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_B6C010078B18FB6C_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_50FE47ECC4E39251()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_50FE47ECC4E39251_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17B0DD188C48694F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
