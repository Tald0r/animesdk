#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/miHoYoEmotion/EmoTrack.h"
#include "unitysdk/miHoYoEmotion/FrameEmoTrack_FrameCell.h"

namespace miHoYoEmotion { class BaseShape; }
namespace miHoYoEmotion { class SequenceBakeData_BakeData; }
namespace miHoYoEmotion { class SequenceFrameBakeData_FrameBinding; }

#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLYBAKEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x18FDCA40)
#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLYTICKCELL_OFFSET UNITYSDK_OFFSET(0x18FDC740)
#define MIHOYOEMOTION_FRAMEEMOTRACK_APPLY_OFFSET UNITYSDK_OFFSET(0x18FDCEE0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_BUILDFRAMES_OFFSET UNITYSDK_OFFSET(0x18FDB430)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARINTERNAL_OFFSET UNITYSDK_OFFSET(0x18FDA710)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x18FDC1A0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x18FDBFF0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x18FDBE30)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GETCELL_OFFSET UNITYSDK_OFFSET(0x18FDA570)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDCNT_OFFSET UNITYSDK_OFFSET(0x18FDBFD0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_GET_FRAMEBAKEDLENGTH_OFFSET UNITYSDK_OFFSET(0x18FDBFE0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18FDC270)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATEBAKEDBINDINGS_OFFSET UNITYSDK_OFFSET(0x18FDC8B0)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATETICKCEL_OFFSET UNITYSDK_OFFSET(0x18FDC460)
#define MIHOYOEMOTION_FRAMEEMOTRACK_UPDATE_OFFSET UNITYSDK_OFFSET(0x18FDCD80)
#define MIHOYOEMOTION_FRAMEEMOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x18FDA300)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_APPLY_OFFSET UNITYSDK_OFFSET(0x18FDCF90)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPEONLY_OFFSET UNITYSDK_OFFSET(0x18FDD0C0)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_CLEARSHAPE_OFFSET UNITYSDK_OFFSET(0x18FDD020)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_ENABLESHAPE_OFFSET UNITYSDK_OFFSET(0x18FDD160)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_PLAYBAKEDSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18FDD210)
#define MIHOYOEMOTION_FRAMEEMOTRACK___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x18FDD2A0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameEmoTrack_TypeDefinitionIndex = 37153;

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
