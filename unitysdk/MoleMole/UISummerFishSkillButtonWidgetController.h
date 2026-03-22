#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_60638234271CCDB8_8;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x71D97F0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONFISHINGSKILLENERGYUPDATE_OFFSET UNITYSDK_OFFSET(0x71D9970)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONFISHINGSTARTSKILL_OFFSET UNITYSDK_OFFSET(0x71D9FB0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x71D9890)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x71D9470)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x71D9740)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x71D9ED0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x71DA150)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x71DA120)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__ONFISHINGSTARTSKILL_B__7_0_OFFSET UNITYSDK_OFFSET(0x71DA190)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x71DA1A0)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x71DA210)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x71DA290)
#define MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x71DA2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishSkillButtonWidgetController_TypeDefinitionIndex = 49371;

	class UISummerFishSkillButtonWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_SkillCostEnergy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISummerFishSkillButtonWidgetController_TypeDefinitionIndex)->GetStaticField(0x11730);
		}
		::Class_2_60638234271CCDB8_8* _view; // 0x2A0
		::Class_2_9E3E3CDA608A4F58* _pointAnim; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFishingSkillEnergyUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONFISHINGSKILLENERGYUPDATE_OFFSET))(this, args);
		}

		::System::Void SetFillAmount(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_SETFILLAMOUNT_OFFSET))(this, ratio);
		}

		::System::Void OnFishingStartSkill(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER_ONFISHINGSTARTSKILL_OFFSET))(this, args);
		}

		::System::Void _OnFishingStartSkill_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER__ONFISHINGSTARTSKILL_B__7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHSKILLBUTTONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
