#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/Action.h"
#include "unitysdk/BehaviorDesigner/Runtime/Tasks/TaskStatus.h"

class Class_1_916778923E38503B;
class Class_3_9AE843FF905C0BDB;
class Class_3_F35B080B137ECC46;
namespace MoleMole { class SharedGameEntity; }
namespace System { class String; }

#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET UNITYSDK_OFFSET(0xB871E50)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET UNITYSDK_OFFSET(0xB871FE0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET UNITYSDK_OFFSET(0xB871AA0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB871F70)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0xB872050)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__6_0_OFFSET UNITYSDK_OFFSET(0xB872090)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET UNITYSDK_OFFSET(0xB8721B0)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xB872240)
#define MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB8722D0)

namespace MoleMole
{
	inline static constexpr unsigned int ReturnToBornPositionImmediately_TypeDefinitionIndex = 40961;

	class ReturnToBornPositionImmediately : public ::BehaviorDesigner::Runtime::Tasks::Action
	{
	public:
		::System::String* DitherKey; // 0x58
		::Class_1_916778923E38503B* _ditherModifierInstance; // 0x60
		::Class_3_F35B080B137ECC46* _characterModelComponent; // 0x68
		::Class_3_9AE843FF905C0BDB* _characterMaterialComponent; // 0x70
		::MoleMole::SharedGameEntity* SharedOwnerEntity; // 0x78
		::System::Boolean _arriveBornPos; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONSTART_OFFSET))(this);
		}

		::System::Void DoReturnToBornPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_DORETURNTOBORNPOS_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY_ONRESET_OFFSET))(this);
		}

		::System::Void _OnStart_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY__ONSTART_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONRESET_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONSTART_OFFSET))(this);
		}

		::BehaviorDesigner::Runtime::Tasks::TaskStatus __base_OnUpdate()
		{
			return ((::BehaviorDesigner::Runtime::Tasks::TaskStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_RETURNTOBORNPOSITIONIMMEDIATELY___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
