#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define UITRANINGMODEL_GETTRAINQUESTUNLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x16C5D8C0)
#define UITRANINGMODEL_HASVALIDREWARD_OFFSET UNITYSDK_OFFSET(0x16C5DDB0)
#define UITRANINGMODEL_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x16C5DBB0)
#define UITRANINGMODEL_ISREWARDUNLOCKED_OFFSET UNITYSDK_OFFSET(0x16C5DC30)
#define UITRANINGMODEL_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x16C5CE80)
#define UITRANINGMODEL_UPDATESPECIALTRANINGINFO_OFFSET UNITYSDK_OFFSET(0x16C5CBF0)
#define UITRANINGMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5E000)

inline static constexpr unsigned int UITraningModel_TypeDefinitionIndex = 43674;

class UITraningModel : public ::Class_1_8A3658A741325FC2
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* TakeRewardRecordList; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* trainTypes; // 0x20
	::Enum_3_B90C1A15EA6E3C2B LastFromCtrl; // 0x28
	::System::UInt32 CompleteSpecialTrainingNum; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL__CTOR_OFFSET))(this);
	}

	::System::Void UpdateSpecialTraningInfo(::System::UInt32 completeSpecialTrainingNum, ::Class_1_B81AB3851AD916CA<::System::UInt32>* takeRewardRecordList)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_B81AB3851AD916CA<::System::UInt32>*))((::PBYTE)hIl2Cpp + UITRANINGMODEL_UPDATESPECIALTRANINGINFO_OFFSET))(this, completeSpecialTrainingNum, takeRewardRecordList);
	}

	::System::Int32 GetTrainQuestUnlockCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_GETTRAINQUESTUNLOCKCOUNT_OFFSET))(this);
	}

	::System::Boolean IsRewardTaken(::System::Int32 traningRewardID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISREWARDTAKEN_OFFSET))(this, traningRewardID);
	}

	::System::Boolean IsRewardUnlocked(::System::Int32 traningRewardID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UITRANINGMODEL_ISREWARDUNLOCKED_OFFSET))(this, traningRewardID);
	}

	::System::Boolean HasValidReward()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_HASVALIDREWARD_OFFSET))(this);
	}

	::System::Void RefreshRedPoint()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UITRANINGMODEL_REFRESHREDPOINT_OFFSET))(this);
	}
};
