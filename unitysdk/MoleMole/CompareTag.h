#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Conditional.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICompareType.h"
#include "unitysdk/MoleMole/AITargetType.h"

namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_COMPARETAG_DOCOMPARE_OFFSET UNITYSDK_OFFSET(0xCAD11B0)
#define MOLEMOLE_COMPARETAG_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCAD0D10)
#define MOLEMOLE_COMPARETAG__CTOR_OFFSET UNITYSDK_OFFSET(0xCAD1290)
#define MOLEMOLE_COMPARETAG___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xCAD12D0)

namespace MoleMole
{
	inline static constexpr unsigned int CompareTag_TypeDefinitionIndex = 65284;

	class CompareTag : public ::BehaviorDesigner::Runtime::Tasks::Conditional
	{
	public:
		::System::String* TargetTagName; // 0x50
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x58
		::System::Single TargetValue; // 0x60
		::MoleMole::AICompareType CompareType; // 0x64
		::MoleMole::AITargetType TargetType; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPARETAG__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPARETAG_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean DoCompare(::System::Single value1, ::System::Single value2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPARETAG_DOCOMPARE_OFFSET))(this, value1, value2);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMPARETAG___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
