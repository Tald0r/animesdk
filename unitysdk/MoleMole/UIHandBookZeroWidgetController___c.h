#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_124;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAA18F10)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAA18F50)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET UNITYSDK_OFFSET(0xAA18FB0)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_2_OFFSET UNITYSDK_OFFSET(0xAA18F60)
#define MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_4_OFFSET UNITYSDK_OFFSET(0xAA18F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookZeroWidgetController___c_TypeDefinitionIndex = 45428;

	class UIHandBookZeroWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34A50);
		}
		static ::System::Predicate_1<::Class_2_208CC9941471731A_124*>** StaticGet___9__9_2()
		{
			return (::System::Predicate_1<::Class_2_208CC9941471731A_124*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34A58);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_124*, ::System::Int32>** StaticGet___9__9_4()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_124*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34A60);
		}
		static ::MoleMole::UIHandBookZeroWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIHandBookZeroWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookZeroWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x34A68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUIInit_b__9_2(::Class_2_208CC9941471731A_124* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_124*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_2_OFFSET))(this, entry);
		}

		::System::Int32 _OnUIInit_b__9_4(::Class_2_208CC9941471731A_124* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_124*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONUIINIT_B__9_4_OFFSET))(this, entry);
		}

		::System::Void _OnRewardBtnClick_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKZEROWIDGETCONTROLLER___C__ONREWARDBTNCLICK_B__20_0_OFFSET))(this);
		}
	};
}
