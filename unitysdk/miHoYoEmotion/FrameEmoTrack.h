#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/EmoTrack.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameCell.h"

namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceFrameBakeData_FrameBinding; }

#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLYBAKEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x18AF2090)
#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLYTICKCELL_OFFSET UNITYSDK_OFFSET(0x18AF1D90)
#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x18AF2540)
#define MIHOYOEMOTION_FRAMEEMOTRACK_BUILDFRAMES_OFFSET UNITYSDK_OFFSET(0x18AF0A70)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x18AEFD50)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x18AF17E0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x18AF1630)
#define MIHOYOEMOTION_FRAMEEMOTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x18AF1470)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GETCELL_OFFSET UNITYSDK_OFFSET(0x18AEFBB0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDCNT_OFFSET UNITYSDK_OFFSET(0x18AF1610)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDLENGTH_OFFSET UNITYSDK_OFFSET(0x18AF1620)
#define MIHOYOEMOTION_FRAMEEMOTRACK_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18AF18C0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATEBAKEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x18AF1F00)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATETICKCEL_OFFSET UNITYSDK_OFFSET(0x18AF1AB0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18AF23D0)
#define MIHOYOEMOTION_FRAMEEMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEF930)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_APPLY_OFFSET UNITYSDK_OFFSET(0x18AF25F0)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x18AF2720)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x18AF2680)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x18AF27C0)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18AF2870)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18AF2900)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoTrack_TypeDefinitionIndex = 36133;

	class FrameEmoTrack : public ::miHoYoEmotion::EmoTrack
	{
	public:
		::miHoYoEmotion::FrameEmoTrack_FrameCell _tickCell; // 0x58
		::Il2CppArray<::miHoYoEmotion::SequenceFrameBakeData_FrameBinding*>* _bakedBindings; // 0x68
		::System::Single _frameBakedCnt; // 0x70
		::System::Single _frameBakedLength; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK__CTOR_OFFSET))(this);
		}

		::System::Single get_frameBakedCnt()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDCNT_OFFSET))(this);
		}

		::System::Single get_frameBakedLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDLENGTH_OFFSET))(this);
		}

		::miHoYoEmotion::FrameEmoTrack_FrameCell GetCell(::miHoYoEmotion::BaseShape* shape)
		{
			return ((::miHoYoEmotion::FrameEmoTrack_FrameCell(*)(::PVOID, ::miHoYoEmotion::BaseShape*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_GETCELL_OFFSET))(this, shape);
		}

		::System::Void EnableShape(::miHoYoEmotion::BaseShape* shape, ::System::Single startTime)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_ENABLESHAPE_OFFSET))(this, shape, startTime);
		}

		::System::Void BuildFrames(::miHoYoEmotion::FrameEmoTrack_FrameCell& preCell, ::miHoYoEmotion::FrameEmoTrack_FrameCell& curCell, ::miHoYoEmotion::FrameEmoTrack_FrameCell& tickCell)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&, ::miHoYoEmotion::FrameEmoTrack_FrameCell&))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_BUILDFRAMES_OFFSET))(this, preCell, curCell, tickCell);
		}

		::System::Void ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void ClearInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_CLEARINTERNAL_OFFSET))(this);
		}

		::System::Void ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* bakeData)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_PLAYBAKEDSEQUENCE_OFFSET))(this, bakeData);
		}

		::System::Void UpdateTickCel(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_UPDATETICKCEL_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyTickCell()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_APPLYTICKCELL_OFFSET))(this);
		}

		::System::Void UpdateBakedBindings(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_UPDATEBAKEDBINDINGS_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyBakedBindings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_APPLYBAKEDBINDINGS_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK_APPLY_OFFSET))(this);
		}

		::System::Void __base_Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_APPLY_OFFSET))(this);
		}

		::System::Void __base_ClearShape()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPE_OFFSET))(this);
		}

		::System::Void __base_ClearShapeOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPEONLY_OFFSET))(this);
		}

		::System::Void __base_EnableShape(::miHoYoEmotion::BaseShape* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::BaseShape*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_ENABLESHAPE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_PlayBakedSequence(::miHoYoEmotion::SequenceBakeData_BakeData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::SequenceBakeData_BakeData*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_PLAYBAKEDSEQUENCE_OFFSET))(this, P0);
		}

		::System::Void __base_Update(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMEEMOTRACK___BASE_UPDATE_OFFSET))(this, P0);
		}
	};
}
