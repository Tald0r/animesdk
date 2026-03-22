#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76A758F872DFBC83.h"
#include "unitysdk/Enum_3_97EC0F5E46F61E50.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_AE02BC8285203464_4;

#define MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_1_OFFSET UNITYSDK_OFFSET(0xA4A18C0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_OFFSET UNITYSDK_OFFSET(0xA4A11B0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET UNITYSDK_OFFSET(0xA4A13B0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0xA4A07F0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDDRIFT_OFFSET UNITYSDK_OFFSET(0xA4A0DD0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDITEM_OFFSET UNITYSDK_OFFSET(0xA4A0EB0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDLEVEL_OFFSET UNITYSDK_OFFSET(0xA4A1120)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDSKILL_OFFSET UNITYSDK_OFFSET(0xA4A1090)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDTRIGGERTRAP_OFFSET UNITYSDK_OFFSET(0xA4A1290)
#define MOLEMOLE_SURFLOGSUBSYSTEM_STARTSURF_OFFSET UNITYSDK_OFFSET(0xA4A0A60)
#define MOLEMOLE_SURFLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A19A0)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem_TypeDefinitionIndex = 55671;

	class SurfLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SurfLogSubsystem*>
	{
	public:
		::Class_3_AE02BC8285203464_4* _data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetGeneralLevelID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET))();
		}

		::System::Void StartSurf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_STARTSURF_OFFSET))(this);
		}

		::System::Void RecordDrift(::System::Int32 duration, ::System::Boolean hit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDDRIFT_OFFSET))(this, duration, hit);
		}

		::System::Int32 RecordItem(::System::Int32 itemId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDITEM_OFFSET))(this, itemId);
		}

		::System::Void RecordSkill(::System::Int32 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDSKILL_OFFSET))(this, time);
		}

		::System::Void RecordLevel(::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDLEVEL_OFFSET))(this, rank);
		}

		::System::Void RecordTriggerTrap(::System::Int32 id, ::System::Int32 order, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDTRIGGERTRAP_OFFSET))(this, id, order, position);
		}

		::System::Void FinishAndSendRequest(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET))(this, result);
		}

		static ::System::UInt32 Encode(::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::UInt32(*)(::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_OFFSET))(rank);
		}

		static ::System::UInt32 Encode_1(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::UInt32(*)(::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_1_OFFSET))(result);
		}
	};
}
