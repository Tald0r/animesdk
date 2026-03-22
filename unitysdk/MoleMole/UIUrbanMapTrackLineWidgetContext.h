#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/Struct_2_A3F7BC7FD0AC1E07.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A00B784DE48ED0A8;
class Class_2_9218549D1694BC30;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_ASYNCCALCPATH_OFFSET UNITYSDK_OFFSET(0xA76B0C0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CALCPATH_ASYNC_OFFSET UNITYSDK_OFFSET(0xA769610)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANCELASYNCQUERY_OFFSET UNITYSDK_OFFSET(0xA76B230)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANREACHDIRECTLY_OFFSET UNITYSDK_OFFSET(0xA76B420)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CUTLINEINQUESTCIRCLEAREA_OFFSET UNITYSDK_OFFSET(0xA7698C0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA769EE0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA769B40)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENENAVMESHPATHRESULT_ASYNC_OFFSET UNITYSDK_OFFSET(0xA76AB10)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENETRACKPOINTSDATA_OFFSET UNITYSDK_OFFSET(0xA76A630)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0xA76B2B0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETMAINCITYTARGETPOS_OFFSET UNITYSDK_OFFSET(0xA76ADD0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSINBIGSCENE_OFFSET UNITYSDK_OFFSET(0xA76A3A0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSINMAINCITY_OFFSET UNITYSDK_OFFSET(0xA76A110)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSONRADARHUD_OFFSET UNITYSDK_OFFSET(0xA769F70)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETTRACKTARGETWORLDPOSITIONINBIGSCENE_OFFSET UNITYSDK_OFFSET(0xA76A770)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_OFFSET UNITYSDK_OFFSET(0xA769780)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINMAINCITY_ASYNC_OFFSET UNITYSDK_OFFSET(0xA7694F0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_MAPMODEL_OFFSET UNITYSDK_OFFSET(0xA768E60)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_USEASYNCTRACKLINE_OFFSET UNITYSDK_OFFSET(0xA768E40)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SAMPLEPOSITIONGRADUALLY_OFFSET UNITYSDK_OFFSET(0xA76AC80)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SETQUERYCOMPLETED_OFFSET UNITYSDK_OFFSET(0xA76B050)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_B__33_0_OFFSET UNITYSDK_OFFSET(0xA76B510)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA768F30)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA76B540)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext_TypeDefinitionIndex = 62887;

	class UIUrbanMapTrackLineWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_76CCAEE20B3AE57C TrackTarget; // 0x28
		::System::Collections::Generic::List_1<::System::Single>* m_sampleDistanceList; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CachedMainCityWorldPoints; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CachedBigSceneWorldPoints; // 0x50
		::Class_1_A00B784DE48ED0A8* QueryWrapper; // 0x58
		::MoleMole::Config::GuidePoint_AutoGenStrategy _splitStrategy; // 0x60
		::System::Int32 defaultAreaMask; // 0xA8
		::Struct_2_A3F7BC7FD0AC1E07 MapConvertData; // 0xAC
		::UnityEngine::Vector3 _afterMappedDestinationPos; // 0xE4
		::UnityEngine::Vector3 ExternalTargetPos; // 0xF0
		::UnityEngine::Color Color; // 0xFC
		::UnityEngine::Vector3 PlayerPosition; // 0x10C
		::System::Boolean IsCancelled; // 0x118
		::System::Boolean UseExternalTargetPos; // 0x119
		::System::Boolean QueryCompleted; // 0x11A
		::UnityEngine::Vector3 _beforeMappedDestinationPos; // 0x11C

		::System::Void _ctor(::Struct_2_76CCAEE20B3AE57C trackTarget, ::Struct_2_A3F7BC7FD0AC1E07 mapConvertData, ::UnityEngine::Color color, ::UnityEngine::Vector3 playerPosition, ::System::Boolean needCache, ::UnityEngine::Vector3 externalTargetPos, ::System::Boolean useOverridePos)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_76CCAEE20B3AE57C, ::Struct_2_A3F7BC7FD0AC1E07, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CTOR_OFFSET))(this, trackTarget, mapConvertData, color, playerPosition, needCache, externalTargetPos, useOverridePos);
		}

		::System::Boolean get_UseAsyncTrackLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_USEASYNCTRACKLINE_OFFSET))(this);
		}

		::System::Void CutLineInQuestCircleArea(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& raw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CUTLINEINQUESTCIRCLEAREA_OFFSET))(this, raw);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean Equals_1(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_1_OFFSET))(objA, objB);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetPointsOnRadarHUD(::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSONRADARHUD_OFFSET))(this, playerPos);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetPointsInBigScene(::UnityEngine::Vector3 playerPosVal)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSINBIGSCENE_OFFSET))(this, playerPosVal);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetWorldPointsInBigScene_NavMeshCalc_Async(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths, ::UnityEngine::Vector3 playerPosVal)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_OFFSET))(this, paths, playerPosVal);
		}

		::System::Boolean GetBigSceneTrackPointsData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& paths)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENETRACKPOINTSDATA_OFFSET))(this, paths);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> CalcPath_Async(::UnityEngine::Vector3 playerPosVal, ::UnityEngine::Vector3 targetPos, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CALCPATH_ASYNC_OFFSET))(this, playerPosVal, targetPos, paths);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetBigSceneNavMeshPathResult_Async(::UnityEngine::Vector3 playerPosVal, ::UnityEngine::Vector3 targetPos, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENENAVMESHPATHRESULT_ASYNC_OFFSET))(this, playerPosVal, targetPos, paths);
		}

		::UnityEngine::Vector3 GetTrackTargetWorldPositionInBigScene()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETTRACKTARGETWORLDPOSITIONINBIGSCENE_OFFSET))(this);
		}

		::Class_2_9218549D1694BC30* get_MapModel()
		{
			return ((::Class_2_9218549D1694BC30*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_MAPMODEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetPointsInMainCity(::UnityEngine::Vector3 playerPosVal)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSINMAINCITY_OFFSET))(this, playerPosVal);
		}

		::System::Boolean GetMainCityTargetPos(::UnityEngine::Vector3& targetNavPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETMAINCITYTARGETPOS_OFFSET))(this, targetNavPos);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetWorldPointsInMainCity_Async(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths, ::UnityEngine::Vector3 playerPosVal)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINMAINCITY_ASYNC_OFFSET))(this, paths, playerPosVal);
		}

		::System::Void SetQueryCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SETQUERYCOMPLETED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> AsyncCalcPath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_ASYNCCALCPATH_OFFSET))(this, sourcePosition, targetPosition, result);
		}

		::System::Void CancelAsyncQuery()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANCELASYNCQUERY_OFFSET))(this);
		}

		::System::Boolean SamplePositionGradually(::UnityEngine::Vector3 rawPosition, ::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SAMPLEPOSITIONGRADUALLY_OFFSET))(this, rawPosition, position);
		}

		::UnityEngine::Vector3 GetGroundPos(::UnityEngine::Vector3 originPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETGROUNDPOS_OFFSET))(this, originPos);
		}

		::System::Boolean CanReachDirectly(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANREACHDIRECTLY_OFFSET))(this, from, to);
		}

		::System::Boolean _AsyncCalcPath_b__33_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_B__33_0_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
