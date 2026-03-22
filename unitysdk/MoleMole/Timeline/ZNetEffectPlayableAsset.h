#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ZNetEffectPlayableAsset_Enum_3_575048837920F2D6.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class Class_1_B7637CFF22586878;
class Class_2_DBFFF782E1F7D311;
class Class_3_B2A1AA83B2E0568E;
namespace MoleMole::Config { class AnimatorEventEffectEntry; }
namespace MoleMole::Config { class AnimatorEventMaterialPropertyModifierEntry; }
namespace MoleMole::Config { class EffectAutoDynamicValue; }
namespace MoleMole::EffectSimulate { class ESAvatarMatChange_RendererPartInfo; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_AbilityScriptParm; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower; }
namespace MoleMole::Timeline { class ZNetEffectPlayableAsset_FollowControl; }
namespace SimpleJSON { class JSONNode; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xA4D84A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0xA4D74F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0xA4D8400)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xA4D7480)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0xA4D73B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0xA4D73D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xA4D7470)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_RENDERERPARTINFOSHOWER_OFFSET UNITYSDK_OFFSET(0xA4D8420)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_1_OFFSET UNITYSDK_OFFSET(0xA4DBE50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_OFFSET UNITYSDK_OFFSET(0xA4DBBF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0xA4DEED0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0CA0F288E4E9F674_OFFSET UNITYSDK_OFFSET(0xA4DAFF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xA4DD7E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA4DEC70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_21B2ADC3AAD50EB9_OFFSET UNITYSDK_OFFSET(0xA4D9A70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_22AC46E5805BE83F_OFFSET UNITYSDK_OFFSET(0xA4DD4D0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_23751473993568EB_OFFSET UNITYSDK_OFFSET(0xA4DB430)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_28129A7F028AA224_OFFSET UNITYSDK_OFFSET(0xA4DD950)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_36FDFC20061A5C38_OFFSET UNITYSDK_OFFSET(0xA4DE9B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xA4DEF50)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_4B7E39834DB70AE3_OFFSET UNITYSDK_OFFSET(0xA4D9920)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5BEC58F768475293_OFFSET UNITYSDK_OFFSET(0xA4DE670)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5C654A3AFFD350D6_OFFSET UNITYSDK_OFFSET(0xA4DD260)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5EC21031D31FC8B8_OFFSET UNITYSDK_OFFSET(0xA4DCF70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_6B6AE2B3E1C3264F_OFFSET UNITYSDK_OFFSET(0xA4DDA10)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_87D9A35F3F9238B9_OFFSET UNITYSDK_OFFSET(0xA4DB740)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_8B486314EC25EB4F_OFFSET UNITYSDK_OFFSET(0xA4DDD40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_9770B946D1359C6C_OFFSET UNITYSDK_OFFSET(0xA4DEFB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_98327DE548306CA0_OFFSET UNITYSDK_OFFSET(0xA4DA7C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_995935CA5AEE1183_OFFSET UNITYSDK_OFFSET(0xA4DD5E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A50B566E6CEE3819_OFFSET UNITYSDK_OFFSET(0xA4DC6F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0xA4DE040)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B082310B53C9E248_OFFSET UNITYSDK_OFFSET(0xA4DE8C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B3493B9174B8AE9E_OFFSET UNITYSDK_OFFSET(0xA4DC0B0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B8A9D6E3F5305A10_OFFSET UNITYSDK_OFFSET(0xA4DD670)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_BA84ABFAB33858C8_OFFSET UNITYSDK_OFFSET(0xA4DE320)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_BCC281DC419BB5B6_OFFSET UNITYSDK_OFFSET(0xA4DECF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C1CFF8CC0530F137_OFFSET UNITYSDK_OFFSET(0xA4DEA90)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4DE210)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xA4DE280)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CD181368DDE05640_OFFSET UNITYSDK_OFFSET(0xA4DE420)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D5F8140EAE5C132A_OFFSET UNITYSDK_OFFSET(0xA4DDDB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D67046CBB357BF79_OFFSET UNITYSDK_OFFSET(0xA4DEC00)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DD1EE3A48E307831_OFFSET UNITYSDK_OFFSET(0xA4DDA80)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DE37EEDCAEB4CE8D_OFFSET UNITYSDK_OFFSET(0xA4DC2A0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E4298D7611E3A6CD_OFFSET UNITYSDK_OFFSET(0xA4DA970)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E469629AED66F717_OFFSET UNITYSDK_OFFSET(0xA4DDC30)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_1_OFFSET UNITYSDK_OFFSET(0xA4D8350)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_OFFSET UNITYSDK_OFFSET(0xA4DAF40)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F1F3BF871799E806_OFFSET UNITYSDK_OFFSET(0xA4DDAF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F524573CB966BE22_OFFSET UNITYSDK_OFFSET(0xA4DED70)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0xA4DCFF0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA4D73F0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET UNITYSDK_OFFSET(0xA4D8410)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0xA4D73C0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0xA4D73E0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_RENDERERPARTINFOSHOWER_OFFSET UNITYSDK_OFFSET(0xA4D8490)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4DCBB0)
#define MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0xA4DC8F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ZNetEffectPlayableAsset_TypeDefinitionIndex = 44950;

	class ZNetEffectPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_k_EmptyDirectorsList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x43540);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_s_CreatedPrefabs()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x43548);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_k_EmptyParticlesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x43550);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_s_ProcessedDirectors()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x43558);
		}
		static ::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6>** StaticGet_OnExportTableTypeDropdown()
		{
			return (::Sirenix::OdinInspector::ValueDropdownList_1<::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6>**)Il2CppClass::FromTypeDefinitionIndex(ZNetEffectPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x43560);
		}
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		// static const ::System::String* PREVIEW_GROUP_STR; // 0x0
		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* selfRendererPartInfo; // 0x18
		::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* effectAutoDynamicInfo; // 0x20
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x28
		::System::String* fxGuid; // 0x38
		::UnityEngine::GameObject* prefabGameObject; // 0x40
		::System::Boolean updateParticle; // 0x48
		::System::Boolean particleUseRandom; // 0x49
		::System::UInt32 particleRandomSeed; // 0x4C
		::System::Boolean updateDirector; // 0x50
		::System::Boolean updateITimeControl; // 0x51
		::System::Boolean searchHierarchy; // 0x52
		::System::Boolean active; // 0x53
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x54
		::UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset; // 0x58
		::System::Double m_Duration; // 0x60
		::System::Boolean m_SupportLoop; // 0x68
		::System::Boolean _controllingDirectors_k__BackingField; // 0x69
		::System::Boolean _controllingParticles_k__BackingField; // 0x6A
		::System::String* guid_Editor; // 0x70
		::Class_2_DBFFF782E1F7D311* template_; // 0x78
		::UnityEngine::ExposedReference_1<::UnityEngine::Transform*> bindingTransform; // 0x80
		::System::String* bindingPath; // 0x90
		::UnityEngine::Timeline::TimelineClip* clip; // 0x98
		::UnityEngine::Timeline::TrackAsset* trackAsset; // 0xA0
		::UnityEngine::GameObject* goCtx; // 0xA8
		::UnityEngine::Playables::PlayableGraph graph; // 0xB0
		::System::Boolean controlScale; // 0xC0
		::System::Single timeScale; // 0xC4
		::MoleMole::Timeline::ZNetEffectPlayableAsset_Enum_3_575048837920F2D6 exportTableType; // 0xC8
		::System::Collections::Generic::List_1<::System::Int32>* animatorZoneTags; // 0xD0
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTags_strVer; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* animatorZoneTagsBlackList; // 0xE0
		::System::Boolean _CanShowInTag_k__BackingField; // 0xE8
		::MoleMole::Timeline::ZNetEffectPlayableAsset_FollowControl* followControl; // 0xF0
		::System::Boolean hasAbilityData; // 0xF8
		::MoleMole::Timeline::ZNetEffectPlayableAsset_AbilityScriptParm* abiltyData; // 0x100
		::System::Boolean overrideFxAvatarRendererPartInfo; // 0x108
		::System::Boolean amcEndClear; // 0x109
		::System::Int32 previewBeginFadeOutFrame; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET__CCTOR_OFFSET))();
		}

		::System::Boolean get_controllingDirectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET))(this);
		}

		::System::Void set_controllingDirectors(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET))(this, a1);
		}

		::System::Boolean get_controllingParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET))(this);
		}

		::System::Void set_controllingParticles(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_ONENABLE_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_CanShowInTag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_CANSHOWINTAG_OFFSET))(this);
		}

		::System::Void set_CanShowInTag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_CANSHOWINTAG_OFFSET))(this, a1);
		}

		::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* get_rendererPartInfoShower()
		{
			return ((::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_GET_RENDERERPARTINFOSHOWER_OFFSET))(this);
		}

		::System::Void set_rendererPartInfoShower(::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_SET_RENDERERPARTINFOSHOWER_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_5EC21031D31FC8B8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5EC21031D31FC8B8_OFFSET))(this);
		}

		static ::UnityEngine::Playables::Playable Method_4_5C654A3AFFD350D6(::UnityEngine::Playables::PlayableGraph a1, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5C654A3AFFD350D6_OFFSET))(a1, a2);
		}

		::MoleMole::Config::EffectAutoDynamicValue* Method_4_995935CA5AEE1183()
		{
			return ((::MoleMole::Config::EffectAutoDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_995935CA5AEE1183_OFFSET))(this);
		}

		::System::Void Method_4_B3493B9174B8AE9E(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B3493B9174B8AE9E_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationClip* Method_4_B8A9D6E3F5305A10(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B8A9D6E3F5305A10_OFFSET))(this, a1);
		}

		::System::Void Method_4_0D7638DBC93E5002()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0D7638DBC93E5002_OFFSET))(this);
		}

		::System::Void Method_4_87D9A35F3F9238B9(::UnityEngine::GameObject* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* a2, ::UnityEngine::Playables::PlayableGraph a3, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_87D9A35F3F9238B9_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Playables::Playable Method_4_A50B566E6CEE3819(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A50B566E6CEE3819_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_4_6B6AE2B3E1C3264F(::Class_3_B2A1AA83B2E0568E* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_6B6AE2B3E1C3264F_OFFSET))(this, a1);
		}

		::System::Void Method_4_E4298D7611E3A6CD(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E4298D7611E3A6CD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_4_DD1EE3A48E307831()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DD1EE3A48E307831_OFFSET))(this);
		}

		::Class_1_B7637CFF22586878* Method_4_F1F3BF871799E806(::Class_3_B2A1AA83B2E0568E* a1, ::System::Single a2)
		{
			return ((::Class_1_B7637CFF22586878*(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F1F3BF871799E806_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_E469629AED66F717(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E469629AED66F717_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* Method_4_4B7E39834DB70AE3(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_4B7E39834DB70AE3_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_A871253BFD471C99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_A871253BFD471C99_OFFSET))(this);
		}

		::System::Void Method_4_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CA373AA1C7054598_OFFSET))(this);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* Method_4_E47EEE8FF1774C6E(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_OFFSET))(a1);
		}

		::Class_3_B2A1AA83B2E0568E* Method_4_CCBE730AF445BBD4()
		{
			return ((::Class_3_B2A1AA83B2E0568E*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CCBE730AF445BBD4_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* Method_4_BA84ABFAB33858C8(::Class_1_B7637CFF22586878* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::Class_1_B7637CFF22586878*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_BA84ABFAB33858C8_OFFSET))(this, a1);
		}

		::System::String* Method_4_CD181368DDE05640(::System::Single a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_CD181368DDE05640_OFFSET))(this, a1);
		}

		::System::Void Method_4_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_4_5BEC58F768475293(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_5BEC58F768475293_OFFSET))(this, a1);
		}

		::System::Void Method_4_36FDFC20061A5C38(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_36FDFC20061A5C38_OFFSET))(this, a1);
		}

		::System::Void Method_4_23751473993568EB(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo* a3, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower* a4, ::UnityEngine::Playables::PlayableGraph a5, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::MoleMole::EffectSimulate::ESAvatarMatChange_RendererPartInfo*, ::MoleMole::Timeline::ZNetEffectPlayableAsset_EffectAutoDynamicInfo_EditorShower*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_23751473993568EB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* Method_4_E47EEE8FF1774C6E_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_E47EEE8FF1774C6E_1_OFFSET))(a1);
		}

		static ::System::Void Method_4_D5F8140EAE5C132A(::UnityEngine::Transform* a1, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D5F8140EAE5C132A_OFFSET))(a1, a2);
		}

		::System::Boolean Method_4_C1CFF8CC0530F137(::UnityEngine::GameObject* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_C1CFF8CC0530F137_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_D67046CBB357BF79()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_D67046CBB357BF79_OFFSET))(this);
		}

		::System::Boolean Method_4_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_1D4018D4200358D0_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_4_28129A7F028AA224()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_28129A7F028AA224_OFFSET))(this);
		}

		::System::Void Method_4_05ED597505047531(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Method_4_BCC281DC419BB5B6(::System::String*& a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_BCC281DC419BB5B6_OFFSET))(this, a1);
		}

		::System::Void Method_4_F524573CB966BE22(::MoleMole::Config::AnimatorEventMaterialPropertyModifierEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventMaterialPropertyModifierEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_F524573CB966BE22_OFFSET))(this, a1);
		}

		::System::Void Method_4_8B486314EC25EB4F(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_8B486314EC25EB4F_OFFSET))(this, a1);
		}

		::System::Void Method_4_21B2ADC3AAD50EB9(::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_21B2ADC3AAD50EB9_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_4_0CA0F288E4E9F674(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_0CA0F288E4E9F674_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Method_4_092CD57850778EFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_092CD57850778EFC_OFFSET))(this);
		}

		::System::Boolean Method_4_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_391A84BCD9F51317_OFFSET))(this);
		}

		static ::System::Void Method_4_22AC46E5805BE83F(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::Playable a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_22AC46E5805BE83F_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Method_4_DE37EEDCAEB4CE8D(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_DE37EEDCAEB4CE8D_OFFSET))(a1, a2, a3);
		}

		::System::Void Method_4_05ED597505047531_1(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_05ED597505047531_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_98327DE548306CA0(::UnityEngine::GameObject* a1, ::UnityEngine::Playables::PlayableGraph a2, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_98327DE548306CA0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_4_B082310B53C9E248(::MoleMole::Config::AnimatorEventEffectEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorEventEffectEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_B082310B53C9E248_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Method_4_9770B946D1359C6C(::Class_3_B2A1AA83B2E0568E* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::Class_3_B2A1AA83B2E0568E*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNETEFFECTPLAYABLEASSET_METHOD_4_9770B946D1359C6C_OFFSET))(this, a1);
		}
	};
}
