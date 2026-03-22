#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices::Leaderboards { class GetLeaderboardRecordCountOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x259A50)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8D1D90)
#define EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x78EB40)

namespace Epic::OnlineServices::Leaderboards
{
	inline static constexpr unsigned int GetLeaderboardRecordCountOptionsInternal_TypeDefinitionIndex = 32750;

	struct alignas(4) GetLeaderboardRecordCountOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10

		::System::Void Set(::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Leaderboards::GetLeaderboardRecordCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LEADERBOARDS_GETLEADERBOARDRECORDCOUNTOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
