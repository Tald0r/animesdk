#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_B2293F2A1950D858.h"

class Class_1_C6A4DECEE09618C7;
class Class_2_08E43914789BE5F3;
class Class_2_C7387D40D4120A48_3;
namespace MoleMole { class BabeltowerRankPageContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC0AE380)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_GOMAIN_OFFSET UNITYSDK_OFFSET(0xC0AF970)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONBABELRANKSELECT_OFFSET UNITYSDK_OFFSET(0xC0AFA90)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONBABELTOWERUPDATERANK_OFFSET UNITYSDK_OFFSET(0xC0B08C0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0AE390)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0AEE50)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0AE430)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0AEF60)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0xC0AFEF0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHAVATARLIST_OFFSET UNITYSDK_OFFSET(0xC0AFFE0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xC0AFB50)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0xC0B0520)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0xC0AEB30)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC0AF0C0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC0B0930)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0B09A0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0xC0B09B0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0xC0B0AB0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__REFRESHTIME_B__23_0_OFFSET UNITYSDK_OFFSET(0xC0B0B30)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC0B0B40)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC0B0BB0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC0B0BC0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC0B0BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRankPageController_TypeDefinitionIndex = 40272;

	class UIBabeltowerRankPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 TitleID = 0x39FC74; // 0x0
		::Class_2_C7387D40D4120A48_3* _view; // 0x2F8
		::System::Int32 towerid; // 0x300
		::Class_2_08E43914789BE5F3* towerModel; // 0x308
		::System::Int32 configUpdateTime; // 0x310
		::Class_1_C6A4DECEE09618C7* towerData; // 0x318
		::MoleMole::BabeltowerRankPageContext* context; // 0x320
		::Foundation::AssetRequestHandle _uiMatHandler; // 0x328
		::System::Single waitTimer; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void GoMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_GOMAIN_OFFSET))(this);
		}

		::System::Void OnBabelRankSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONBABELRANKSELECT_OFFSET))(this, args);
		}

		::System::Void OpenInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_OPENINFO_OFFSET))(this);
		}

		::System::Void RefreshTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHTITLE_OFFSET))(this);
		}

		::System::Void RefreshInfo(::Struct_2_B2293F2A1950D858 data)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_B2293F2A1950D858))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHINFO_OFFSET))(this, data);
		}

		::System::Void RefreshAvatarList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHAVATARLIST_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBabelTowerUpdateRank(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_ONBABELTOWERUPDATERANK_OFFSET))(this, args);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER_REFRESHTIME_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _OnUIInit_b__10_1(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET))(this, reference);
		}

		::System::Void _RefreshTime_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER__REFRESHTIME_B__23_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
