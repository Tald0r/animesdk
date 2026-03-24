#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_3_025FF4981524A424_57;
namespace System { template <typename T> class Action_1; }

#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA110A0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0xDA110B0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET UNITYSDK_OFFSET(0xDA11210)
#define BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET UNITYSDK_OFFSET(0xDA110C0)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c__DisplayClass0_0_TypeDefinitionIndex = 41588;

class BigSceneGroupChallengeUtil___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* ret; // 0x10
	::System::UInt32 challengeID; // 0x18
	::System::UInt32 groupID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__0(::Class_0_16E4307DCC419505_5* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__0_OFFSET))(this, _);
	}

	::System::Void _SetStartGroupChallenge_g__sendStart_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_G__SENDSTART_2_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__3(::System::Boolean isSuccess, ::Class_3_025FF4981524A424_57* rsp)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_025FF4981524A424_57*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__DISPLAYCLASS0_0__SETSTARTGROUPCHALLENGE_B__3_OFFSET))(this, isSuccess, rsp);
	}
};
