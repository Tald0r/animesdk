#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_987;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAE2BA0)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAAE2BE0)
#define MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET UNITYSDK_OFFSET(0xAAE2BF0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex = 68628;

	class UISuibianTempleEfficiencyDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UISuibianTempleEfficiencyDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UISuibianTempleEfficiencyDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31E40);
		}
		static ::System::Func_2<::Class_2_208CC9941471731A_987*, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::Class_2_208CC9941471731A_987*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UISuibianTempleEfficiencyDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x31E48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _OnShow_b__7_0(::Class_2_208CC9941471731A_987* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_987*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEEFFICIENCYDIALOGPOPWINDOWCONTROLLER___C__ONSHOW_B__7_0_OFFSET))(this, item);
		}
	};
}
