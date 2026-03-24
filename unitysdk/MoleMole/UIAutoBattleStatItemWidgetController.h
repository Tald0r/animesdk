#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_80EF4D0173B06453_Struct_2_BBD456EBC9087BC2_3.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_3E1A0459A6647B99_12;
namespace MoleMole { class UIABStandbyPhaseWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_GET_SHOWDAMAGE_OFFSET UNITYSDK_OFFSET(0xD011350)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD010EA0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD011020)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD010F40)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD010D70)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_1_OFFSET UNITYSDK_OFFSET(0xD011370)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_OFFSET UNITYSDK_OFFSET(0xD0110F0)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0xD011510)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD011610)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD011620)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD011690)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD011710)
#define MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD011790)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleStatItemWidgetController_TypeDefinitionIndex = 66543;

	class UIAutoBattleStatItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_12* _view; // 0x2D0
		::MoleMole::UIABStandbyPhaseWidgetController* _parent; // 0x2D8
		::System::Int32 _cfgId; // 0x2E0
		::System::Int32 CurMaxVal; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean get_ShowDamage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_GET_SHOWDAMAGE_OFFSET))(this);
		}

		::System::Void RefreshStat(::Class_2_80EF4D0173B06453_Struct_2_BBD456EBC9087BC2_3 desc)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_80EF4D0173B06453_Struct_2_BBD456EBC9087BC2_3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_OFFSET))(this, desc);
		}

		::System::Void RefreshStat_1(::System::Int32 allDamage, ::System::Int32 allDamageTaken)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_REFRESHSTAT_1_OFFSET))(this, allDamage, allDamageTaken);
		}

		::System::Void SetProgress(::System::Int32 cur, ::System::Int32 max, ::UnityEngine::RectTransform* progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, cur, max, progress);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLESTATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
