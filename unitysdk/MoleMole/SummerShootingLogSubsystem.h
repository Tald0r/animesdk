#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_76A758F872DFBC83.h"
#include "unitysdk/Enum_3_97EC0F5E46F61E50.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_3.h"

class Class_3_0886A771C4D53727_2;
class Class_3_6EF456A21AE85EEC_42;
class Class_3_C925DD9FCB5E4906;
class Class_3_F2CFA9B4BE5416FF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETCREATE_OFFSET UNITYSDK_OFFSET(0xD82CBE0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHITTARGETRECORD_OFFSET UNITYSDK_OFFSET(0xD82D420)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHIT_OFFSET UNITYSDK_OFFSET(0xD82CFA0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CLEARBULLETRECORD_OFFSET UNITYSDK_OFFSET(0xD82BF50)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CREATEPATTERN_OFFSET UNITYSDK_OFFSET(0xD82C6B0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET UNITYSDK_OFFSET(0xD82E070)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_OFFSET UNITYSDK_OFFSET(0xD82DF90)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET UNITYSDK_OFFSET(0xD82DA20)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHPATTERN_OFFSET UNITYSDK_OFFSET(0xD82D8A0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0xD82C010)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET UNITYSDK_OFFSET(0xD82C800)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD82BD70)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD82BDD0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_RECORDCHALLENGE_OFFSET UNITYSDK_OFFSET(0xD82E150)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_STARTBEATMAP_OFFSET UNITYSDK_OFFSET(0xD82C280)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0xD82C990)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD82E1D0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xD82E1F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD82E250)

namespace MoleMole
{
	inline static constexpr unsigned int SummerShootingLogSubsystem_TypeDefinitionIndex = 69430;

	class SummerShootingLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerShootingLogSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0886A771C4D53727_2*>*>* ShootInfoDic; // 0x10
		::Class_3_F2CFA9B4BE5416FF* _data; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C925DD9FCB5E4906*>* _patterns; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_6EF456A21AE85EEC_42*>* ShootSkillInfo; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void ClearBulletRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CLEARBULLETRECORD_OFFSET))(this);
		}

		static ::System::Int32 GetGeneralLevelID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET))();
		}

		::System::Void StartBeatmap(::System::String* beatmapName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_STARTBEATMAP_OFFSET))(this, beatmapName);
		}

		::System::Void CreatePattern(::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CREATEPATTERN_OFFSET))(this, instanceId);
		}

		::System::Void KillEntity(::System::Int32 instanceId, ::Struct_2_4C8453486C91E3A1_3 info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_4C8453486C91E3A1_3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET))(this, instanceId, info);
		}

		::System::Void UseSkill(::System::Int32 bulletConfigId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_USESKILL_OFFSET))(this, bulletConfigId);
		}

		::System::Void BulletCreate(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETCREATE_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName);
		}

		::System::Void BulletHit(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName, ::System::Boolean firstHit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHIT_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName, firstHit);
		}

		::System::Void BulletHitTargetRecord(::System::String* weaponKey, ::System::Int32 weaponConfigId, ::System::String* bulletAbilityName, ::System::Int32 hitCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHITTARGETRECORD_OFFSET))(this, weaponKey, weaponConfigId, bulletAbilityName, hitCount);
		}

		::System::Void FinishPattern(::System::Int32 instanceId, ::System::Int32 duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHPATTERN_OFFSET))(this, instanceId, duration);
		}

		::System::Void FinishAndSendRequest(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET))(this, result);
		}

		static ::System::UInt32 Encode(::Enum_3_97EC0F5E46F61E50 result)
		{
			return ((::System::UInt32(*)(::Enum_3_97EC0F5E46F61E50))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_OFFSET))(result);
		}

		static ::System::UInt32 Encode_1(::Enum_3_76A758F872DFBC83 rank)
		{
			return ((::System::UInt32(*)(::Enum_3_76A758F872DFBC83))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET))(rank);
		}

		::System::Void RecordChallenge(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_RECORDCHALLENGE_OFFSET))(this, success);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
