#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoBPLevelAnimation; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA7E90B0)
#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0xA7E9040)
#define MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362__CTOR_OFFSET UNITYSDK_OFFSET(0xA7E9030)

namespace MoleMole
{
	inline static constexpr unsigned int MonoBPLevelAnimation_Class_1_6470203AB5D58362_TypeDefinitionIndex = 41992;

	class MonoBPLevelAnimation_Class_1_6470203AB5D58362 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Single>* Field_1_4; // 0x10
		::System::Action_1<::System::Single>* Field_1_3; // 0x18
		::MoleMole::MonoBPLevelAnimation* Field_1_0; // 0x20
		::UnityEngine::AnimationCurve* Field_1_2; // 0x28
		::System::Single Field_1_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_6D8B8CD47CD59618()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
		}

		::System::Void Method_1_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOBPLEVELANIMATION_CLASS_1_6470203AB5D58362_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
		}
	};
}
