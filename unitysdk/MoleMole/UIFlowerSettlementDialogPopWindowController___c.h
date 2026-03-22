#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_208;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC0F1C80)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F1CC0)
#define MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0xC0F1CD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex = 51151;

	class UIFlowerSettlementDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_208*>** StaticGet___9__15_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_208*>**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FE70);
		}
		static ::MoleMole::UIFlowerSettlementDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIFlowerSettlementDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIFlowerSettlementDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x2FE78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshScrollView_b__15_0(::Class_0_16E4307DCC419505_208* x, ::Class_0_16E4307DCC419505_208* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_208*, ::Class_0_16E4307DCC419505_208*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSETTLEMENTDIALOGPOPWINDOWCONTROLLER___C__REFRESHSCROLLVIEW_B__15_0_OFFSET))(this, x, y);
		}
	};
}
