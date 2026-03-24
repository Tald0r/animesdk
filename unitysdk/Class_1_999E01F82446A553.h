#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerAccessoryType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigPlayerAccessory; }
namespace MoleMole::Config { class PlayerAccessorySkinData; }
namespace MoleMole::Config { class PlayerAccessoryTabData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_999E01F82446A553_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0xBDFD7A0)
#define CLASS_1_999E01F82446A553_METHOD_1_0CF0AE650FF902FE_OFFSET UNITYSDK_OFFSET(0xBDFD6F0)
#define CLASS_1_999E01F82446A553_METHOD_1_182DE8C44A8469E0_OFFSET UNITYSDK_OFFSET(0xBDFDEE0)
#define CLASS_1_999E01F82446A553_METHOD_1_5BCE9210F4ACDD0B_OFFSET UNITYSDK_OFFSET(0xBDFDA00)
#define CLASS_1_999E01F82446A553_METHOD_1_756E91E89470983A_OFFSET UNITYSDK_OFFSET(0xBDFDCF0)
#define CLASS_1_999E01F82446A553_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xBDFE060)
#define CLASS_1_999E01F82446A553__CCTOR_OFFSET UNITYSDK_OFFSET(0xBDFD650)

inline static constexpr unsigned int Class_1_999E01F82446A553_TypeDefinitionIndex = 41714;

class Class_1_999E01F82446A553 : public ::System::Object
{
public:
	static ::MoleMole::Config::ConfigPlayerAccessory** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigPlayerAccessory**)Il2CppClass::FromTypeDefinitionIndex(Class_1_999E01F82446A553_TypeDefinitionIndex)->GetStaticField(0x2AA70);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::PlayerAccessorySkinData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_999E01F82446A553_TypeDefinitionIndex)->GetStaticField(0x2AA78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0CF0AE650FF902FE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_0CF0AE650FF902FE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5BCE9210F4ACDD0B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_5BCE9210F4ACDD0B_OFFSET))();
	}

	static ::System::Void Method_1_756E91E89470983A(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_756E91E89470983A_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_182DE8C44A8469E0(::System::Int32 a1, ::MoleMole::PlayerAccessoryType a2, ::MoleMole::Config::PlayerAccessoryTabData*& a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::PlayerAccessoryType, ::MoleMole::Config::PlayerAccessoryTabData*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_182DE8C44A8469E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_999E01F82446A553_METHOD_1_83DA3EC57FF907F4_OFFSET))();
	}
};
