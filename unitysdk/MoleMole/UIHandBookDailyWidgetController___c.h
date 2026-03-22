#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C2EE9BE6ADE8BB7;
class Class_2_208CC9941471731A_676;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8098D50)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8098D90)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET UNITYSDK_OFFSET(0x8099330)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET UNITYSDK_OFFSET(0x8098DA0)
#define MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET UNITYSDK_OFFSET(0x8099240)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookDailyWidgetController___c_TypeDefinitionIndex = 68436;

	class UIHandBookDailyWidgetController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIHandBookDailyWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookDailyWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32680);
		}
		static ::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::Class_1_8C2EE9BE6ADE8BB7*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32688);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_676*, ::Class_1_8C2EE9BE6ADE8BB7*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_676*, ::Class_1_8C2EE9BE6ADE8BB7*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32690);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__3_4()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookDailyWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x32698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__3_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIINIT_B__3_4_OFFSET))(this);
		}

		::Class_1_8C2EE9BE6ADE8BB7* _OnUIOpen_b__4_0(::Class_2_208CC9941471731A_676* template_)
		{
			return ((::Class_1_8C2EE9BE6ADE8BB7*(*)(::PVOID, ::Class_2_208CC9941471731A_676*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONUIOPEN_B__4_0_OFFSET))(this, template_);
		}

		::System::Int32 _OnShow_b__5_0(::Class_1_8C2EE9BE6ADE8BB7* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_8C2EE9BE6ADE8BB7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKDAILYWIDGETCONTROLLER___C__ONSHOW_B__5_0_OFFSET))(this, b);
		}
	};
}
