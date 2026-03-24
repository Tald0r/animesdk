#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicMessageBase.h"

#define CLASS_3_741A783BB79E5BB9_BIGSCENETRACKQUESTUPDATELOGIC_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x6F54770)
#define CLASS_3_741A783BB79E5BB9_BIGSCENETRACKQUESTUPDATELOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x6F54740)

inline static constexpr unsigned int Class_3_741A783BB79E5BB9_BigSceneTrackQuestUpdateLogic_TypeDefinitionIndex = 63321;

class Class_3_741A783BB79E5BB9_BigSceneTrackQuestUpdateLogic : public ::MoleMole::LogicMessageBase
{
public:
	::System::Int32 _version; // 0x20
	::System::Int32 _questID; // 0x24

	::System::Void _ctor(::System::Int32 version, ::System::Int32 questID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_741A783BB79E5BB9_BIGSCENETRACKQUESTUPDATELOGIC__CTOR_OFFSET))(this, version, questID);
	}

	::System::Void OnProcess()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_741A783BB79E5BB9_BIGSCENETRACKQUESTUPDATELOGIC_ONPROCESS_OFFSET))(this);
	}
};
