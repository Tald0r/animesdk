#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_0A55B5A82A61DAFA;
class Class_2_14E7CE92E8A3183F;
class Class_2_208CC9941471731A_538;
class Class_2_60638234271CCDB8_123;
class Class_2_DA8BF519212BAE65;
class Class_2_DA8BF519212BAE65_1;
class Class_2_DBD69E52FAE36934;
namespace MoleMole { class UIAbyssS2EventContext; }
namespace MoleMole { class UIAbyssS2EventInfoWidgetController; }
namespace MoleMole { class UIAbyssS2EventListWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_ISLISTOPEN_OFFSET UNITYSDK_OFFSET(0xC2772B0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC2766B0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONABYSSS2EVENTSELECT_OFFSET UNITYSDK_OFFSET(0xC2781F0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC277180)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC2766C0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONMAINBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC277770)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC2770F0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC276760)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC276D60)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET UNITYSDK_OFFSET(0xC2779F0)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHLISTVIEW_OFFSET UNITYSDK_OFFSET(0xC277D20)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC276F30)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC278300)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC278310)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC278380)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC278390)
#define MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC2783A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventPageController_TypeDefinitionIndex = 65727;

	class UIAbyssS2EventPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_123* _view; // 0x2F8
		::System::Int32 _entranceID; // 0x300
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x308
		::Class_2_DA8BF519212BAE65_1* _abyssS2Model; // 0x310
		::Class_2_DBD69E52FAE36934* _yorozuyaModel; // 0x318
		::MoleMole::UIAbyssS2EventContext* _context; // 0x320
		::Class_2_208CC9941471731A_538* _entranceConfig; // 0x328
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* _dungeonConfigs; // 0x330
		::Class_2_0A55B5A82A61DAFA* _currSelectQuestConfig; // 0x338
		::Class_2_14E7CE92E8A3183F* _currSelectDungeonConfig; // 0x340
		::MoleMole::UIAbyssS2EventListWidgetController* _listWidget; // 0x348
		::MoleMole::UIAbyssS2EventInfoWidgetController* _infoWidget; // 0x350
		::System::Boolean _isListInit; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnBackBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONBACKBTNCLICK_OFFSET))(this);
		}

		::System::Void OnMainBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONMAINBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHLISTVIEW_OFFSET))(this);
		}

		::System::Void RefreshInfoView(::Class_2_14E7CE92E8A3183F* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_14E7CE92E8A3183F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_REFRESHINFOVIEW_OFFSET))(this, config);
		}

		::System::Void OnAbyssS2EventSelect(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_ONABYSSS2EVENTSELECT_OFFSET))(this, args);
		}

		::System::Boolean get_IsListOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER_GET_ISLISTOPEN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
