#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_054FCEA7D0BC7163.h"
#include "unitysdk/Struct_2_77E02A35C116A0EE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_BDDDDB46A99CFF4C;
class Class_3_F33F9DC5F4112336;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILDANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x9BBCB20)
#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILDEXTRAANIMATORZONEINFOS_OFFSET UNITYSDK_OFFSET(0x9BBCAB0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_BUILD_OFFSET UNITYSDK_OFFSET(0x9BBC940)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_1_OFFSET UNITYSDK_OFFSET(0x9BBC1B0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_OFFSET UNITYSDK_OFFSET(0x9BBC060)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CLEAR_OFFSET UNITYSDK_OFFSET(0x9BBDE70)
#define MOLEMOLE_CONFIG_ANIMATORZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x9BBE760)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ENTERZONE_OFFSET UNITYSDK_OFFSET(0x9BBDFE0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_EXITZONE_OFFSET UNITYSDK_OFFSET(0x9BBE370)
#define MOLEMOLE_CONFIG_ANIMATORZONE_FORCEEXIT_OFFSET UNITYSDK_OFFSET(0x9BBEC80)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENTLIST_OFFSET UNITYSDK_OFFSET(0x9BBE7E0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENT_OFFSET UNITYSDK_OFFSET(0x9BBE9E0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GETSEGMENTNAMEBYANIMATORINFO_OFFSET UNITYSDK_OFFSET(0xEC31AA0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GETZONETAGCOLOR_OFFSET UNITYSDK_OFFSET(0x9BBBE90)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x9BBC930)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEPRELOAD_OFFSET UNITYSDK_OFFSET(0x9BBBC50)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x9BBBBE0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_GET_SHOULDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x9BBBB70)
#define MOLEMOLE_CONFIG_ANIMATORZONE_INIT_OFFSET UNITYSDK_OFFSET(0x9BBBCC0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONINIT_OFFSET UNITYSDK_OFFSET(0x9BBBDA0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONLAYERSTATESEGMENTDICTCHANGED_OFFSET UNITYSDK_OFFSET(0x9BBC3B0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x9BBE6C0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x9BBE2E0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x9BBE630)
#define MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEPRELOAD_OFFSET UNITYSDK_OFFSET(0x9BBDF70)
#define MOLEMOLE_CONFIG_ANIMATORZONE_PREPROCESSANIMATORZONE_OFFSET UNITYSDK_OFFSET(0x9BBED90)
#define MOLEMOLE_CONFIG_ANIMATORZONE_PROCESSANIMATORZONE_OFFSET UNITYSDK_OFFSET(0xEC30DC0)
#define MOLEMOLE_CONFIG_ANIMATORZONE_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x9BBDF10)
#define MOLEMOLE_CONFIG_ANIMATORZONE_SETSHOULDHANDLEBEFOREPHYSICS_OFFSET UNITYSDK_OFFSET(0x9BBBE10)
#define MOLEMOLE_CONFIG_ANIMATORZONE__CTOR_OFFSET UNITYSDK_OFFSET(0xEC31F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZone_TypeDefinitionIndex = 69890;

	class AnimatorZone : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _WhiteTagList; // 0x10
		::System::Type* typeCache; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* WhiteList; // 0x20
		::Il2CppArray<::System::String*>* _BlackagList; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* BlackList; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>* LayerStateSegmentDict; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>* _LayerStateHashSegmentDict; // 0x40
		::System::Boolean IsSeam; // 0x48
		::Enum_3_054FCEA7D0BC7163 _callbackFlags; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShouldHandleBeforePhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_SHOULDHANDLEBEFOREPHYSICS_OFFSET))(this);
		}

		::System::Boolean get_NeedHandleUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean get_NeedHandlePreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_NEEDHANDLEPRELOAD_OFFSET))(this);
		}

		::System::Void Init(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_INIT_OFFSET))(this, animatorComponent);
		}

		::System::Void OnInit(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void SetShouldHandleBeforePhysics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_SETSHOULDHANDLEBEFOREPHYSICS_OFFSET))(this, value);
		}

		::UnityEngine::Color GetZoneTagColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GETZONETAGCOLOR_OFFSET))(this);
		}

		::System::Boolean CheckZoneTagList(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Boolean isPrev, ::System::Int32 layerIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_BDDDDB46A99CFF4C*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_OFFSET))(this, animatorComponent, zoneInfo, isPrev, layerIndex);
		}

		::System::Boolean CheckZoneTagList_1(::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Boolean isPrev)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CHECKZONETAGLIST_1_OFFSET))(this, animatorComponent, isPrev);
		}

		::System::Void OnLayerStateSegmentDictChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONLAYERSTATESEGMENTDICTCHANGED_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Int32 Build(::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILD_OFFSET))(this, animatorComponent);
		}

		::System::Void BuildExtraAnimatorZoneInfos(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_BDDDDB46A99CFF4C*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILDEXTRAANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void BuildAnimatorZoneInfos(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_BDDDDB46A99CFF4C*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_BUILDANIMATORZONEINFOS_OFFSET))(this, animatorComponent, zoneInfo);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CLEAR_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_RESETSTATE_OFFSET))(this);
		}

		::System::Void OnZonePreload(::MoleMole::Battle::Entity* entity, ::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEPRELOAD_OFFSET))(this, entity, animatorComponent);
		}

		::System::Void EnterZone(::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*& toHandleAnimatorZones, ::Class_3_F33F9DC5F4112336* animatorComponent, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*&, ::Class_3_F33F9DC5F4112336*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ENTERZONE_OFFSET))(this, toHandleAnimatorZones, animatorComponent, curStateInfo, zoneInfo, deltaTime, layerIndex);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void ExitZone(::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*& toHandleAnimatorZones, ::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*&, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_EXITZONE_OFFSET))(this, toHandleAnimatorZones, animatorComponent, stateNormalizedTime, zoneInfo, deltaTime, layerIndex);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::Class_1_BDDDDB46A99CFF4C*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::Class_1_BDDDDB46A99CFF4C* CreateZoneInfoInstance()
		{
			return ((::Class_1_BDDDDB46A99CFF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>* GeCurtAnimatorStateTimeSegmentList(::Class_1_BDDDDB46A99CFF4C* zoneInfo)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*(*)(::PVOID, ::Class_1_BDDDDB46A99CFF4C*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENTLIST_OFFSET))(this, zoneInfo);
		}

		::MoleMole::Config::AnimatorStateTimeSegment* GeCurtAnimatorStateTimeSegment(::System::Int32 idx, ::Class_1_BDDDDB46A99CFF4C* zoneInfo)
		{
			return ((::MoleMole::Config::AnimatorStateTimeSegment*(*)(::PVOID, ::System::Int32, ::Class_1_BDDDDB46A99CFF4C*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GECURTANIMATORSTATETIMESEGMENT_OFFSET))(this, idx, zoneInfo);
		}

		::System::Void ForceExit(::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::Class_3_F33F9DC5F4112336* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDDDDB46A99CFF4C*, ::Class_3_F33F9DC5F4112336*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_FORCEEXIT_OFFSET))(this, zoneInfo, animatorComponent);
		}

		::System::Boolean PreprocessAnimatorZone(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Int32 layerIndex, ::System::Int32 prevStateName, ::System::Int32 curStateName, ::UnityEngine::AnimatorStateInfo& prevStateInfo, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::System::Boolean isHasPrevStateName, ::System::Boolean isHasCurrentStateName, ::System::Single prevStateFrameCount, ::System::Single curStateFrameCount, ::System::Single preNormalizedTime, ::System::Single curNormalizedTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_BDDDDB46A99CFF4C*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_PREPROCESSANIMATORZONE_OFFSET))(this, animatorComponent, zoneInfo, layerIndex, prevStateName, curStateName, prevStateInfo, curStateInfo, isHasPrevStateName, isHasCurrentStateName, prevStateFrameCount, curStateFrameCount, preNormalizedTime, curNormalizedTime);
		}

		::System::Boolean ProcessAnimatorZone(::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*& toHandleAnimatorZones, ::System::Int32 layerIndex, ::System::Boolean isStateHashEqual, ::System::Boolean curStateReEntered, ::System::Boolean isPreEqualCurState, ::System::Boolean isPreAnimStateInfoFirstAdd, ::UnityEngine::AnimatorStateInfo& prevStateInfo, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::Class_3_F33F9DC5F4112336* animatorComponent, ::System::Single preNormalizedTime, ::System::Single curNormalizedTime, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_77E02A35C116A0EE>*&, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::AnimatorStateInfo&, ::UnityEngine::AnimatorStateInfo&, ::Class_1_BDDDDB46A99CFF4C*, ::Class_3_F33F9DC5F4112336*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_PROCESSANIMATORZONE_OFFSET))(this, toHandleAnimatorZones, layerIndex, isStateHashEqual, curStateReEntered, isPreEqualCurState, isPreAnimStateInfoFirstAdd, prevStateInfo, curStateInfo, zoneInfo, animatorComponent, preNormalizedTime, curNormalizedTime, deltaTime);
		}

		::System::Boolean GetSegmentNameByAnimatorInfo(::Class_3_F33F9DC5F4112336* animatorComponent, ::Class_1_BDDDDB46A99CFF4C* zoneInfo, ::System::Boolean isPrev, ::System::Int32 layerIndex, ::System::Int32 stateName, ::System::Single stateFrameCount, ::System::Single stateNormalizedTime, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>* timeSegments, ::System::Boolean& inTimeRange, ::System::Int32& timeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F33F9DC5F4112336*, ::Class_1_BDDDDB46A99CFF4C*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*, ::System::Boolean&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONE_GETSEGMENTNAMEBYANIMATORINFO_OFFSET))(this, animatorComponent, zoneInfo, isPrev, layerIndex, stateName, stateFrameCount, stateNormalizedTime, timeSegments, inTimeRange, timeIndex);
		}
	};
}
