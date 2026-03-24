#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_3_750DA0E74FE20AAE;
namespace BehaviorDesigner::Runtime { class SharedFloat; }
namespace System { class String; }

#define MOLEMOLE_UPDATECD_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x791E2C0)
#define MOLEMOLE_UPDATECD_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x791E520)
#define MOLEMOLE_UPDATECD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x791E8B0)
#define MOLEMOLE_UPDATECD__CTOR_OFFSET UNITYSDK_OFFSET(0x791EB20)
#define MOLEMOLE_UPDATECD___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x791EC00)
#define MOLEMOLE_UPDATECD___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x791EB70)
#define MOLEMOLE_UPDATECD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x791EC90)

namespace MoleMole
{
	inline static constexpr unsigned int UpdateCD_TypeDefinitionIndex = 54740;

	class UpdateCD : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::BehaviorDesigner::Runtime::SharedFloat* CD; // 0x58
		::Class_3_750DA0E74FE20AAE* _aiCharacter; // 0x60
		::BehaviorDesigner::Runtime::SharedFloat* UpdateRatio; // 0x68
		::System::Single randomRangePositive; // 0x70
		::System::Boolean applyPositiveRandom; // 0x74
		::System::Boolean keepUpdating; // 0x75
		::System::Boolean applyNegetiveRandom; // 0x76
		::System::Single randomRangeNegtive; // 0x78
		::System::Single defaultTime; // 0x7C

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
