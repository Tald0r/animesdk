#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B664C71B784890D;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC039A90)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC039AD0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0xC039AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex = 63638;

	class UIHollowInfoProgress02WidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_8B664C71B784890D*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::Class_1_8B664C71B784890D*>**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32790);
		}
		static ::MoleMole::UIHollowInfoProgress02WidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHollowInfoProgress02WidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHollowInfoProgress02WidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32798);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__4_0(::Class_1_8B664C71B784890D* a, ::Class_1_8B664C71B784890D* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8B664C71B784890D*, ::Class_1_8B664C71B784890D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___C__REFRESHVIEW_B__4_0_OFFSET))(this, a, b);
		}
	};
}
