#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"

class Class_1_E4E579647190C0B0_Class_1_69FADA46CC266916;
class Class_2_208CC9941471731A_588;
class Class_2_51A0178BA95DA1D2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDailyChallengeCardRowWidgetController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_BINDONCLICK_OFFSET UNITYSDK_OFFSET(0x95DF180)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95DEA80)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95DF000)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95DEB20)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_UPDATECARDINFO_OFFSET UNITYSDK_OFFSET(0x95DF840)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x95DF2A0)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95DFC30)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__UPDATEINFO_B__10_1_OFFSET UNITYSDK_OFFSET(0x95DFC60)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__UPDATEINFO_G__INTERNALDOREFRESH_10_0_OFFSET UNITYSDK_OFFSET(0x95DF640)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95DFC70)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95DFCE0)
#define MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95DFD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleEliteMonsterWidgetController_TypeDefinitionIndex = 76228;

	class UIDoubleEliteMonsterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::String* _refreshAnimName; // 0x2A0
		::Class_2_51A0178BA95DA1D2* _view; // 0x2A8
		::MoleMole::UIDailyChallengeCardRowWidgetController* _card1; // 0x2B0
		::MoleMole::UIDailyChallengeCardRowWidgetController* _card2; // 0x2B8
		::Struct_2_49ABC235CB23B56F _delayUpdateInfoHandle; // 0x2C0
		::Class_2_208CC9941471731A_588* _cardInfoTempate; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindOnClick(::System::Action* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_BINDONCLICK_OFFSET))(this, onClick);
		}

		::System::Void UpdateInfo(::Class_1_E4E579647190C0B0_Class_1_69FADA46CC266916* chapterInfo, ::System::Boolean playCardAnim)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E4E579647190C0B0_Class_1_69FADA46CC266916*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_UPDATEINFO_OFFSET))(this, chapterInfo, playCardAnim);
		}

		::System::Void UpdateCardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER_UPDATECARDINFO_OFFSET))(this);
		}

		::System::Void _UpdateInfo_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__UPDATEINFO_B__10_1_OFFSET))(this);
		}

		::System::Void _UpdateInfo_g__InternalDoRefresh_10_0(::System::Boolean doAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER__UPDATEINFO_G__INTERNALDOREFRESH_10_0_OFFSET))(this, doAnim);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEMONSTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
