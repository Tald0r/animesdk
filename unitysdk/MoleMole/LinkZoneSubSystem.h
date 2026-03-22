#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4AE0715386866DD6.h"
#include "unitysdk/Enum_3_59737315FF4FFC59.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_1.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_C2ED712377151494.h"

class Class_0_16E4307DCC419505_7;
class Class_3_416D54600666EBB5;
class Class_3_816015CAFD8353F7;
class Class_3_9F2FCC0519F3E06F_84;
class Class_3_DD674CE55FAF6EFC_1;
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET UNITYSDK_OFFSET(0x6E33150)
#define MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x6E31510)
#define MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET UNITYSDK_OFFSET(0x6E31390)
#define MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x6E2F7F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x6E2D960)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET UNITYSDK_OFFSET(0x6E30C90)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET UNITYSDK_OFFSET(0x6E30F00)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET UNITYSDK_OFFSET(0x6E30F60)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x6E30D20)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET UNITYSDK_OFFSET(0x6E30BF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET UNITYSDK_OFFSET(0x6E30B50)
#define MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET UNITYSDK_OFFSET(0x6E30990)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET UNITYSDK_OFFSET(0x6E2EEA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET UNITYSDK_OFFSET(0x6E2ECC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET UNITYSDK_OFFSET(0x6E2EF70)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET UNITYSDK_OFFSET(0x6E302F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET UNITYSDK_OFFSET(0x6E2DFC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET UNITYSDK_OFFSET(0x6E318F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET UNITYSDK_OFFSET(0x6E31590)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET UNITYSDK_OFFSET(0x6E2D7A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET UNITYSDK_OFFSET(0x6E2D440)
#define MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET UNITYSDK_OFFSET(0x6E317B0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x6E2D3F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x6E2D3C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET UNITYSDK_OFFSET(0x6E2D420)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x6E2D430)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x6E2D400)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET UNITYSDK_OFFSET(0x6E2D3D0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET UNITYSDK_OFFSET(0x6E2D3E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET UNITYSDK_OFFSET(0x6E2D410)
#define MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET UNITYSDK_OFFSET(0x6E2F4E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET UNITYSDK_OFFSET(0x6E2D290)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET UNITYSDK_OFFSET(0x6E32E50)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET UNITYSDK_OFFSET(0x6E32DD0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x6E2CEB0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET UNITYSDK_OFFSET(0x6E2C7A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x6E2FA20)
#define MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x6E2C6E0)
#define MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET UNITYSDK_OFFSET(0x6E2F280)
#define MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET UNITYSDK_OFFSET(0x6E2E5F0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6E32100)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET UNITYSDK_OFFSET(0x6E32090)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET UNITYSDK_OFFSET(0x6E331C0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6E32710)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x6E2E450)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x6E2D820)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x6E2FE40)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET UNITYSDK_OFFSET(0x6E31C00)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x6E32EC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET UNITYSDK_OFFSET(0x6E32FA0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET UNITYSDK_OFFSET(0x6E330A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6E32B30)
#define MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET UNITYSDK_OFFSET(0x6E2DD00)
#define MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET UNITYSDK_OFFSET(0x6E307A0)
#define MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET UNITYSDK_OFFSET(0x6E2F470)
#define MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET UNITYSDK_OFFSET(0x6E32540)
#define MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET UNITYSDK_OFFSET(0x6E2E920)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET UNITYSDK_OFFSET(0x6E30720)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET UNITYSDK_OFFSET(0x6E32C30)
#define MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET UNITYSDK_OFFSET(0x6E32D20)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET UNITYSDK_OFFSET(0x6E2CD40)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET UNITYSDK_OFFSET(0x6E2FAF0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET UNITYSDK_OFFSET(0x6E2CA70)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET UNITYSDK_OFFSET(0x6E2FDC0)
#define MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET UNITYSDK_OFFSET(0x6E2D300)
#define MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6E33240)
#define MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET UNITYSDK_OFFSET(0x6E33270)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6E33390)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6E333F0)
#define MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6E33450)

namespace MoleMole
{
	inline static constexpr unsigned int LinkZoneSubSystem_TypeDefinitionIndex = 68113;

	class LinkZoneSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LinkZoneSubSystem*>
	{
	public:
		::Class_3_816015CAFD8353F7* _switchAvatarComponent; // 0x10
		::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* _teamExQTEShowInfoList; // 0x18
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _assetRequestHandles; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _linkZonePerformedPeerIDList; // 0x28
		::Class_3_416D54600666EBB5* MessageLinkZone; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* _cachedTeamExQTEPerformedPeerIDList; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>* _texturePathDict; // 0x40
		::System::UInt32 _curStateStartTime; // 0x48
		::Enum_3_4AE0715386866DD6 _cachedTeamExQTEType; // 0x4C
		::System::Boolean _isCountDownTimerBarUIShow; // 0x50
		::System::Boolean _isLinkZoneInfoAreaUIShow; // 0x51
		::System::Boolean _isForceDisableLinkZoneUlt; // 0x52
		::System::Boolean _isLocalStartLinkZoneAvatarUlt; // 0x53
		::System::Int32 _cachedTeamExQTECasterPeerID; // 0x54
		::System::UInt32 _linkZoneEnergyDecayTime; // 0x58
		::System::Int32 _maxLinkZoneEnergy; // 0x5C
		::System::Int32 _cachedTeamExQTEPosIndex; // 0x60
		::System::Int32 _cachedTeamExQTELastPerformPeerID; // 0x64
		::System::Int32 _curLinkZoneEnergy; // 0x68
		::System::Boolean _lastShowRelayAttackQTEHint; // 0x6C
		::System::Boolean _lastShowLinkZoneUltQTEHint; // 0x6D
		::System::Boolean _isCoopSettlementEnd; // 0x6E
		::System::Boolean _isShowCommonSkillButton; // 0x6F
		::System::Single _longPressTimer; // 0x70
		::Enum_3_A35B38E5F9115A76_1 _curLinkZoneState; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean IsShowRelayAttackQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWRELAYATTACKQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowRelayAttackQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWRELAYATTACKQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsRelayAttackAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISRELAYATTACKAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerRelayAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERRELAYATTACK_OFFSET))(this);
		}

		::Enum_3_A35B38E5F9115A76_1 get_CurLinkZoneState()
		{
			return ((::Enum_3_A35B38E5F9115A76_1(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONESTATE_OFFSET))(this);
		}

		::System::Int32 get_TeamExQTELastPerformPeerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTELASTPERFORMPEERID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_TeamExQTEPerformedPeerIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTEPERFORMEDPEERIDLIST_OFFSET))(this);
		}

		::System::Int32 get_CurLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_CURLINKZONEENERGY_OFFSET))(this);
		}

		::System::Int32 get_MaxLinkZoneEnergy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_MAXLINKZONEENERGY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>* get_TeamExQTEShowInfoList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_C2ED712377151494>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_TEAMEXQTESHOWINFOLIST_OFFSET))(this);
		}

		::System::Boolean get_IsCountDownTimerBarUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISCOUNTDOWNTIMERBARUISHOW_OFFSET))(this);
		}

		::System::Boolean get_IsLinkZoneInfoAreaUIShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GET_ISLINKZONEINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Boolean GetLinkZoneStateDecayTime(::System::UInt32& remainingTime, ::System::UInt32& totalTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONESTATEDECAYTIME_OFFSET))(this, remainingTime, totalTime);
		}

		::System::Single GetLinkZoneEnergyRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETLINKZONEENERGYRATIO_OFFSET))(this);
		}

		::System::Void OnMpLinkZoneStateEnergyScNotify(::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONESTATEENERGYSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void OnMpLinkZonePerformedPlayerScNotify(::Class_3_9F2FCC0519F3E06F_84* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_9F2FCC0519F3E06F_84*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONMPLINKZONEPERFORMEDPLAYERSCNOTIFY_OFFSET))(this, notify);
		}

		::System::Void ModifyLinkZoneEnergy(::MoleMole::Battle::Entity* entity, ::System::Int32 deltaEnergy, ::System::Int32 operateType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_MODIFYLINKZONEENERGY_OFFSET))(this, entity, deltaEnergy, operateType);
		}

		::System::Void StartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_STARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void FinishLinkZoneAvatarUltPerform(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTPERFORM_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneAvatarUltAttack(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONEAVATARULTATTACK_OFFSET))(this, avatar);
		}

		::System::Void FinishLinkZoneComboUlt(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FINISHLINKZONECOMBOULT_OFFSET))(this, entity);
		}

		::UnityEngine::Texture2D* LoadTeamExQTEAvatarTexture(::System::String* texturePath)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_LOADTEAMEXQTEAVATARTEXTURE_OFFSET))(this, texturePath);
		}

		::System::Void SetForceDisableLinkZoneUlt(::System::Boolean isForceDisable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SETFORCEDISABLELINKZONEULT_OFFSET))(this, isForceDisable);
		}

		::System::Void InitLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_INITLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Void DestroyLinkZoneUltInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_DESTROYLINKZONEULTINFO_OFFSET))(this);
		}

		::System::Boolean IsShowLinkZoneUltQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISSHOWLINKZONEULTQTEHINT_OFFSET))(this);
		}

		::System::Void TryShowLinkZoneUltQTEHint(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYSHOWLINKZONEULTQTEHINT_OFFSET))(this, show);
		}

		::System::Boolean IsInLinkZonePerformState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISINLINKZONEPERFORMSTATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneUltAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONEULTAVAILABLE_OFFSET))(this);
		}

		::System::Void TryTriggerLinkZoneUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYTRIGGERLINKZONEULT_OFFSET))(this);
		}

		::System::Void OnRealStartLinkZoneAvatarUlt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONREALSTARTLINKZONEAVATARULT_OFFSET))(this);
		}

		::System::Void TickLinkZoneState(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLINKZONESTATE_OFFSET))(this, deltaTime);
		}

		::System::Void EnterLinkZoneState(::Enum_3_A35B38E5F9115A76_1 linkZoneState, ::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_1, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERLINKZONESTATE_OFFSET))(this, linkZoneState, notify);
		}

		::System::Void EnterStateOutZoneNotEnoughEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONENOTENOUGHENERGY_OFFSET))(this);
		}

		::System::Void EnterStateOutZoneEnergyReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEOUTZONEENERGYREADY_OFFSET))(this);
		}

		::System::Void ParseChangeEnergyParam(::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_PARSECHANGEENERGYPARAM_OFFSET))(this, notify);
		}

		::System::Void EnterStateInZonePerform(::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEPERFORM_OFFSET))(this, notify);
		}

		::System::Void CreateMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CREATEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void CloseMessageLinkZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLOSEMESSAGELINKZONE_OFFSET))(this);
		}

		::System::Void EnterStateInZoneWaiting(::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONEWAITING_OFFSET))(this, notify);
		}

		::System::Void ExitStateInZoneWaiting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_EXITSTATEINZONEWAITING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUltPending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULTPENDING_OFFSET))(this);
		}

		::System::Void EnterStateInZoneTeamUlt(::Class_3_DD674CE55FAF6EFC_1* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_DD674CE55FAF6EFC_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ENTERSTATEINZONETEAMULT_OFFSET))(this, notify);
		}

		static ::System::UInt32 GetTeamIndexByPeerID(::System::Int32 peerID)
		{
			return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETTEAMINDEXBYPEERID_OFFSET))(peerID);
		}

		static ::MoleMole::Battle::Entity* GetAvatarEntityByPeerID(::System::Int32 peerID)
		{
			return ((::MoleMole::Battle::Entity*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARENTITYBYPEERID_OFFSET))(peerID);
		}

		::Struct_2_C2ED712377151494 GetAvatarShowInfoByPeerID(::System::Int32 peerID)
		{
			return ((::Struct_2_C2ED712377151494(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_GETAVATARSHOWINFOBYPEERID_OFFSET))(this, peerID);
		}

		::System::Void FireLinkZoneStateChangedEvent(::Enum_3_A35B38E5F9115A76_1 state, ::Enum_3_4AE0715386866DD6 teamExQTEType, ::System::Int32 casterPeerID, ::Enum_3_59737315FF4FFC59 subState, ::System::Int32 teamExQTEPosIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A35B38E5F9115A76_1, ::Enum_3_4AE0715386866DD6, ::System::Int32, ::Enum_3_59737315FF4FFC59, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONESTATECHANGEDEVENT_OFFSET))(this, state, teamExQTEType, casterPeerID, subState, teamExQTEPosIndex);
		}

		::System::Void FireLinkZoneAvatarUltEvent(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_FIRELINKZONEAVATARULTEVENT_OFFSET))(this, isStart);
		}

		::System::Void OnSingleCharacterExitUltPerform(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSINGLECHARACTEREXITULTPERFORM_OFFSET))(this, obj);
		}

		::System::Void OnCoopRegionPlayChange(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPREGIONPLAYCHANGE_OFFSET))(this, obj);
		}

		::System::Void RefreshInfoAreaUIShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_REFRESHINFOAREAUISHOW_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneSkillButtonValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESKILLBUTTONVALID_OFFSET))(this);
		}

		::System::Boolean IsLinkZoneShowQTEHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ISLINKZONESHOWQTEHINT_OFFSET))(this);
		}

		::System::Void OnSkillButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONCLICK_OFFSET))(this);
		}

		::System::Void OnSkillButtonDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONDOWN_OFFSET))(this);
		}

		::System::Void OnSkillButtonUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONSKILLBUTTONUP_OFFSET))(this);
		}

		::System::Void TryCacheSwitchAvatarComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TRYCACHESWITCHAVATARCOMPONENT_OFFSET))(this);
		}

		::System::Void ShowCommonSkillButton(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_SHOWCOMMONSKILLBUTTON_OFFSET))(this, isShow);
		}

		::System::Void ClearLongPressData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_CLEARLONGPRESSDATA_OFFSET))(this);
		}

		::System::Void TickLongPress(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKLONGPRESS_OFFSET))(this, deltaTime);
		}

		::System::Void TickQTEShow(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_TICKQTESHOW_OFFSET))(this, deltaTime);
		}

		::System::Void OnCoopSettlementEnd(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM_ONCOOPSETTLEMENTEND_OFFSET))(this, obj);
		}

		::System::Void _StartLinkZoneAvatarUlt_b__45_0(::Class_0_16E4307DCC419505_7* msg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM__STARTLINKZONEAVATARULT_B__45_0_OFFSET))(this, msg);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LINKZONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
