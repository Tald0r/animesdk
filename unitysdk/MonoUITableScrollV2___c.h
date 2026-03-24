#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_Data.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ILayoutElement; }

#define MONOUITABLESCROLLV2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6E74B0)
#define MONOUITABLESCROLLV2___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6E74E0)
#define MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__742_0_OFFSET UNITYSDK_OFFSET(0xA6E78B0)
#define MONOUITABLESCROLLV2___C__GETMINWIDTH_B__741_0_OFFSET UNITYSDK_OFFSET(0xA6E7800)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__740_0_OFFSET UNITYSDK_OFFSET(0xA6E76A0)
#define MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__740_1_OFFSET UNITYSDK_OFFSET(0xA6E7750)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__739_0_OFFSET UNITYSDK_OFFSET(0xA6E7540)
#define MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__739_1_OFFSET UNITYSDK_OFFSET(0xA6E75F0)
#define MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__463_0_OFFSET UNITYSDK_OFFSET(0xA6E74F0)
#define MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__728_0_OFFSET UNITYSDK_OFFSET(0xA6E7530)

inline static constexpr unsigned int MonoUITableScrollV2___c_TypeDefinitionIndex = 64497;

class MonoUITableScrollV2___c : public ::System::Object
{
public:
	static ::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>** StaticGet___9__728_0()
	{
		return (::System::Func_2<::MonoUITableScrollV2_Data, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FC0);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__740_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FC8);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__739_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FD0);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__741_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FD8);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__739_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FE0);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__740_1()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FE8);
	}
	static ::System::Comparison_1<::UnityEngine::RectTransform*>** StaticGet___9__463_0()
	{
		return (::System::Comparison_1<::UnityEngine::RectTransform*>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FF0);
	}
	static ::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>** StaticGet___9__742_0()
	{
		return (::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x31FF8);
	}
	static ::MonoUITableScrollV2___c** StaticGet___9()
	{
		return (::MonoUITableScrollV2___c**)Il2CppClass::FromTypeDefinitionIndex(MonoUITableScrollV2___c_TypeDefinitionIndex)->GetStaticField(0x32000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _GetViewportChildren_b__463_0(::UnityEngine::RectTransform* lhs, ::UnityEngine::RectTransform* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETVIEWPORTCHILDREN_B__463_0_OFFSET))(this, lhs, rhs);
	}

	::System::Object* _ScrollToBottomWithoutAnim_b__728_0(::MonoUITableScrollV2_Data v)
	{
		return ((::System::Object*(*)(::PVOID, ::MonoUITableScrollV2_Data))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__SCROLLTOBOTTOMWITHOUTANIM_B__728_0_OFFSET))(this, v);
	}

	::System::Single _GetPreferredWidth_b__739_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__739_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredWidth_b__739_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDWIDTH_B__739_1_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__740_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__740_0_OFFSET))(this, e);
	}

	::System::Single _GetPreferredHeight_b__740_1(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETPREFERREDHEIGHT_B__740_1_OFFSET))(this, e);
	}

	::System::Single _GetMinWidth_b__741_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINWIDTH_B__741_0_OFFSET))(this, e);
	}

	::System::Single _GetMinHeight_b__742_0(::UnityEngine::UI::ILayoutElement* e)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::ILayoutElement*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2___C__GETMINHEIGHT_B__742_0_OFFSET))(this, e);
	}
};
