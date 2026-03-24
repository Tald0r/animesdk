#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SceneObjectType.h"
#include "unitysdk/System/Object.h"

class Class_2_B465613E80DCD908;
class MainCityObjectState_ScriptConfig;

#define CLASS_1_87F855E9737731A7_METHOD_1_1F4BF1DF3103D521_OFFSET UNITYSDK_OFFSET(0x6ADAFC0)
#define CLASS_1_87F855E9737731A7__CTOR_OFFSET UNITYSDK_OFFSET(0x6ADAFB0)

inline static constexpr unsigned int Class_1_87F855E9737731A7_TypeDefinitionIndex = 60724;

class Class_1_87F855E9737731A7 : public ::System::Object
{
public:
	::Class_2_B465613E80DCD908* Field_1_0; // 0x10
	::MainCityObjectState_ScriptConfig* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F855E9737731A7__CTOR_OFFSET))(this);
	}

	::SceneObjectType Method_1_1F4BF1DF3103D521()
	{
		return ((::SceneObjectType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87F855E9737731A7_METHOD_1_1F4BF1DF3103D521_OFFSET))(this);
	}
};
