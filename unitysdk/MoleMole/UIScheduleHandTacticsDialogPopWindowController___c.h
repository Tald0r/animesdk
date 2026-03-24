#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7ECB9691B142D586;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA45C0A0)
#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA45C0E0)
#define MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C___REFRESHVIEW_B__12_0_OFFSET UNITYSDK_OFFSET(0xA45C0F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex = 38489;

	class UIScheduleHandTacticsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7ECB9691B142D586*>** StaticGet___9__12_0()
		{
			return (::System::Action_1<::Class_1_7ECB9691B142D586*>**)Il2CppClass::FromTypeDefinitionIndex(UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34960);
		}
		static ::MoleMole::UIScheduleHandTacticsDialogPopWindowController___c** StaticGet___9()
		{
			return (::MoleMole::UIScheduleHandTacticsDialogPopWindowController___c**)Il2CppClass::FromTypeDefinitionIndex(UIScheduleHandTacticsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x34968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __RefreshView_b__12_0(::Class_1_7ECB9691B142D586* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCHEDULEHANDTACTICSDIALOGPOPWINDOWCONTROLLER___C___REFRESHVIEW_B__12_0_OFFSET))(this, vp);
		}
	};
}
