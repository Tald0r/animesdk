#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002EE73D986F5EA.h"
#include "unitysdk/Enum_3_58B93C9F467751D5.h"
#include "unitysdk/Enum_3_D2697D54FFFB1527.h"

class Class_1_0D6706375CDAAE8C;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2834146C630674A0_METHOD_2_2B5F08DD5909E9BA_OFFSET UNITYSDK_OFFSET(0x8E4F6C0)
#define CLASS_2_2834146C630674A0_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8E51C60)
#define CLASS_2_2834146C630674A0__CTOR_OFFSET UNITYSDK_OFFSET(0x8E4F570)

inline static constexpr unsigned int Class_2_2834146C630674A0_TypeDefinitionIndex = 51602;

class Class_2_2834146C630674A0 : public ::Class_1_3002EE73D986F5EA
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_2; // 0x28
	::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* Field_2_3; // 0x30
	::System::Boolean Field_2_5; // 0x38
	::System::Boolean Field_2_7; // 0x39
	::Enum_3_D2697D54FFFB1527 Field_2_4; // 0x3C
	::Enum_3_58B93C9F467751D5 Field_2_6; // 0x40

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* a1, ::Enum_3_D2697D54FFFB1527 a2, ::System::Boolean a3, ::Enum_3_58B93C9F467751D5 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::Enum_3_D2697D54FFFB1527, ::System::Boolean, ::Enum_3_58B93C9F467751D5))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2B5F08DD5909E9BA(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0_METHOD_2_2B5F08DD5909E9BA_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2834146C630674A0_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
