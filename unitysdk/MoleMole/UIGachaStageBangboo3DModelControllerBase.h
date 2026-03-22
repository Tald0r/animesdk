#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"

class Class_2_208CC9941471731A_242;
class Class_2_208CC9941471731A_471;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0xBFEF8F0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0xBFEF880)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0xBFEFA40)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0xBFEFA30)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0xBFEFA20)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0xBFEE290)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xBFEE390)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0xBFEF640)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0xBFEF5D0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0xBFEF960)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0xBFEE680)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0xBFEE440)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBFEFA80)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0xBFEFAF0)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xBFEFB00)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0xBFEFB70)
#define MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0xBFEFBE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageBangboo3DModelControllerBase_TypeDefinitionIndex = 68762;

	class UIGachaStageBangboo3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		::System::String* MidUITextMats; // 0x628
		::System::String* MidUITextRoot; // 0x630
		::System::String* MidUITextMoveDistance; // 0x638
		::System::String* CamShakeDelay; // 0x640
		::UnityEngine::Transform* _itemPosTrans; // 0x648
		::UnityEngine::Transform* _midUITextRoot; // 0x650
		::UnityEngine::Transform* _midUITextParent; // 0x658
		::UnityEngine::Transform* _topLight; // 0x660
		::UnityEngine::Transform* _faceLight; // 0x668
		::UnityEngine::Transform* _uiTextMid; // 0x670
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo1; // 0x678
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo2; // 0x680
		::UnityEngine::Animator* _gachaStage_bangboo_object; // 0x688
		::UnityEngine::Animator* _gachaStage_bangboo_object_table; // 0x690
		::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo _midUITextInfo; // 0x698
		::Class_2_208CC9941471731A_242* _bangbooPerformTemplate; // 0x6C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_471* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_471*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEBANGBOO3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET))(this);
		}
	};
}
