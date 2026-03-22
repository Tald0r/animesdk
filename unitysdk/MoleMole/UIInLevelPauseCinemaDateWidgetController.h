#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_A9C5A8D636F67CD4;
class Class_1_FC14C7248AA68DF4;
class Class_2_0E3D561C72111316;
class Class_2_208CC9941471731A_442;
class Class_2_A1E11F94C1500ACE;
class Class_2_E50E8EF790262554;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadal_InPauseRatingInfoRowWidgetController; }
namespace MoleMole { class UIInLevelPauseCinemaSingleWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_INITTASKINFOITEMS_OFFSET UNITYSDK_OFFSET(0xC876AE0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC877060)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC876770)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC877100)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC876230)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC8762D0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET UNITYSDK_OFFSET(0xC876950)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET UNITYSDK_OFFSET(0xC8777A0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0xC8771E0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC877AF0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC877BA0)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC877C10)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC877C80)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC877D00)
#define MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC877D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCinemaDateWidgetController_TypeDefinitionIndex = 36628;

	class UIInLevelPauseCinemaDateWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E50E8EF790262554* _view; // 0x2A0
		::System::Boolean isDateMode; // 0x2A8
		::Class_2_A1E11F94C1500ACE* datePlayController; // 0x2B0
		::Class_2_208CC9941471731A_442* cinemaDateConfig; // 0x2B8
		::System::Collections::Generic::List_1<::MoleMole::UIHadal_InPauseRatingInfoRowWidgetController*>* rateInfoList; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_FC14C7248AA68DF4*>* challengeDataList; // 0x2C8
		::System::Boolean isSingleMode; // 0x2D0
		::Class_2_0E3D561C72111316* singlePlayController; // 0x2D8
		::MoleMole::UIInLevelPauseCinemaSingleWidgetController* singleWidget; // 0x2E0
		::System::Collections::Generic::List_1<::Class_1_A9C5A8D636F67CD4*>* singleChallengeList; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshDateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHDATEINFO_OFFSET))(this);
		}

		::System::Void RefreshMissionTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONTARGET_OFFSET))(this);
		}

		::System::Void RefreshMissionSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_REFRESHMISSIONSELECTITEM_OFFSET))(this);
		}

		::System::Void InitTaskInfoItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER_INITTASKINFOITEMS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECINEMADATEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
