#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_750DA0E74FE20AAE;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace System { class String; }

#define MOLEMOLE_UPDATECD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x64469F0)
#define MOLEMOLE_UPDATECD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6446C30)
#define MOLEMOLE_UPDATECD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6446FC0)
#define MOLEMOLE_UPDATECD__CTOR_OFFSET UNITYSDK_OFFSET(0x6447230)
#define MOLEMOLE_UPDATECD___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x6447310)
#define MOLEMOLE_UPDATECD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x6447280)
#define MOLEMOLE_UPDATECD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x64473A0)

namespace MoleMole
{
	inline static constexpr unsigned int UpdateCD_TypeDefinitionIndex = 61225;

	class UpdateCD : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* CD; // 0x58
		::BehaviorDesigner::Runtime::SharedFloat* UpdateRatio; // 0x60
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x68
		::System::Boolean keepUpdating; // 0x70
		::System::Boolean applyPositiveRandom; // 0x71
		::System::Boolean applyNegetiveRandom; // 0x72
		::System::Single defaultTime; // 0x74
		::System::Single randomRangePositive; // 0x78
		::System::Single randomRangeNegtive; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_ONAWAKE_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_ONUPDATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD_TOSTRING_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UPDATECD___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
