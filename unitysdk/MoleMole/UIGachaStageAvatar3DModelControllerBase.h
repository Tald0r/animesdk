#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"

class Class_2_208CC9941471731A_447;
class Class_2_208CC9941471731A_471;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0x8C3DB40)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x8C3DBB0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0x8C3DAD0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x8C3DF00)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x8C3DF40)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x8C3DEF0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x8C3B280)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x8C3B6B0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0x8C3D890)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x8C3D820)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x8C3BA50)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8C3B760)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C3B1D0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0x8C3B840)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x8C3DCD0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C3DF50)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__ONREFRESHSTAGE_B__5_0_OFFSET UNITYSDK_OFFSET(0x8C3E070)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET UNITYSDK_OFFSET(0x8C3E290)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x8C3E2F0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x8C3E300)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x8C3E370)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8C3E3E0)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C3E220)
#define MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x8C3E3F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageAvatar3DModelControllerBase_TypeDefinitionIndex = 58948;

	class UIGachaStageAvatar3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		::UnityEngine::Transform* _itemPosTrans; // 0x628
		::UnityEngine::GameObject* _flagGo1; // 0x630
		::UnityEngine::GameObject* _flagGo2; // 0x638
		::UnityEngine::Transform* _platform; // 0x640
		::UnityEngine::Transform* _leftUITextRoot; // 0x648
		::UnityEngine::Transform* _leftUITextParent; // 0x650
		::UnityEngine::Transform* _leftUITextRoot1; // 0x658
		::UnityEngine::Transform* _leftUITextParent1; // 0x660
		::UnityEngine::Transform* _leftUITextRoot2; // 0x668
		::UnityEngine::Transform* _leftUITextParent2; // 0x670
		::UnityEngine::Transform* _rightUITextRoot; // 0x678
		::UnityEngine::Transform* _rightUITextParent; // 0x680
		::UnityEngine::Transform* _rightUITextRoot1; // 0x688
		::UnityEngine::Transform* _rightUITextParent1; // 0x690
		::UnityEngine::Transform* _upUITextRoot; // 0x698
		::UnityEngine::Transform* _upUITextParent; // 0x6A0
		::UnityEngine::Transform* _topLight; // 0x6A8
		::UnityEngine::Transform* _faceLight; // 0x6B0
		::UnityEngine::Transform* _uiTextUp; // 0x6B8
		::UnityEngine::Transform* _uiTextLeft; // 0x6C0
		::UnityEngine::Transform* _uiTextRight; // 0x6C8
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo; // 0x6D0
		::System::String* FLAG_MAT_TEXTURE_PROPERTY_NAME; // 0x6D8
		::System::String* FLAG_MAT_NORMAL_PROPERTY_NAME; // 0x6E0
		::System::String* FLAG_MAT_MASK_PROPERTY_NAME; // 0x6E8
		::System::String* Flag1Go; // 0x6F0
		::System::String* Flag2Go; // 0x6F8
		::System::String* CamShakeDelay; // 0x700
		::System::String* LeftUITextRoot; // 0x708
		::System::String* LeftUITextMats; // 0x710
		::System::String* RightUITextRoot; // 0x718
		::System::String* RightUITextMats; // 0x720
		::System::String* UpUITextRoot; // 0x728
		::System::String* UpUITextMats; // 0x730
		::System::String* LeftUITextMoveDistance; // 0x738
		::System::String* RightUITextMoveDistance; // 0x740
		::System::String* UITextMoveThinkInterval; // 0x748
		::System::String* AvatarTextshotTLDelay; // 0x750
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _flagMats; // 0x758
		::System::Collections::Generic::List_1<::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo>* _leftUITextInfos; // 0x760
		::System::Collections::Generic::List_1<::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo>* _rightUITextInfos; // 0x768
		::Class_2_208CC9941471731A_447* _avatarPerformTemplate; // 0x770
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _loadedFlagTextures; // 0x778

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_471* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_471*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::Void _OnRefreshStage_b__5_0(::UnityEngine::GameObject* flagGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE__ONREFRESHSTAGE_B__5_0_OFFSET))(this, flagGo);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUIINIT_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_GetLightCutSceneAttachPoint()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_GETLIGHTCUTSCENEATTACHPOINT_OFFSET))(this);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEAVATAR3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET))(this);
		}
	};
}
