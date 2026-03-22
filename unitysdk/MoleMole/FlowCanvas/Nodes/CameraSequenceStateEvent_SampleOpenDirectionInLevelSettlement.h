#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceNotifyStateEvent.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config::CameraSequence::Utils { class EntityLocationPolicy; }
namespace Nap::NapECS { class EcsWorld; }
namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x141CD5A0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x141CD630)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYID_OFFSET UNITYSDK_OFFSET(0x141CD970)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYWORLD_OFFSET UNITYSDK_OFFSET(0x141CDB10)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_OUTPUTDIRECTION_OFFSET UNITYSDK_OFFSET(0x141CDA40)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PITCH_OFFSET UNITYSDK_OFFSET(0x141CD890)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PROBELENGTH_OFFSET UNITYSDK_OFFSET(0x141CD7B0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x141CDBE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0x141CDC20)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x141CDC30)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0x141CECE0)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0x141CE090)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x141CED90)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x141CED50)
#define MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__RECEIVENOTIFYTICK_G__DOPROBE_29_0_OFFSET UNITYSDK_OFFSET(0x141CE890)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex = 68570;

	class CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement : public ::PipelineCamera::CameraSequence::CameraSequenceNotifyStateEvent
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_ProbeDirection()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0x344A0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_probeLength()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB60);
		}
		static ::Foundation::Unreal::FName* StaticGet_EntityLocationId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB68);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB70);
		}
		static ::Foundation::Unreal::FName* StaticGet_ProbeFrameCountId()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB78);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_pitch()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB80);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_OutputDirection()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB88);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_EntityWorld()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceStateEvent_SampleOpenDirectionInLevelSettlement_TypeDefinitionIndex)->GetStaticField(0xCB90);
		}
		// static const ::System::Int32 SampleEachFrame = 0x4; // 0x0
		::System::UInt32 EntityId; // 0x50
		::Nap::NapECS::EcsWorld* EntityWorld; // 0x58
		::MoleMole::Config::CameraSequence::Utils::EntityLocationPolicy* PivotLocation; // 0x60
		::System::Single probeLength; // 0x68
		::System::Single pitch; // 0x6C
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OutputDirection; // 0x70
		::System::Boolean makeContextDependent; // 0x78
		::System::Boolean isEntityValid; // 0x79

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__CCTOR_OFFSET))();
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::Single fetch_probeLength(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PROBELENGTH_OFFSET))(this, context);
		}

		::System::Single fetch_pitch(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_PITCH_OFFSET))(this, context);
		}

		::System::UInt32 fetch_EntityId(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYID_OFFSET))(this, context);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* fetch_OutputDirection(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_OUTPUTDIRECTION_OFFSET))(this, context);
		}

		::Nap::NapECS::EcsWorld* fetch_EntityWorld(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_FETCH_ENTITYWORLD_OFFSET))(this, context);
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		static ::System::Void _ReceiveNotifyTick_g__DoProbe_29_0(::UnityEngine::Vector3& location, ::UnityEngine::Vector3& probeDirection, ::System::Single desiredRadius, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* probeResult, ::PipelineCamera::CameraSequence::CameraSequenceContext*& sequenceContext)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CAMERASEQUENCESTATEEVENT_SAMPLEOPENDIRECTIONINLEVELSETTLEMENT__RECEIVENOTIFYTICK_G__DOPROBE_29_0_OFFSET))(location, probeDirection, desiredRadius, probeResult, sequenceContext);
		}
	};
}
