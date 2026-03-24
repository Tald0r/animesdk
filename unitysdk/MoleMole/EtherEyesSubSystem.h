#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/Enum_3_1251E14A019C9C34.h"
#include "unitysdk/Enum_3_568F317C53C5EDC6.h"
#include "unitysdk/Enum_3_D2BBBB758B896E04_4.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_ETHEREYESSUBSYSTEM_ACTIVEETHEREYES_OFFSET UNITYSDK_OFFSET(0xB5C0D20)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ADDHIGHLIGHTRANGEVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5B9B30)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ADDINTERACTRANGEVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5B9CD0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_CHECKCAMERACOLLISIONFILTER_OFFSET UNITYSDK_OFFSET(0xB5BE2A0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_DISABLEETHEREYES_OFFSET UNITYSDK_OFFSET(0xB5BFCB0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ENABLEETHEREYES_OFFSET UNITYSDK_OFFSET(0xB5C2040)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ENTERETHEREYESCAMERA_OFFSET UNITYSDK_OFFSET(0xB5B84F0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_EXITETHEREYESCAMERA_OFFSET UNITYSDK_OFFSET(0xB5B94E0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0xB5B88A0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOETHEREYESOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0xB5BA110)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOOVERRIDEHINTKEY_OFFSET UNITYSDK_OFFSET(0xB5BA190)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOWORLDPOS_OFFSET UNITYSDK_OFFSET(0xB5B9E60)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GETOVERRIDEOVERSHOULDERCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0xB5B8BF0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_CURETHEREYESCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0xB5BE680)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_FINALINTERACTCANDIDATES_OFFSET UNITYSDK_OFFSET(0xB5B9730)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_HIGHLIGHTRANGEVOENTITYLIST_OFFSET UNITYSDK_OFFSET(0xB5B96F0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_HOLDINTERACTINGRATIO_OFFSET UNITYSDK_OFFSET(0xB5B9760)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTCDRATIO_OFFSET UNITYSDK_OFFSET(0xB5B9850)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTCDTIMER_OFFSET UNITYSDK_OFFSET(0xB5B9840)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTRANGEVOENTITYLIST_OFFSET UNITYSDK_OFFSET(0xB5B9710)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTVOENTITYID_OFFSET UNITYSDK_OFFSET(0xB5B9740)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTZONESCREENRADIUSRATIO_OFFSET UNITYSDK_OFFSET(0xB5B98F0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISHOLDINTERACTING_OFFSET UNITYSDK_OFFSET(0xB5B9750)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISININTERACTCD_OFFSET UNITYSDK_OFFSET(0xB5B9820)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISINSKILLACTIVECD_OFFSET UNITYSDK_OFFSET(0xB5B9800)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISSKILLUNLOCK_OFFSET UNITYSDK_OFFSET(0xB5BE690)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISUISKILLBUTTONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xB5B9900)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_LASTACTIVEHIGHLIGHTVOENTITYLIST_OFFSET UNITYSDK_OFFSET(0xB5B9700)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET_VALIDINTERACTVOENTITYLIST_OFFSET UNITYSDK_OFFSET(0xB5B9720)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET__ALLOWINBATTLEENABLE_OFFSET UNITYSDK_OFFSET(0xB5BE750)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_GET__SPECIALETHEREYESKEY_OFFSET UNITYSDK_OFFSET(0xB5BD830)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_INITGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB5BA220)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_INITINTERACTCDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BD8F0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_INITSKILLACTIVECDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BE4A0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_INTERACTWITHVOBYHOLD_OFFSET UNITYSDK_OFFSET(0xB5BDAC0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_INTERACTWITHVO_OFFSET UNITYSDK_OFFSET(0xB5BB6F0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESACTIVEEXISTINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xB5BDE10)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESACTIVE_OFFSET UNITYSDK_OFFSET(0xB5B9AC0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESENABLE_OFFSET UNITYSDK_OFFSET(0xB5B9A50)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0xB5C0740)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISEXISTINTERACTTARGET_OFFSET UNITYSDK_OFFSET(0xB5BE230)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ISVOINTERACTWORKABLE_OFFSET UNITYSDK_OFFSET(0xB5BC670)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB5BE7E0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB5BF750)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONINOUTBATTLE_OFFSET UNITYSDK_OFFSET(0xB5C1D60)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xB5C1DD0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONUILOCKCHANGED_OFFSET UNITYSDK_OFFSET(0xB5C1C40)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0xB5C1B20)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB5BFE20)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_POPSPECIALETHEREYESMODE_OFFSET UNITYSDK_OFFSET(0xB5C0380)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_PUSHSPECIALETHEREYESMODE_OFFSET UNITYSDK_OFFSET(0xB5C0220)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHETHEREYESCOMMONSKILLSTATE_OFFSET UNITYSDK_OFFSET(0xB5BF220)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHETHEREYESCONTROLSTATE_OFFSET UNITYSDK_OFFSET(0xB5BF6D0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHFINALINTERACTVOENTITYTARGET_OFFSET UNITYSDK_OFFSET(0xB5BC250)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHHIGHLIGHTRANGEVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5BA640)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHINTERACTVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5BAAD0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHINTERACTZONESCREENRATIO_OFFSET UNITYSDK_OFFSET(0xB5BA390)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHLOCALAVATARCHANGED_OFFSET UNITYSDK_OFFSET(0xB5BFF00)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHSKILLUNLOCK_OFFSET UNITYSDK_OFFSET(0xB5BEDE0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REMOVEHIGHLIGHTMAXRANGEVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5B9BF0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_REMOVEINTERACTRANGEVOENTITY_OFFSET UNITYSDK_OFFSET(0xB5B9D80)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_RESETHOLDINTERACTING_OFFSET UNITYSDK_OFFSET(0xB5BCD40)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_RESETINTERACTCDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BE610)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_RESETSKILLACTIVECDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BE5A0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDETHEREYESACTIVEEVT_OFFSET UNITYSDK_OFFSET(0xB5C2530)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDETHEREYESENABLEEVT_OFFSET UNITYSDK_OFFSET(0xB5C21A0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDINTERACTEVT_OFFSET UNITYSDK_OFFSET(0xB5BCED0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESACTIVEHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xB5BBD30)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESINTERACTFOCUS_OFFSET UNITYSDK_OFFSET(0xB5BD0D0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0xB5BD4B0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESVALIDINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xB5BBFC0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SETINTERACTVOENTITYID_OFFSET UNITYSDK_OFFSET(0xB5BC8E0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SETUNLOCKSTATE_OFFSET UNITYSDK_OFFSET(0xB5C1E40)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_SET_ISSKILLUNLOCK_OFFSET UNITYSDK_OFFSET(0xB5BE740)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_STARTHOLDINTERACTING_OFFSET UNITYSDK_OFFSET(0xB5BDF40)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TICKGAMEPLAY_OFFSET UNITYSDK_OFFSET(0xB5BA540)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TICKHOLDINTERACTING_OFFSET UNITYSDK_OFFSET(0xB5BB270)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TICKINTERACTCDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BBC40)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TICKSKILLACTIVECDTIMER_OFFSET UNITYSDK_OFFSET(0xB5BBB50)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TOGGLEACTIVEETHEREYESBYBTN_OFFSET UNITYSDK_OFFSET(0xB5C0520)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTCLICK_OFFSET UNITYSDK_OFFSET(0xB5C17E0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTDOWN_OFFSET UNITYSDK_OFFSET(0xB5C1780)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTUP_OFFSET UNITYSDK_OFFSET(0xB5C1860)
#define MOLEMOLE_ETHEREYESSUBSYSTEM_UNACTIVEETHEREYES_OFFSET UNITYSDK_OFFSET(0xB5C1550)
#define MOLEMOLE_ETHEREYESSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB5C2920)
#define MOLEMOLE_ETHEREYESSUBSYSTEM__ENTERETHEREYESCAMERA_B__2_0_OFFSET UNITYSDK_OFFSET(0xB5C2970)
#define MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB5C29C0)
#define MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB5C2A20)
#define MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB5C2A80)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyesSubSystem_TypeDefinitionIndex = 73693;

	class EtherEyesSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::EtherEyesSubSystem*>
	{
	public:
		// static const ::System::String* DEFAULT_SPECIAL_ETHER_EYES_KEY; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _interactRangeVOEntityList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _lastValidInteractVOEntityList; // 0x18
		::System::String* _interactVOOverrideHintKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _finalInteractCandidates; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _lastActiveHighlightVOEntityList; // 0x30
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _validInteractVOEntityList; // 0x38
		::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34_4>* _specialEtherEyesModeDataList; // 0x40
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _highlightRangeVOEntityList; // 0x50
		::MoleMole::Config::EtherEyesObjectType _interactVOEtherEyesObjectType; // 0x58
		::System::Single _interactCDTotalTime; // 0x5C
		::Enum_3_D2BBBB758B896E04_4 lastStatus; // 0x60
		::System::Single _holdInteractingTotalTime; // 0x64
		::UnityEngine::Vector3 _interactVOWorldPos; // 0x68
		::System::UInt32 _holdUpSoundId; // 0x74
		::System::UInt32 _holdDownSoundId; // 0x78
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x7C
		::System::Int32 _interactVOEntityID; // 0x88
		::System::Single _interactZoneScreenRadiusRatio; // 0x8C
		::System::Boolean _isHighlightVODataDirty; // 0x90
		::System::Boolean _isShowEtherEyesCommonSkill; // 0x91
		::System::Boolean _isUISkillButtonHighlight; // 0x92
		::System::Boolean _isSkillUnlock; // 0x93
		::System::Single _skillActiveCDTimer; // 0x94
		::System::Single _holdInteractingTimer; // 0x98
		::Enum_3_568F317C53C5EDC6 _curEtherEyesControlState; // 0x9C
		::Enum_3_1251E14A019C9C34 _unlockState; // 0xA0
		::System::Int32 _curActiveEtherEyesAvatarID; // 0xA4
		::System::Boolean _isHoldInteracting; // 0xA8
		::System::Boolean _interactTrigger; // 0xA9
		::System::Single _interactCDTimer; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void EnterEtherEyesCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ENTERETHEREYESCAMERA_OFFSET))(this);
		}

		::System::Void ExitEtherEyesCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_EXITETHEREYESCAMERA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* GetOverrideOverShoulderCameraConfig()
		{
			return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GETOVERRIDEOVERSHOULDERCAMERACONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* get_HighlightRangeVoEntityList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_HIGHLIGHTRANGEVOENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* get_LastActiveHighlightVOEntityList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_LASTACTIVEHIGHLIGHTVOENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* get_InteractRangeVoEntityList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTRANGEVOENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* get_ValidInteractVOEntityList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_VALIDINTERACTVOENTITYLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* get_FinalInteractCandidates()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_FINALINTERACTCANDIDATES_OFFSET))(this);
		}

		::System::Int32 get_InteractVOEntityID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTVOENTITYID_OFFSET))(this);
		}

		::System::Boolean get_IsHoldInteracting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISHOLDINTERACTING_OFFSET))(this);
		}

		::System::Single get_HoldInteractingRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_HOLDINTERACTINGRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsInSkillActiveCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISINSKILLACTIVECD_OFFSET))(this);
		}

		::System::Boolean get_IsInInteractCD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISININTERACTCD_OFFSET))(this);
		}

		::System::Single get_InteractCDTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTCDTIMER_OFFSET))(this);
		}

		::System::Single get_InteractCDRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTCDRATIO_OFFSET))(this);
		}

		::System::Single get_InteractZoneScreenRadiusRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_INTERACTZONESCREENRADIUSRATIO_OFFSET))(this);
		}

		::System::Boolean get_IsUISkillButtonHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISUISKILLBUTTONHIGHLIGHT_OFFSET))(this);
		}

		::System::Void AddHighlightRangeVOEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ADDHIGHLIGHTRANGEVOENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveHighlightMaxRangeVOEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REMOVEHIGHLIGHTMAXRANGEVOENTITY_OFFSET))(this, entity);
		}

		::System::Void AddInteractRangeVOEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ADDINTERACTRANGEVOENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveInteractRangeVOEntity(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REMOVEINTERACTRANGEVOENTITY_OFFSET))(this, entity);
		}

		::System::Boolean GetInteractVOWorldPos(::UnityEngine::Vector3& worldPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOWORLDPOS_OFFSET))(this, worldPos);
		}

		::System::Boolean GetInteractVOEtherEyesObjectType(::MoleMole::Config::EtherEyesObjectType& etherEyesObjectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::EtherEyesObjectType&))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOETHEREYESOBJECTTYPE_OFFSET))(this, etherEyesObjectType);
		}

		::System::Boolean GetInteractVOOverrideHintKey(::System::String*& overrideHintKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GETINTERACTVOOVERRIDEHINTKEY_OFFSET))(this, overrideHintKey);
		}

		::System::Void InitGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_INITGAMEPLAY_OFFSET))(this);
		}

		::System::Void RefreshInteractZoneScreenRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHINTERACTZONESCREENRATIO_OFFSET))(this);
		}

		::System::Void TickGameplay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TICKGAMEPLAY_OFFSET))(this);
		}

		::System::Void RefreshHighlightRangeVOEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHHIGHLIGHTRANGEVOENTITY_OFFSET))(this);
		}

		::System::Void RefreshInteractVOEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHINTERACTVOENTITY_OFFSET))(this);
		}

		::System::Void RefreshFinalInteractVOEntityTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHFINALINTERACTVOENTITYTARGET_OFFSET))(this);
		}

		::System::Void SetInteractVOEntityID(::System::Int32 entityID, ::UnityEngine::Vector3 interactWorldPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SETINTERACTVOENTITYID_OFFSET))(this, entityID, interactWorldPos);
		}

		::System::Void SendVOEvtEtherEyesActiveHighlight(::MoleMole::EntityHandle entity, ::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESACTIVEHIGHLIGHT_OFFSET))(this, entity, isStart);
		}

		::System::Void SendVOEvtEtherEyesValidInteractable(::MoleMole::EntityHandle entity, ::System::Boolean isInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESVALIDINTERACTABLE_OFFSET))(this, entity, isInteractable);
		}

		::System::Void SendVOEvtEtherEyesInteractFocus(::System::Int32 entityID, ::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESINTERACTFOCUS_OFFSET))(this, entityID, isFocus);
		}

		::System::Void SendInteractEvt(::MoleMole::EntityHandle entity, ::Enum_3_D2BBBB758B896E04_4 status)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::Enum_3_D2BBBB758B896E04_4))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDINTERACTEVT_OFFSET))(this, entity, status);
		}

		::System::Void SendVOEvtEtherEyesInteractSuccess(::MoleMole::EntityHandle entity, ::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDVOEVTETHEREYESINTERACTSUCCESS_OFFSET))(this, entity, isSuccess);
		}

		::System::Void InteractWithVOByHold()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_INTERACTWITHVOBYHOLD_OFFSET))(this);
		}

		::System::Void InteractWithVO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_INTERACTWITHVO_OFFSET))(this);
		}

		::System::Void StartHoldInteracting(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_STARTHOLDINTERACTING_OFFSET))(this, entity);
		}

		::System::Void ResetHoldInteracting(::System::Boolean resetTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_RESETHOLDINTERACTING_OFFSET))(this, resetTimer);
		}

		::System::Void TickHoldInteracting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TICKHOLDINTERACTING_OFFSET))(this);
		}

		::System::Boolean IsExistInteractTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISEXISTINTERACTTARGET_OFFSET))(this);
		}

		::System::Boolean IsVOInteractWorkable(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector2& screenPos, ::UnityEngine::Vector3& worldPos, ::System::Boolean ignoreDistanceCheck, ::System::Boolean ignoreCameraCollisionCheck, ::System::Boolean ignoreInteractCheck)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISVOINTERACTWORKABLE_OFFSET))(this, entity, screenPos, worldPos, ignoreDistanceCheck, ignoreCameraCollisionCheck, ignoreInteractCheck);
		}

		::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 CheckCameraCollisionFilter(::UnityEngine::Collider* collider, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 collisionClass)
		{
			return ((::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::Collider*, ::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_CHECKCAMERACOLLISIONFILTER_OFFSET))(this, collider, collisionClass);
		}

		::System::Void InitSkillActiveCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_INITSKILLACTIVECDTIMER_OFFSET))(this);
		}

		::System::Void ResetSkillActiveCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_RESETSKILLACTIVECDTIMER_OFFSET))(this);
		}

		::System::Void TickSkillActiveCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TICKSKILLACTIVECDTIMER_OFFSET))(this);
		}

		::System::Void InitInteractCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_INITINTERACTCDTIMER_OFFSET))(this);
		}

		::System::Void ResetInteractCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_RESETINTERACTCDTIMER_OFFSET))(this);
		}

		::System::Void TickInteractCDTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TICKINTERACTCDTIMER_OFFSET))(this);
		}

		::Enum_3_568F317C53C5EDC6 get_CurEtherEyesControlState()
		{
			return ((::Enum_3_568F317C53C5EDC6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_CURETHEREYESCONTROLSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsSkillUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET_ISSKILLUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsSkillUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SET_ISSKILLUNLOCK_OFFSET))(this, value);
		}

		::System::String* get__specialEtherEyesKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET__SPECIALETHEREYESKEY_OFFSET))(this);
		}

		::System::Boolean get__allowInBattleEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_GET__ALLOWINBATTLEENABLE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void PushSpecialEtherEyesMode(::System::String* tag, ::System::String* specialEtherEyesKey, ::System::Boolean allowInBattleEnable, ::System::Boolean forceUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_PUSHSPECIALETHEREYESMODE_OFFSET))(this, tag, specialEtherEyesKey, allowInBattleEnable, forceUnlock);
		}

		::System::Void PopSpecialEtherEyesMode(::System::String* tag, ::System::Boolean skipRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_POPSPECIALETHEREYESMODE_OFFSET))(this, tag, skipRefresh);
		}

		::System::Boolean IsEtherEyesEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESENABLE_OFFSET))(this);
		}

		::System::Boolean IsEtherEyesActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESACTIVE_OFFSET))(this);
		}

		::System::Boolean IsEtherEyesActiveExistInteractTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESACTIVEEXISTINTERACTTARGET_OFFSET))(this);
		}

		::System::Void ToggleActiveEtherEyesByBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TOGGLEACTIVEETHEREYESBYBTN_OFFSET))(this);
		}

		::System::Void TryEtherEyesInteractDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTDOWN_OFFSET))(this);
		}

		::System::Void TryEtherEyesInteractClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTCLICK_OFFSET))(this);
		}

		::System::Void TryEtherEyesInteractUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_TRYETHEREYESINTERACTUP_OFFSET))(this);
		}

		::System::Void OnUnlock(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONUNLOCK_OFFSET))(this, obj);
		}

		::System::Void OnUILockChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONUILOCKCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnInOutBattle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONINOUTBATTLE_OFFSET))(this, obj);
		}

		::System::Void OnScreenSizeChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ONSCREENSIZECHANGED_OFFSET))(this, obj);
		}

		::System::Void SetUnlockState(::Enum_3_1251E14A019C9C34 unlockState)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_1251E14A019C9C34))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SETUNLOCKSTATE_OFFSET))(this, unlockState);
		}

		::System::Void RefreshSkillUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHSKILLUNLOCK_OFFSET))(this);
		}

		::System::Void RefreshEtherEyesCommonSkillState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHETHEREYESCOMMONSKILLSTATE_OFFSET))(this);
		}

		::System::Void RefreshEtherEyesControlState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHETHEREYESCONTROLSTATE_OFFSET))(this);
		}

		::System::Boolean IsEtherEyesWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ISETHEREYESWORKABLEINNER_OFFSET))(this);
		}

		::System::Void EnableEtherEyes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ENABLEETHEREYES_OFFSET))(this);
		}

		::System::Void DisableEtherEyes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_DISABLEETHEREYES_OFFSET))(this);
		}

		::System::Void RefreshLocalAvatarChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_REFRESHLOCALAVATARCHANGED_OFFSET))(this);
		}

		::System::Void ActiveEtherEyes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_ACTIVEETHEREYES_OFFSET))(this);
		}

		::System::Void UnActiveEtherEyes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_UNACTIVEETHEREYES_OFFSET))(this);
		}

		::System::Void SendEtherEyesActiveEvt(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDETHEREYESACTIVEEVT_OFFSET))(this, isActive);
		}

		::System::Void SendEtherEyesEnableEvt(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM_SENDETHEREYESENABLEEVT_OFFSET))(this, isEnable);
		}

		::UnityEngine::Vector3 _EnterEtherEyesCamera_b__2_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM__ENTERETHEREYESCAMERA_B__2_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYESSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
