#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_85037376A06481AA;
class Class_2_DA8BF519212BAE65;
class Class_3_B34301746BFA36C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowCardItemBtnWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET UNITYSDK_OFFSET(0xD2262F0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0xD226A60)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET UNITYSDK_OFFSET(0xD226B90)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD2270A0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD227140)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD226320)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD226FE0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET UNITYSDK_OFFSET(0xD226520)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET UNITYSDK_OFFSET(0xD226E10)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD227220)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD227250)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD2272C0)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD227340)
#define MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD2273A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssCardSuitEntryWidgetController_TypeDefinitionIndex = 79299;

	class UIAbyssCardSuitEntryWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_85037376A06481AA* _view; // 0x2A0
		::System::Boolean m_inited; // 0x2A8
		::System::Collections::Generic::List_1<::MoleMole::UIHollowCardItemBtnWidgetController*>* m_list; // 0x2B0
		::Class_3_B34301746BFA36C2* m_curSelectAbyssCardBuild; // 0x2B8
		::Class_2_DA8BF519212BAE65* m_model; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_BtnEntryObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_BTNENTRYOBJ_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshCards(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_REFRESHCARDS_OFFSET))(this, args);
		}

		::System::Void OnClickEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCLICKENTRY_OFFSET))(this);
		}

		::System::Void TelePortToNestLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_TELEPORTTONESTLEVEL_OFFSET))(this);
		}

		::Class_2_DA8BF519212BAE65* get_Model()
		{
			return ((::Class_2_DA8BF519212BAE65*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSCARDSUITENTRYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
