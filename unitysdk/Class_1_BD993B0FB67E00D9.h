#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_80DF1DB3FC47B2D6;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralItemTips2PopWindowController; }
namespace MoleMole { class UIWidgetController; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD993B0FB67E00D9_METHOD_1_7595F2C85BC3A477_1_OFFSET UNITYSDK_OFFSET(0x8CA7BD0)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_7595F2C85BC3A477_OFFSET UNITYSDK_OFFSET(0x8CA7920)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_AAE2380A4AD9C102_OFFSET UNITYSDK_OFFSET(0x8CA7E10)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_C20E2BB25B76A888_OFFSET UNITYSDK_OFFSET(0x8CA7D40)
#define CLASS_1_BD993B0FB67E00D9_METHOD_1_DA9DC43193EF3077_OFFSET UNITYSDK_OFFSET(0x8CA7A90)
#define CLASS_1_BD993B0FB67E00D9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8CA77E0)
#define CLASS_1_BD993B0FB67E00D9__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA76A0)

inline static constexpr unsigned int Class_1_BD993B0FB67E00D9_TypeDefinitionIndex = 45232;

class Class_1_BD993B0FB67E00D9 : public ::System::Object
{
public:
	::MonoUITableScrollV2* Field_1_2; // 0x10
	::MoleMole::UIWidgetController* Field_1_1; // 0x18
	::MoleMole::UIGeneralItemTips2PopWindowController* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Class_1_80DF1DB3FC47B2D6*>* Field_1_3; // 0x28
	::Class_1_0D6706375CDAAE8C* Field_1_4; // 0x30

	::System::Void _ctor(::MoleMole::UIWidgetController* a1, ::MonoUITableScrollV2* a2, ::Class_1_0D6706375CDAAE8C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWidgetController*, ::MonoUITableScrollV2*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::MoleMole::UIGeneralItemTips2PopWindowController* a1, ::MonoUITableScrollV2* a2, ::Class_1_0D6706375CDAAE8C* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralItemTips2PopWindowController*, ::MonoUITableScrollV2*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_7595F2C85BC3A477(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_7595F2C85BC3A477_OFFSET))(this, a1);
	}

	::MoleMole::ScrollViewItemWidgetController* Method_1_7595F2C85BC3A477_1(::System::Func_1<::MoleMole::UIControlReference*>* a1)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_7595F2C85BC3A477_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C20E2BB25B76A888(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_C20E2BB25B76A888_OFFSET))(this, a1);
	}

	::MoleMole::UIBaseController* Method_1_DA9DC43193EF3077()
	{
		return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_DA9DC43193EF3077_OFFSET))(this);
	}

	::System::Void Method_1_AAE2380A4AD9C102(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BD993B0FB67E00D9_METHOD_1_AAE2380A4AD9C102_OFFSET))(this, a1);
	}
};
