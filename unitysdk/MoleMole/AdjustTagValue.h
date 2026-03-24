#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"
#include "unitysdk/MoleMole/AICalculateType.h"
#include "unitysdk/MoleMole/AITargetType.h"

class Class_3_F97B015544BE936B;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_ADJUSTTAGVALUE_CALCTAGVALUE_OFFSET UNITYSDK_OFFSET(0x94DAB60)
#define MOLEMOLE_ADJUSTTAGVALUE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x94DA720)
#define MOLEMOLE_ADJUSTTAGVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x94DAD40)
#define MOLEMOLE_ADJUSTTAGVALUE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x94DAD80)

namespace MoleMole
{
	inline static constexpr unsigned int AdjustTagValue_TypeDefinitionIndex = 43228;

	class AdjustTagValue : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* TagNameB; // 0x58
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x60
		::System::String* AdjustTagName; // 0x68
		::System::String* TagNameA; // 0x70
		::MoleMole::AITargetType TargetType; // 0x78
		::MoleMole::AICalculateType CalculateType; // 0x7C
		::System::Single ValueA; // 0x80
		::System::Single ValueB; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADJUSTTAGVALUE__CTOR_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADJUSTTAGVALUE_ONUPDATE_OFFSET))(this);
		}

		::System::Single CalcTagValue(::Class_3_F97B015544BE936B* characterData)
		{
			return ((::System::Single(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + MOLEMOLE_ADJUSTTAGVALUE_CALCTAGVALUE_OFFSET))(this, characterData);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ADJUSTTAGVALUE___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
