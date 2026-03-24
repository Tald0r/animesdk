#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0FED320E7A82FE89;
class Class_1_2582D22C0BC976C3;
class Class_1_B7E341C5F1A6F199;
class Class_1_D276261F488D3DEB;
class Class_2_186B4E1BC116EFF3;
class Class_3_1A345EAE5F749316_63;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET UNITYSDK_OFFSET(0xB1B6A70)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET UNITYSDK_OFFSET(0xB1B6A50)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB1B6D90)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB1B6B30)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET UNITYSDK_OFFSET(0xB1B74F0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xB1B7410)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET UNITYSDK_OFFSET(0xB1B6D10)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1B78A0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1B7160)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1B8550)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET UNITYSDK_OFFSET(0xB1B77D0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET UNITYSDK_OFFSET(0xB1B8290)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET UNITYSDK_OFFSET(0xB1B7910)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB1B8A40)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB1B8A60)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0xB1B8AC0)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xB1B8B30)
#define MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xB1B8B90)

namespace MoleMole
{
	inline static constexpr unsigned int MovingWallSubsystem_TypeDefinitionIndex = 70489;

	class MovingWallSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::MovingWallSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _entityIDToBuildIndex; // 0x10
		::System::Collections::Generic::List_1<::Class_1_2582D22C0BC976C3*>* _contents; // 0x18
		::System::Collections::Generic::List_1<::Class_1_0FED320E7A82FE89*>* _wallBuilders; // 0x20
		::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>* _movingWalls; // 0x28
		::System::Int32 _baseMaxHeightIndex; // 0x30
		::UnityEngine::Vector2 _basePrecision; // 0x34
		::MoleMole::Vector2Int _baseSlotCount; // 0x3C
		::System::Int32 _buildIndex; // 0x44
		::UnityEngine::Bounds _platformBounds; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Bounds get_PlatformBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GET_PLATFORMBOUNDS_OFFSET))(this);
		}

		::Class_1_0FED320E7A82FE89* GetBuilder(::System::Int32 index)
		{
			return ((::Class_1_0FED320E7A82FE89*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_GETBUILDER_OFFSET))(this, index);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONRESET_OFFSET))(this);
		}

		::System::Void Initialize(::Class_3_1A345EAE5F749316_63* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_1A345EAE5F749316_63*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_INITIALIZE_OFFSET))(this, notify);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void OnEntityReady(::Class_2_186B4E1BC116EFF3* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_186B4E1BC116EFF3*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONENTITYREADY_OFFSET))(this, evt);
		}

		static ::Cysharp::Threading::Tasks::UniTask UpdateMovingWallContext(::System::UInt32 entityID, ::Class_1_2582D22C0BC976C3* ctx)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::System::UInt32, ::Class_1_2582D22C0BC976C3*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLCONTEXT_OFFSET))(entityID, ctx);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void UpdateMovingWalls()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEMOVINGWALLS_OFFSET))(this);
		}

		::System::Void UpdateWallBuilders()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_UPDATEWALLBUILDERS_OFFSET))(this);
		}

		::System::Boolean TryGetNextContext(::UnityEngine::Vector3 position, ::Class_1_2582D22C0BC976C3*& context, ::System::Single& distance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_2582D22C0BC976C3*&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM_TRYGETNEXTCONTEXT_OFFSET))(this, position, context, distance);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MOVINGWALLSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
