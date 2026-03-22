#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class RuntimeMaterialCompRecorderInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x67DACA0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x67DAD60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x67DABF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0x67DBBC0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_2_OFFSET UNITYSDK_OFFSET(0x67DC100)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x67DB740)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_60BA9595E3023C0E_OFFSET UNITYSDK_OFFSET(0x67DBD80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_69811FC5A085BFAD_OFFSET UNITYSDK_OFFSET(0x67DC7E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_7F5959D5B740D04C_OFFSET UNITYSDK_OFFSET(0x67DB450)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x67DBD70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x67DBD60)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_895160ADF314448D_OFFSET UNITYSDK_OFFSET(0x67DC110)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_9634C4D93E485511_OFFSET UNITYSDK_OFFSET(0x67DB750)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A29349AFA1B1179C_OFFSET UNITYSDK_OFFSET(0x67DB9C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A33BBF65618779DD_OFFSET UNITYSDK_OFFSET(0x67DB2C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET UNITYSDK_OFFSET(0x67DBBD0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_C5BD12C4FFA6A5D2_OFFSET UNITYSDK_OFFSET(0x67DC450)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x67DB260)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET UNITYSDK_OFFSET(0x67DB730)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x67DB060)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPAUSE_OFFSET UNITYSDK_OFFSET(0x67DB150)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x67DAFF0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x67DB1D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAY_OFFSET UNITYSDK_OFFSET(0x67DB0D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x67DAD80)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_SET_REFERENCETARGET_OFFSET UNITYSDK_OFFSET(0x67DAD70)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x67DB6B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialBehavior_TypeDefinitionIndex = 58354;

	class RuntimeMaterialBehavior : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
	{
	public:
		::UnityEngine::Timeline::AnimationTrack* kFrameTrack; // 0x18
		::UnityEngine::Timeline::TimelineClip* parentRecorderClip; // 0x20
		::UnityEngine::GameObject* referenceGameObj; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Timeline::RuntimeMaterialCompRecorderInfo*>* CompInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Double get_startTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_STARTTIME_OFFSET))(this);
		}

		::System::Double get_endTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_ENDTIME_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_referenceTarget()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_GET_REFERENCETARGET_OFFSET))(this);
		}

		::System::Void set_referenceTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_SET_REFERENCETARGET_OFFSET))(this, a1);
		}

		::System::Void OnProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPROCESSFRAME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void OnPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAY_OFFSET))(this);
		}

		::System::Void OnPause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPAUSE_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Renderer*>* Method_3_A33BBF65618779DD()
		{
			return ((::Il2CppArray<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A33BBF65618779DD_OFFSET))(this);
		}

		::System::Void Method_3_7F5959D5B740D04C(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_7F5959D5B740D04C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_ED01C45E2F8DB392(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::Playable a2, ::UnityEngine::Playables::FrameData a3, ::System::Object* a4, ::System::Single a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_ED01C45E2F8DB392_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Method_3_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_3_9634C4D93E485511(::UnityEngine::GameObject* a1, ::UnityEngine::Timeline::AnimationTrack* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_9634C4D93E485511_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_A5809AB80389F7DE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A5809AB80389F7DE_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_3_832295EC279E5994_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_832295EC279E5994_1_OFFSET))(this);
		}

		::UnityEngine::MeshRenderer* Method_3_60BA9595E3023C0E(::Il2CppArray<::System::String*>* a1)
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_60BA9595E3023C0E_OFFSET))(this, a1);
		}

		::System::Void Method_3_324AEE341AAA7A1B_2(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_324AEE341AAA7A1B_2_OFFSET))(this, a1);
		}

		::System::Void Method_3_895160ADF314448D(::System::Boolean a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_895160ADF314448D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_C5BD12C4FFA6A5D2(::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::UnityEngine::Renderer*, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_C5BD12C4FFA6A5D2_OFFSET))(this, a1);
		}

		::System::Void Method_3_69811FC5A085BFAD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_69811FC5A085BFAD_OFFSET))(this, a1);
		}

		::System::Void Method_3_A29349AFA1B1179C(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALBEHAVIOR_METHOD_3_A29349AFA1B1179C_OFFSET))(this, a1);
		}
	};
}
