#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOUITABLESCROLLV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7C718E0)
#define MONOUITABLESCROLLV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7C71910)
#define MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__741_0_OFFSET UNITYSDK_OFFSET(0x7C71CE0)
#define MONOUITABLESCROLLV2___C__GETMINWIDTH_B__740_0_OFFSET UNITYSDK_OFFSET(0x7C71C30)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__739_0_OFFSET UNITYSDK_OFFSET(0x7C71AD0)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__739_1_OFFSET UNITYSDK_OFFSET(0x7C71B80)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__738_0_OFFSET UNITYSDK_OFFSET(0x7C71970)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__738_1_OFFSET UNITYSDK_OFFSET(0x7C71A20)
#define MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__462_0_OFFSET UNITYSDK_OFFSET(0x7C71920)
#define MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__727_0_OFFSET UNITYSDK_OFFSET(0x7C71960)

inline static constexpr unsigned int MonoUITableScrollV2___c_TypeDefinitionIndex = 43864;

class MonoUITableScrollV2___c : public ::System::Object
{
public:
	static ::MonoUITableScrollV2___c** StaticGet___9()
	{
		return (::MonoUITableScrollV2___c**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30440);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__738_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30448);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__739_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30450);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__738_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30458);
	}
	static ::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>** StaticGet___9__727_0()
	{
		return (::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30460);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__741_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30468);
	}
	static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__462_0()
	{
		return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30470);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__740_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30478);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__739_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x30480);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetViewportChildren_b__462_0(::UnityEngine::RectTransform* lhs, ::UnityEngine::RectTransform* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__462_0_OFFSET))(this, lhs, rhs);
	}

	::System::Object* _ScrollToBottomWithoutAnim_b__727_0(::MonoUITableScrollV2_Data v)
	{
		return ((::System::Object*(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__727_0_OFFSET))(this, v);
	}

	::System::Single _GetPreferredWidth_b__738_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__738_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredWidth_b__738_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__738_1_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__739_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__739_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__739_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__739_1_OFFSET))(this, e);
	}

	::System::Single _GetMinWidth_b__740_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINWIDTH_B__740_0_OFFSET))(this, e);
	}

	::System::Single _GetMinHeight_b__741_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__741_0_OFFSET))(this, e);
	}
};
