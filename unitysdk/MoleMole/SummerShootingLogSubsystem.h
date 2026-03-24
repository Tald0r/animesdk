#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6F5EF14512C56DB5.h"
#include "unitysdk/Enum_3_97EC0F5E46F61E50.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_2.h"

class Class_3_0886A771C4D53727_7;
class Class_3_6EF456A21AE85EEC_245;
class Class_3_C6310CE3BA0EB8B3;
class Class_3_C925DD9FCB5E4906;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETCREATE_OFFSET UNITYSDK_OFFSET(0xB9BCC20)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHITTARGETRECORD_OFFSET UNITYSDK_OFFSET(0xB9BD460)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_BULLETHIT_OFFSET UNITYSDK_OFFSET(0xB9BCFE0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CLEARBULLETRECORD_OFFSET UNITYSDK_OFFSET(0xB9BBF90)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_CREATEPATTERN_OFFSET UNITYSDK_OFFSET(0xB9BC6F0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET UNITYSDK_OFFSET(0xB9BE0B0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_OFFSET UNITYSDK_OFFSET(0xB9BDFD0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET UNITYSDK_OFFSET(0xB9BDA60)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_FINISHPATTERN_OFFSET UNITYSDK_OFFSET(0xB9BD8E0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0xB9BC050)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET UNITYSDK_OFFSET(0xB9BC840)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB9BBDB0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB9BBE10)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_RECORDCHALLENGE_OFFSET UNITYSDK_OFFSET(0xB9BE190)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_STARTBEATMAP_OFFSET UNITYSDK_OFFSET(0xB9BC2C0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_USESKILL_OFFSET UNITYSDK_OFFSET(0xB9BC9D0)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9BE210)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB9BE230)
#define MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB9BE290)

namespace MoleMole
{
	inline static constexpr unsigned int SummerShootingLogSubsystem_TypeDefinitionIndex = 42001;

	class SummerShootingLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::SummerShootingLogSubsystem*>
	{
	public:
		::Class_3_C6310CE3BA0EB8B3* _data; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_C925DD9FCB5E4906*>* _patterns; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_3_0886A771C4D53727_7*>*>* ShootInfoDic; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_3_6EF456A21AE85EEC_245*>* ShootSkillInfo; // 0x28

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

		::System::Void KillEntity(::System::Int32 instanceId, ::Struct_2_4C8453486C91E3A1_2 info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_4C8453486C91E3A1_2))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_KILLENTITY_OFFSET))(this, instanceId, info);
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

		static ::System::UInt32 Encode_1(::Enum_3_6F5EF14512C56DB5 rank)
		{
			return ((::System::UInt32(*)(::Enum_3_6F5EF14512C56DB5))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSHOOTINGLOGSUBSYSTEM_ENCODE_1_OFFSET))(rank);
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
