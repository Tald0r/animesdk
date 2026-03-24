#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xEA35E20)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xEA35EB0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_APPLYDUMPKEY_OFFSET UNITYSDK_OFFSET(0xEA36030)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_ISWORLDPOSAPPLY_OFFSET UNITYSDK_OFFSET(0xEA360C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_PLAYERID_OFFSET UNITYSDK_OFFSET(0xEA36150)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_TARGETID_OFFSET UNITYSDK_OFFSET(0xEA36220)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0xEA353C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_GET_ISCONTEXTDEPENDENT_OFFSET UNITYSDK_OFFSET(0xEA35400)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xEA35410)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xEA35DA0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xEA355E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0xEA36330)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xEA362F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0xEA363F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0xEA36450)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0xEA36490)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYEND_OFFSET UNITYSDK_OFFSET(0xEA36500)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYTICK_OFFSET UNITYSDK_OFFSET(0xEA36570)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceApplyRatingEffectOffset_TypeDefinitionIndex = 78648;

	class CameraSequenceApplyRatingEffectOffset : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceApplyRatingEffectOffset_TypeDefinitionIndex)->GetStaticField(0xC620);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsWorldPosApply()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceApplyRatingEffectOffset_TypeDefinitionIndex)->GetStaticField(0xC628);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceApplyRatingEffectOffset_TypeDefinitionIndex)->GetStaticField(0xC630);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ApplyDumpKey()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceApplyRatingEffectOffset_TypeDefinitionIndex)->GetStaticField(0xC638);
		}
		// static const ::System::String* START_OFFSET_KEY; // 0x0
		::Il2CppArray<::System::String*>* ApplyDumpKey; // 0x58
		::System::Int32 logCount; // 0x60
		::UnityEngine::Vector3 _initPos; // 0x64
		::System::Single _totalDelta; // 0x70
		::System::Boolean IsWorldPosApply; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Boolean get_IsContextDependent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_GET_ISCONTEXTDEPENDENT_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYTICK_OFFSET))(this, context, deltaTime);
		}

		::System::Void ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_RECEIVENOTIFYEND_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::Il2CppArray<::System::String*>* fetch_ApplyDumpKey(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_APPLYDUMPKEY_OFFSET))(this, context);
		}

		::System::Boolean fetch_IsWorldPosApply(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_ISWORLDPOSAPPLY_OFFSET))(this, context);
		}

		::System::UInt32 fetch_PlayerID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_PLAYERID_OFFSET))(this, context);
		}

		::System::UInt32 fetch_TargetID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET_FETCH_TARGETID_OFFSET))(this, context);
		}

		::System::Void __base_BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void __base_CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_COLLECTVARIABLEINTERNAL_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyEnd(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYEND_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyTick(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCEAPPLYRATINGEFFECTOFFSET___BASE_RECEIVENOTIFYTICK_OFFSET))(this, P0, P1);
		}
	};
}
