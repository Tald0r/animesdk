#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class FootPrintConfig; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DE3B54A62DC91559_METHOD_1_0BE1846AC20D43BE_OFFSET UNITYSDK_OFFSET(0x96A76C0)
#define CLASS_1_DE3B54A62DC91559_METHOD_1_16B88B76B11B4B55_OFFSET UNITYSDK_OFFSET(0x96A7AD0)
#define CLASS_1_DE3B54A62DC91559_METHOD_1_A73448A8E5BAD5BD_1_OFFSET UNITYSDK_OFFSET(0x96A8020)
#define CLASS_1_DE3B54A62DC91559_METHOD_1_A73448A8E5BAD5BD_OFFSET UNITYSDK_OFFSET(0x96A7A10)
#define CLASS_1_DE3B54A62DC91559_METHOD_1_A8AE4A9A45E37F95_OFFSET UNITYSDK_OFFSET(0x96A7900)

inline static constexpr unsigned int Class_1_DE3B54A62DC91559_TypeDefinitionIndex = 75939;

class Class_1_DE3B54A62DC91559 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE3B54A62DC91559_TypeDefinitionIndex)->GetStaticField(0x3DFB0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE3B54A62DC91559_TypeDefinitionIndex)->GetStaticField(0x3DFB8);
	}

	static ::System::Void Method_1_0BE1846AC20D43BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_METHOD_1_0BE1846AC20D43BE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_A8AE4A9A45E37F95(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_METHOD_1_A8AE4A9A45E37F95_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::FootPrintConfig* Method_1_A73448A8E5BAD5BD(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_METHOD_1_A73448A8E5BAD5BD_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::Config::FootPrintConfig* Method_1_16B88B76B11B4B55(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::MoleMole::Battle::Entity* a5)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::Collections::Generic::List_1<::MoleMole::Config::FootPrintConfig*>*, ::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_METHOD_1_16B88B76B11B4B55_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::MoleMole::Config::FootPrintConfig* Method_1_A73448A8E5BAD5BD_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::MoleMole::Config::FootPrintConfig*(*)(::System::String*, ::System::String*, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_DE3B54A62DC91559_METHOD_1_A73448A8E5BAD5BD_1_OFFSET))(a1, a2, a3, a4);
	}
};
