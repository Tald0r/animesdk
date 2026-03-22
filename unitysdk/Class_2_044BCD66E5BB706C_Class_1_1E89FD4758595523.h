#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitlePopWindowController; }
namespace System { class String; }

#define CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_HIDE_OFFSET UNITYSDK_OFFSET(0xB5AABE0)
#define CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xB5AAAA0)
#define CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_SHOW_OFFSET UNITYSDK_OFFSET(0xB5AA780)
#define CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523__CTOR_OFFSET UNITYSDK_OFFSET(0xB5AADF0)

inline static constexpr unsigned int Class_2_044BCD66E5BB706C_Class_1_1E89FD4758595523_TypeDefinitionIndex = 64386;

class Class_2_044BCD66E5BB706C_Class_1_1E89FD4758595523 : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitlePopWindowController** StaticGet_Field_1_0()
	{
		return (::MoleMole::UIGeneralSubtitlePopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_044BCD66E5BB706C_Class_1_1E89FD4758595523_TypeDefinitionIndex)->GetStaticField(0x33430);
	}
	::MoleMole::UIGeneralSubtitlePopWindowController* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523__CTOR_OFFSET))(this);
	}

	::System::Void Show(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_SHOW_OFFSET))(this, a1);
	}

	::System::Void Hide()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_HIDE_OFFSET))(this);
	}

	static ::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_044BCD66E5BB706C_CLASS_1_1E89FD4758595523_METHOD_1_60451B2DE9D371C9_OFFSET))(a1);
	}
};
