#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_26.h"
#include "unitysdk/Enum_3_7FBB51FF974221B2.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_MPNETWORKHELPER_GET_GAMETYPE_OFFSET UNITYSDK_OFFSET(0xB2EE570)
#define MOLEMOLE_MPNETWORKHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2EE5E0)

namespace MoleMole
{
	inline static constexpr unsigned int MpNetworkHelper_TypeDefinitionIndex = 38105;

	class MpNetworkHelper : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		static ::MoleMole::MpNetworkHelper** StaticGet_Ins()
		{
			return (::MoleMole::MpNetworkHelper**)Il2CppClass::FromTypeDefinitionIndex(MpNetworkHelper_TypeDefinitionIndex)->GetStaticField(0x31780);
		}
		::System::Int32 ProcessId; // 0x58
		::System::String* ip; // 0x60
		::System::UInt16 port; // 0x68
		::System::UInt32 uid; // 0x6C
		::System::UInt32 roomId; // 0x70
		::System::UInt32 playerCount; // 0x74
		::System::Boolean enableAutoFight; // 0x78
		::System::Single autoFightAttackInterval; // 0x7C
		::System::Boolean openVerboseLog; // 0x80
		::System::Boolean enableBattleAdjustDetail; // 0x81
		::System::Boolean enableLongTimeout; // 0x82
		::System::Boolean enableDebugDraw; // 0x83
		::System::Boolean drawMultiplayerInfo; // 0x84
		::System::Boolean enlargeMaxHP; // 0x85
		::System::Boolean _isConnected; // 0x86
		::System::Boolean _isLogined; // 0x87
		::System::Int32 _loginRetcode; // 0x88
		::System::Single _pingIdleTime; // 0x8C
		::System::UInt32 _nextBuddyRobotID; // 0x90
		::System::Collections::Generic::HashSet_1<::MoleMole::Battle::Entity*>* _disableAIMonsterSet; // 0x98
		::System::Boolean _disableMonsterAI; // 0xA0
		::System::Boolean _disableMonsterNewTarget; // 0xA1
		::Enum_3_0A3761FE34514D6C_26 partyGamePlayType; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MPNETWORKHELPER__CTOR_OFFSET))(this);
		}

		::Enum_3_7FBB51FF974221B2 get_GameType()
		{
			return ((::Enum_3_7FBB51FF974221B2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MPNETWORKHELPER_GET_GAMETYPE_OFFSET))(this);
		}
	};
}
