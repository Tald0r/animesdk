#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_E6A09AD9C43392D8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETENTITYGAME_OFFSET UNITYSDK_OFFSET(0xA61DFA0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECAMERA_OFFSET UNITYSDK_OFFSET(0xA61E0A0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET UNITYSDK_OFFSET(0xA61DF30)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA61DE00)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA61DEA0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA61DCD0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_SETGAMERT_OFFSET UNITYSDK_OFFSET(0xA61E010)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA61E110)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA61E180)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA61E1F0)
#define MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA61E200)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGame3DModelController_TypeDefinitionIndex = 77265;

	class UIHoundGame3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_E6A09AD9C43392D8* _view; // 0x340
		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* _viewEntityGame; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetGameCanvas()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECANVAS_OFFSET))(this);
		}

		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* GetEntityGame()
		{
			return ((::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETENTITYGAME_OFFSET))(this);
		}

		::System::Void SetGameRT(::UnityEngine::RenderTexture* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_SETGAMERT_OFFSET))(this, rt);
		}

		::UnityEngine::Camera* GetGameCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER_GETGAMECAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAME3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
