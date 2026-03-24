#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_DF1AF84C24D8648D;
class Class_2_79AE422BA06F6D26_93;
namespace MoleMole { class ActivityTrickLevelContext; }
namespace MoleMole { class UIBabeltowerTrickLevelRowWidgetController; }
namespace MoleMole { class UIBabeltowerTrickScoreRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIYorozuyaAbyssBangbooRowV3WidgetController; }
namespace MoleMole { class UIYorozuyaAbyssHeadRowV2WidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GETTRICKSCORECONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB27940)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GETTRICKSCOREROWCONTROLLER_OFFSET UNITYSDK_OFFSET(0xCB27B30)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xCB25540)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_INITSIZE_OFFSET UNITYSDK_OFFSET(0xCB257D0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB25550)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCB25F60)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB26210)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB255F0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0xCB262A0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHDURATION_OFFSET UNITYSDK_OFFSET(0xCB26E10)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHRECORD_OFFSET UNITYSDK_OFFSET(0xCB26040)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHTRICKLEVELSCORE_OFFSET UNITYSDK_OFFSET(0xCB27250)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHTRICKSCORE_OFFSET UNITYSDK_OFFSET(0xCB267C0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB27D20)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0xCB27FA0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCB27FB0)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xCB28020)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCB28030)
#define MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCB28040)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerInLevelPageController_TypeDefinitionIndex = 61390;

	class UIBabeltowerInLevelPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_93* _view; // 0x2F8
		::MoleMole::ActivityTrickLevelContext* trickContext; // 0x300
		::System::Boolean isFold; // 0x308
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* scrollViewObjects; // 0x310
		::MoleMole::UIYorozuyaAbyssBangbooRowV3WidgetController* bangbooCtrl; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* cachedtrickScoreList; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* trickScoreList; // 0x328
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* scoreList; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickScoreRowWidgetController*>* cachedscoreList; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIBabeltowerTrickLevelRowWidgetController*>* trickList; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIYorozuyaAbyssHeadRowV2WidgetController*>* recordRoles; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshRecord(::Class_1_DF1AF84C24D8648D* trickData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF1AF84C24D8648D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHRECORD_OFFSET))(this, trickData);
		}

		::System::Void RefreshAvatar(::Class_1_DF1AF84C24D8648D* trickData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF1AF84C24D8648D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHAVATAR_OFFSET))(this, trickData);
		}

		::System::Void RefreshDuration(::Class_1_DF1AF84C24D8648D* trickData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF1AF84C24D8648D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHDURATION_OFFSET))(this, trickData);
		}

		::System::Void InitSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_INITSIZE_OFFSET))(this);
		}

		::System::Void RefreshTrickLevelScore(::Class_1_DF1AF84C24D8648D* trickData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF1AF84C24D8648D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHTRICKLEVELSCORE_OFFSET))(this, trickData);
		}

		::System::Void RefreshTrickScore(::Class_1_DF1AF84C24D8648D* trickData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DF1AF84C24D8648D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_REFRESHTRICKSCORE_OFFSET))(this, trickData);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* GetTrickScoreController()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GETTRICKSCORECONTROLLER_OFFSET))(this);
		}

		::MoleMole::UIBabeltowerTrickScoreRowWidgetController* GetTrickScoreRowController()
		{
			return ((::MoleMole::UIBabeltowerTrickScoreRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER_GETTRICKSCOREROWCONTROLLER_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERINLEVELPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
