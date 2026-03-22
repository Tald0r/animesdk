#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9472F50)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9472F90)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET UNITYSDK_OFFSET(0x9472FA0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET UNITYSDK_OFFSET(0x94730C0)
#define MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET UNITYSDK_OFFSET(0x94730D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIReportDialogPopWindowController___c_TypeDefinitionIndex = 60936;

	class UIReportDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x329A0);
		}
		static ::System::Action** StaticGet___9__22_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x329A8);
		}
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x329B0);
		}
		static ::MoleMole::UIReportDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIReportDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIReportDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x329B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_0_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_1_OFFSET))(this);
		}

		::System::Void _SubmitReport_b__22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPORTDIALOGPOPWINDOWCONTROLLER___C__SUBMITREPORT_B__22_2_OFFSET))(this);
		}
	};
}
