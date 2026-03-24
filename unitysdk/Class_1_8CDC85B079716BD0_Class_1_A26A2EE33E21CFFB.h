#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class Action; }

#define CLASS_1_8CDC85B079716BD0_CLASS_1_A26A2EE33E21CFFB_METHOD_1_D8299432719B3C68_OFFSET UNITYSDK_OFFSET(0x8DF5FB0)
#define CLASS_1_8CDC85B079716BD0_CLASS_1_A26A2EE33E21CFFB__CTOR_OFFSET UNITYSDK_OFFSET(0x8DF5FA0)

inline static constexpr unsigned int Class_1_8CDC85B079716BD0_Class_1_A26A2EE33E21CFFB_TypeDefinitionIndex = 79440;

class Class_1_8CDC85B079716BD0_Class_1_A26A2EE33E21CFFB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CDC85B079716BD0_CLASS_1_A26A2EE33E21CFFB__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_D8299432719B3C68(::System::Threading::CancellationToken a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CLASS_1_8CDC85B079716BD0_CLASS_1_A26A2EE33E21CFFB_METHOD_1_D8299432719B3C68_OFFSET))(this, a1);
	}
};
