#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/RBDBattleManager_Struct_2_0781496C6B531BAB.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

#define MOLEMOLE_BATTLE_RBDBATTLEMANAGER_STRUCT_2_EE7C9558D08D2A0D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x366640)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int RBDBattleManager_Struct_2_EE7C9558D08D2A0D_TypeDefinitionIndex = 70873;

	struct alignas(8) RBDBattleManager_Struct_2_EE7C9558D08D2A0D
	{
		::UnityEngine::PhysicsScene Field_2_0; // 0x10
		::Unity::Collections::NativeArray_1<::MoleMole::Battle::RBDBattleManager_Struct_2_0781496C6B531BAB> Field_2_1; // 0x18

		::System::Void Execute(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_RBDBATTLEMANAGER_STRUCT_2_EE7C9558D08D2A0D_EXECUTE_OFFSET))(this, a1);
		}
	};
}
