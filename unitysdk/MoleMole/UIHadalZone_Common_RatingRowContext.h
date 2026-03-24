#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_5DA2E7556103D5A3_254;
namespace System { class String; }

#define MOLEMOLE_UIHADALZONE_COMMON_RATINGROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA9B4520)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_Common_RatingRowContext_TypeDefinitionIndex = 40922;

	class UIHadalZone_Common_RatingRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_5DA2E7556103D5A3_254* entranceTemplate; // 0x28
		::System::String* TaskText; // 0x30
		::System::Boolean isTimeType; // 0x38
		::System::Boolean isLose; // 0x39
		::System::Boolean isFinished; // 0x3A
		::System::Boolean isPlayAnimAuto; // 0x3B
		::System::Int32 rankingNonTimedThredshold; // 0x3C
		::MoleMole::Level::RatingType rankingType; // 0x40
		::System::Int32 rankingSeconds; // 0x44
		::System::Int32 maxRankingSeconds; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_COMMON_RATINGROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
