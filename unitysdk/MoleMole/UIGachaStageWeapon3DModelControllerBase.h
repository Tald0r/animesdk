#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_672;
class Class_2_208CC9941471731A_69;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0xDFAE920)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETINITEULER_OFFSET UNITYSDK_OFFSET(0xDFAA590)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0xDFAE8B0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETSTAYEULER_OFFSET UNITYSDK_OFFSET(0xDFAA8A0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0xDFAE9B0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISANGLEFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0xDFAEA00)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0xDFAE9F0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0xDFAE9A0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0xDFAE990)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0xDFAC3C0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xDFAB520)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0xDFAE670)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0xDFAE600)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0xDFAC320)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0xDFAC720)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0xDFAC4C0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0xDFAA270)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISANGLEFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0xDFAC290)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0xDFABC40)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0xDFAB300)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_TRYHANDLESPECIALWEAPONROTATE_OFFSET UNITYSDK_OFFSET(0xDFAB010)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEANGLEFLOATING_OFFSET UNITYSDK_OFFSET(0xDFABCC0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEFLOATING_OFFSET UNITYSDK_OFFSET(0xDFAB910)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0xDFAABB0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xDFAEA10)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0xDFAEB00)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0xDFAEB10)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0xDFAEB80)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0xDFAEBF0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0xDFAEC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageWeapon3DModelControllerBase_TypeDefinitionIndex = 39557;

	class UIGachaStageWeapon3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		::System::String* CamRotDuration; // 0x628
		::System::String* MidUITextMats; // 0x630
		::System::String* MidUITextRoot; // 0x638
		::System::String* MidUITextMoveDistance; // 0x640
		::System::String* WeaponRotDuration; // 0x648
		::System::String* CamShakeDelay; // 0x650
		::System::String* TriggerWeaponGachaDelay; // 0x658
		::System::String* WeaponMats; // 0x660
		::System::String* WeaponLightColorProperty; // 0x668
		::System::String* WeaponLightColorIntensity; // 0x670
		::System::String* WeaponLightColorIntensityCurve; // 0x678
		::System::String* WeaponLightColorIntensityDuration; // 0x680
		::System::String* _LightColorReplace; // 0x688
		::UnityEngine::Transform* _itemPosTrans; // 0x690
		::UnityEngine::Transform* _topLight; // 0x698
		::UnityEngine::Transform* _faceLight; // 0x6A0
		::UnityEngine::Transform* _midUITextRoot; // 0x6A8
		::UnityEngine::Transform* _midUITextParent; // 0x6B0
		::UnityEngine::Transform* _uiTextMid; // 0x6B8
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo1; // 0x6C0
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo2; // 0x6C8
		::UnityEngine::Animator* _gachaStage_bangboo_object; // 0x6D0
		::UnityEngine::Animator* _gachaStage_bangboo_object_table; // 0x6D8
		::Class_2_208CC9941471731A_69* _weaponPerformTemplate; // 0x6E0
		::System::Boolean _isRotActive; // 0x6E8
		::System::Boolean _isFloatingActive; // 0x6E9
		::System::Single _floatingDelayTimer; // 0x6EC
		::System::Boolean _isAngleFloatingActive; // 0x6F0
		::System::Single _angleFloatingDelayTimer; // 0x6F4
		::UnityEngine::AnimationCurve* _rotCurve; // 0x6F8
		::UnityEngine::Vector3 _originEuler; // 0x700
		::UnityEngine::Vector3 _rotEuler; // 0x70C
		::System::Single _rotTimer; // 0x718
		::System::Single _rotDuration; // 0x71C
		::System::Single _perlinNoiseX; // 0x720
		::System::Single _anglePerlinNoiseX; // 0x724
		::UnityEngine::Quaternion _baseLocalRot; // 0x728
		::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo _midUITextInfo; // 0x738
		::System::Boolean _angleFloatingTag; // 0x768
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* _weaponMats; // 0x770

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void RotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ROTATEWEAPON_OFFSET))(this);
		}

		::System::Void TryHandleSpecialWeaponRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_TRYHANDLESPECIALWEAPONROTATE_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void UpdateRotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEROTATEWEAPON_OFFSET))(this);
		}

		::System::Void UpdateFloating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEFLOATING_OFFSET))(this);
		}

		::System::Void UpdateAngleFloating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEANGLEFLOATING_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_672* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_672*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::UnityEngine::Vector3 GetInitEuler(::System::Int32 weaponItemID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETINITEULER_OFFSET))(this, weaponItemID);
		}

		::UnityEngine::Vector3 GetStayEuler(::System::Int32 weaponItemID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETSTAYEULER_OFFSET))(this, weaponItemID);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Boolean get_isFloatingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISFLOATINGACTIVE_OFFSET))(this);
		}

		::System::Void set_isFloatingActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISFLOATINGACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_isAngleFloatingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISANGLEFLOATINGACTIVE_OFFSET))(this);
		}

		::System::Void set_isAngleFloatingActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISANGLEFLOATINGACTIVE_OFFSET))(this, value);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void __base_StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET))(this);
		}
	};
}
