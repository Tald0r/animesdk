#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1;

#define BIGSCENEGROUPCHALLENGEUTIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA69F1E0)
#define BIGSCENEGROUPCHALLENGEUTIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA69F220)
#define BIGSCENEGROUPCHALLENGEUTIL___C__REGISTERDYNAMICGROUPCHALLENGE_B__1_3_OFFSET UNITYSDK_OFFSET(0xA69F240)
#define BIGSCENEGROUPCHALLENGEUTIL___C__SETSTARTGROUPCHALLENGE_B__0_1_OFFSET UNITYSDK_OFFSET(0xA69F230)

inline static constexpr unsigned int BigSceneGroupChallengeUtil___c_TypeDefinitionIndex = 71022;

class BigSceneGroupChallengeUtil___c : public ::System::Object
{
public:
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__1_3()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x2E290);
	}
	static ::BigSceneGroupChallengeUtil___c** StaticGet___9()
	{
		return (::BigSceneGroupChallengeUtil___c**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x2E298);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1** StaticGet___9__0_1()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C_1**)Il2CppClass::FromTypeDefinitionIndex(BigSceneGroupChallengeUtil___c_TypeDefinitionIndex)->GetStaticField(0x2E2A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__CTOR_OFFSET))(this);
	}

	::System::Void _SetStartGroupChallenge_b__0_1(::Class_0_16E4307DCC419505_7* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__SETSTARTGROUPCHALLENGE_B__0_1_OFFSET))(this, _);
	}

	::System::Void _RegisterDynamicGroupChallenge_b__1_3(::Class_0_16E4307DCC419505_7* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + BIGSCENEGROUPCHALLENGEUTIL___C__REGISTERDYNAMICGROUPCHALLENGE_B__1_3_OFFSET))(this, _);
	}
};
