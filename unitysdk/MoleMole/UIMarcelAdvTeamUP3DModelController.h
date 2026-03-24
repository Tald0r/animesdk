#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_C2B4B123B5A9B78A;
class Class_2_E6A09AD9C43392D8_1;
class Class_3_C42038ADC368DD79_1;
namespace MoleMole { class MarcelAdvTeamUPContext; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET UNITYSDK_OFFSET(0xCFA76D0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFA7320)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFA7A00)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCFA6BC0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFA6E90)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET UNITYSDK_OFFSET(0xCFA73C0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHSCREENPLAYER_OFFSET UNITYSDK_OFFSET(0xCFA7E90)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET UNITYSDK_OFFSET(0xCFA7480)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_RELEASERTUNIT_OFFSET UNITYSDK_OFFSET(0xCFA78F0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCFA7CB0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCFA81D0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCFA8330)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCFA83A0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCFA83B0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xCFA83C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex = 38893;

	class UIMarcelAdvTeamUP3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Boolean* StaticGet_testScreenWidth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex)->GetStaticField(0x11430);
		}
		::Class_2_E6A09AD9C43392D8_1* _view; // 0x340
		::Class_2_C2B4B123B5A9B78A* _roleUnit; // 0x348
		::MoleMole::MarcelAdvTeamUPContext* _teamUpContext; // 0x350
		::Il2CppArray<::UnityEngine::Transform*>* _buddyObjs; // 0x358
		::System::Collections::Generic::List_1<::System::String*>* _frameTextureKeys; // 0x360
		::MoleMole::ScreenPlayer* _player; // 0x368
		::System::Int32 _rtWidth; // 0x370
		::System::Int32 _rtHeight; // 0x374
		::System::Single _playerIdleTime; // 0x378
		::System::UInt32 _idleVoiceId; // 0x37C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshMyBuddy(::Class_3_C42038ADC368DD79_1* myPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_C42038ADC368DD79_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET))(this, myPlayerInfo);
		}

		::System::Void RefreshTeamBuddy(::System::Int32 slot, ::Class_3_C42038ADC368DD79_1* teamPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_C42038ADC368DD79_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET))(this, slot, teamPlayerInfo);
		}

		::System::Void AllocRTUnit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ALLOCRTUNIT_OFFSET))(this);
		}

		::System::Void ReleaseRTUnit(::System::Boolean isReAlloc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_RELEASERTUNIT_OFFSET))(this, isReAlloc);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void RefreshScreenPlayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHSCREENPLAYER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
