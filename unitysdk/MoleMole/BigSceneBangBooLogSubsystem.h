#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/BigSceneBangBooLogSubsystem_GameResult.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_320;
class Class_3_0F941FBD354851FC;
class Class_3_49FD24D1C9C67ED5;
class Class_3_5D6E6A4B36F53E3B;
class Class_3_C23FE8685169CE61;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0xCD8ECA0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET UNITYSDK_OFFSET(0xCD8F230)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET UNITYSDK_OFFSET(0xCD8FF20)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET UNITYSDK_OFFSET(0xCD90000)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xCD8E9A0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET UNITYSDK_OFFSET(0xCD8F110)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET UNITYSDK_OFFSET(0xCD8EBD0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET UNITYSDK_OFFSET(0xCD8FE20)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET UNITYSDK_OFFSET(0xCD8FEA0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xCD8F1B0)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET UNITYSDK_OFFSET(0xCD8EA10)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET UNITYSDK_OFFSET(0xCD8EE00)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET UNITYSDK_OFFSET(0xCD8FC40)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET UNITYSDK_OFFSET(0xCD90150)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET UNITYSDK_OFFSET(0xCD90770)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xCD90840)
#define MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xCD90860)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneBangBooLogSubsystem_TypeDefinitionIndex = 39875;

	class BigSceneBangBooLogSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BigSceneBangBooLogSubsystem*>
	{
	public:
		static ::MoleMole::BigSceneBangBooLogSubsystem** StaticGet_Self()
		{
			return (::MoleMole::BigSceneBangBooLogSubsystem**)Il2CppClass::FromTypeDefinitionIndex(BigSceneBangBooLogSubsystem_TypeDefinitionIndex)->GetStaticField(0x2C090);
		}
		// static const ::System::Int32 InvalidCheckPoint = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MaxQueueCount = 0xA; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointDuration; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::Vector3>*>* _fallPosition; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _checkPointReviveTimes; // 0x20
		::System::Int32 _currentCheckPointArriveTime; // 0x28
		::System::Int32 _currentCheckPoint; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RESET_OFFSET))(this);
		}

		::System::Void RecordCurrentCheckPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_RECORDCURRENTCHECKPOINT_OFFSET))(this);
		}

		::System::Void ArriveCheckPoint(::System::Int32 checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_ARRIVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void Revive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REVIVE_OFFSET))(this);
		}

		::System::Int32 ProcessGameResult(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_PROCESSGAMERESULT_OFFSET))(this, result);
		}

		::System::Void ReportRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTRESTARTGAME_OFFSET))(this);
		}

		::System::Void ReportExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTEXITGAME_OFFSET))(this);
		}

		::System::Void ReportFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_REPORTFINISHGAME_OFFSET))(this);
		}

		static ::System::Void SendRequest(::Class_3_49FD24D1C9C67ED5* req)
		{
			return ((::System::Void(*)(::Class_3_49FD24D1C9C67ED5*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_SENDREQUEST_OFFSET))(req);
		}

		::Class_3_49FD24D1C9C67ED5* Build(::MoleMole::BigSceneBangBooLogSubsystem_GameResult result)
		{
			return ((::Class_3_49FD24D1C9C67ED5*(*)(::PVOID, ::MoleMole::BigSceneBangBooLogSubsystem_GameResult))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_BUILD_OFFSET))(this, result);
		}

		static ::Class_3_5D6E6A4B36F53E3B* Cast(::UnityEngine::Vector3 position)
		{
			return ((::Class_3_5D6E6A4B36F53E3B*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_CAST_OFFSET))(position);
		}

		::Class_2_208CC9941471731A_320* GetTemplate(::System::Int32 floorId)
		{
			return ((::Class_2_208CC9941471731A_320*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_GETTEMPLATE_OFFSET))(this, floorId);
		}

		::System::Void TryExitGangBooGameAndShowReward(::Class_3_0F941FBD354851FC* quest, ::Class_3_C23FE8685169CE61* item)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_0F941FBD354851FC*, ::Class_3_C23FE8685169CE61*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_TRYEXITGANGBOOGAMEANDSHOWREWARD_OFFSET))(this, quest, item);
		}

		::Cysharp::Threading::Tasks::UniTask WaitTeleportComplete(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rewards)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM_WAITTELEPORTCOMPLETE_OFFSET))(this, rewards);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEBANGBOOLOGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}
	};
}
