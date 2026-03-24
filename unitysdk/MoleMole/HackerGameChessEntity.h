#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessEntity.h"
#include "unitysdk/MoleMole/HackerGameDamageData.h"
#include "unitysdk/MoleMole/StatusEffectType.h"

class Class_1_46BF3F90EBBA041A;
class Class_1_481C77891EF02060;
namespace MoleMole::FlowCanvas { class HackShardedInfo; }

#define MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0xD0E5740)
#define MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0xD0E5660)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET UNITYSDK_OFFSET(0xD0E57C0)
#define MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xD0E5680)
#define MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET UNITYSDK_OFFSET(0xD0E5670)
#define MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0xD0E5830)
#define MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0xD0E5840)

namespace MoleMole
{
	inline static constexpr unsigned int HackerGameChessEntity_TypeDefinitionIndex = 69567;

	class HackerGameChessEntity : public ::MoleMole::ChessEntity
	{
	public:
		::MoleMole::FlowCanvas::HackShardedInfo* ShardedInfo; // 0x40
		::Class_1_481C77891EF02060* _Damageable_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY__CTOR_OFFSET))(this);
		}

		::Class_1_481C77891EF02060* get_Damageable()
		{
			return ((::Class_1_481C77891EF02060*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_GET_DAMAGEABLE_OFFSET))(this);
		}

		::System::Void set_Damageable(::Class_1_481C77891EF02060* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_481C77891EF02060*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_SET_DAMAGEABLE_OFFSET))(this, value);
		}

		::System::Void OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONUPDATEINTERNAL_OFFSET))(this);
		}

		::System::Void AttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void OnAttachHackShardedInfo(::MoleMole::FlowCanvas::HackShardedInfo* shardedInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::HackShardedInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY_ONATTACHHACKSHARDEDINFO_OFFSET))(this, shardedInfo);
		}

		::System::Void __base_OnUpdateInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERGAMECHESSENTITY___BASE_ONUPDATEINTERNAL_OFFSET))(this);
		}
	};
}
