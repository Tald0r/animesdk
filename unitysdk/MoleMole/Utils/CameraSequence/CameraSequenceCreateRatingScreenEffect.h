#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Utils/CameraSequence/CameraSequenceRatingEffect.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceVariableCollector.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }
namespace System { class String; }

#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x68561E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x6856270)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_EXTRARATINGSCREENEFFECTKEY_OFFSET UNITYSDK_OFFSET(0x68563F0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_ISONLYEXTRA_OFFSET UNITYSDK_OFFSET(0x6856480)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_PLAYERID_OFFSET UNITYSDK_OFFSET(0x68565E0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_POSITIONWITHOFFSET_OFFSET UNITYSDK_OFFSET(0x6856510)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_TARGETID_OFFSET UNITYSDK_OFFSET(0x68566B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_GET_EVENTNAME_OFFSET UNITYSDK_OFFSET(0x6855E90)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x6855ED0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x68567B0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x6856780)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_BUILDDATAPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x68568C0)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_COLLECTVARIABLEINTERNAL_OFFSET UNITYSDK_OFFSET(0x6856920)
#define MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET UNITYSDK_OFFSET(0x6856960)

namespace MoleMole::Utils::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex = 39774;

	class CameraSequenceCreateRatingScreenEffect : public ::MoleMole::Utils::CameraSequence::CameraSequenceRatingEffect
	{
	public:
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PlayerID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex)->GetStaticField(0xD0B0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_IsOnlyExtra()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex)->GetStaticField(0xD0B8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_ExtraRatingScreenEffectKey()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex)->GetStaticField(0xD0C0);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_PositionWithOffset()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex)->GetStaticField(0xD0C8);
		}
		static ::Foundation::Unreal::FName* StaticGet___some_prefix_to_avoid_conflict_TargetID()
		{
			return (::Foundation::Unreal::FName*)Il2CppClass::FromTypeDefinitionIndex(CameraSequenceCreateRatingScreenEffect_TypeDefinitionIndex)->GetStaticField(0xD0D0);
		}
		::System::String* CustomRatingConfgsKey; // 0x58
		::System::String* ExtraRatingScreenEffectKey; // 0x60
		::System::Boolean IsOnlyExtra; // 0x68
		::System::Single PositionWithOffset; // 0x6C
		::System::Boolean usePositionAsTimestamp; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT__CCTOR_OFFSET))();
		}

		::System::String* get_EventName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_GET_EVENTNAME_OFFSET))(this);
		}

		::System::Void ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& context)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_RECEIVENOTIFYBEGIN_OFFSET))(this, context);
		}

		::System::Void BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector collector)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_COLLECTVARIABLEINTERNAL_OFFSET))(this, collector);
		}

		::System::String* fetch_ExtraRatingScreenEffectKey(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::String*(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_EXTRARATINGSCREENEFFECTKEY_OFFSET))(this, context);
		}

		::System::Boolean fetch_IsOnlyExtra(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_ISONLYEXTRA_OFFSET))(this, context);
		}

		::System::Single fetch_PositionWithOffset(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_POSITIONWITHOFFSET_OFFSET))(this, context);
		}

		::System::UInt32 fetch_PlayerID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_PLAYERID_OFFSET))(this, context);
		}

		::System::UInt32 fetch_TargetID(::PipelineCamera::CameraSequence::CameraSequenceContext* context)
		{
			return ((::System::UInt32(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT_FETCH_TARGETID_OFFSET))(this, context);
		}

		::System::Void __base_BuildDataPathInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_BUILDDATAPATHINTERNAL_OFFSET))(this);
		}

		::System::Void __base_CollectVariableInternal(::PipelineCamera::CameraSequence::CameraSequenceVariableCollector P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceVariableCollector))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_COLLECTVARIABLEINTERNAL_OFFSET))(this, P0);
		}

		::System::Void __base_ReceiveNotifyBegin(::PipelineCamera::CameraSequence::CameraSequenceContext*& P0)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraSequence::CameraSequenceContext*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UTILS_CAMERASEQUENCE_CAMERASEQUENCECREATERATINGSCREENEFFECT___BASE_RECEIVENOTIFYBEGIN_OFFSET))(this, P0);
		}
	};
}
