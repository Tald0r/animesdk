#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole::Config { class ConfigSkinMdb; }
namespace MoleMole::Config { class SkinMdbDataOfRenderer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_52E4C685535EF42E_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x9635B20)
#define CLASS_1_52E4C685535EF42E_METHOD_1_0CF0AE650FF902FE_OFFSET UNITYSDK_OFFSET(0x9635A70)
#define CLASS_1_52E4C685535EF42E_METHOD_1_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x9636240)
#define CLASS_1_52E4C685535EF42E_METHOD_1_727880A9C0E60947_OFFSET UNITYSDK_OFFSET(0x9635D80)
#define CLASS_1_52E4C685535EF42E_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0x9635F40)
#define CLASS_1_52E4C685535EF42E_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x9636130)
#define CLASS_1_52E4C685535EF42E__CCTOR_OFFSET UNITYSDK_OFFSET(0x96359D0)

inline static constexpr unsigned int Class_1_52E4C685535EF42E_TypeDefinitionIndex = 44578;

class Class_1_52E4C685535EF42E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::String*>, ::MoleMole::Config::SkinMdbDataOfRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52E4C685535EF42E_TypeDefinitionIndex)->GetStaticField(0x41CF0);
	}
	static ::MoleMole::Config::ConfigSkinMdb** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigSkinMdb**)Il2CppClass::FromTypeDefinitionIndex(Class_1_52E4C685535EF42E_TypeDefinitionIndex)->GetStaticField(0x41CF8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0CF0AE650FF902FE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_0CF0AE650FF902FE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_727880A9C0E60947(::System::Int32 a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_727880A9C0E60947_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_83DA3EC57FF907F4_OFFSET))();
	}

	static ::System::Void Method_1_704FAC4600717444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_52E4C685535EF42E_METHOD_1_704FAC4600717444_OFFSET))();
	}
};
