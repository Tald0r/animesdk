#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_B45E2E8C41ADEEB6_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMiniUIGame3DContext; }
namespace MoleMole { class UIWidgetController; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0xAF49C00)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAF49BF0)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF4A200)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAF4A120)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF4A2A0)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF49C10)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF49C80)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_OPENGAMEWIDGET_OFFSET UNITYSDK_OFFSET(0xAF49DC0)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0xAF4A330)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0xAF4A3A0)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF4A430)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF4A4A0)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAF4A510)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF4A520)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF4A530)
#define MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF4A540)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGame3DModelController_TypeDefinitionIndex = 61809;

	class UIMiniUIGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_B45E2E8C41ADEEB6_2* _view; // 0x340
		::MoleMole::UIMiniUIGame3DContext* _context; // 0x348
		::MoleMole::UIWidgetController* _gameWidget; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_RESETVIEW_OFFSET))(this);
		}

		::System::Void SetGameRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_SETGAMERT_OFFSET))(this, rt);
		}

		::System::Void OpenGameWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER_OPENGAMEWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAME3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
