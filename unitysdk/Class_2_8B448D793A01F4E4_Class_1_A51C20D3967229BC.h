#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralSubtitle05EDPopWindowController; }
namespace System { class String; }

#define CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA6ACBC0)
#define CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0xA6ACCE0)
#define CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_8881E3A58A431890_OFFSET UNITYSDK_OFFSET(0xA6AC850)
#define CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ACCD0)

inline static constexpr unsigned int Class_2_8B448D793A01F4E4_Class_1_A51C20D3967229BC_TypeDefinitionIndex = 59299;

class Class_2_8B448D793A01F4E4_Class_1_A51C20D3967229BC : public ::System::Object
{
public:
	static ::MoleMole::UIGeneralSubtitle05EDPopWindowController** StaticGet_Field_1_0()
	{
		return (::MoleMole::UIGeneralSubtitle05EDPopWindowController**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B448D793A01F4E4_Class_1_A51C20D3967229BC_TypeDefinitionIndex)->GetStaticField(0x2E330);
	}
	::MoleMole::UIGeneralSubtitle05EDPopWindowController* Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8881E3A58A431890(::System::String* a1, ::System::String* a2, ::System::String* a3, ::Il2CppArray<::System::String*>* a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_8881E3A58A431890_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::System::Void Method_1_60451B2DE9D371C9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B448D793A01F4E4_CLASS_1_A51C20D3967229BC_METHOD_1_60451B2DE9D371C9_OFFSET))(a1);
	}
};
