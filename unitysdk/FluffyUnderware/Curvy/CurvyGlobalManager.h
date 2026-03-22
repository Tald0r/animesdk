#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyInterpolation.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvySplineGizmos.h"
#include "unitysdk/FluffyUnderware/DevTools/DTSingleton_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace FluffyUnderware::Curvy { class CurvyConnection; }
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy::Pools { class ArrayPoolsSettings; }
namespace FluffyUnderware::DevTools { class ComponentPool; }
namespace FluffyUnderware::DevTools { class IDTSingleton; }
namespace FluffyUnderware::DevTools { class PoolManager; }

#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A7E84E0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GETCONTAININGCONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A7E7A60)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_ARRAYPOOLSSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A7E78B0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_CONNECTIONS_OFFSET UNITYSDK_OFFSET(0x1A7E79C0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_CONTROLPOINTPOOL_OFFSET UNITYSDK_OFFSET(0x1A7E78A0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_POOLMANAGER_OFFSET UNITYSDK_OFFSET(0x1A7E7790)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWAPPROXIMATIONGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E6FB0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWBOUNDSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E75D0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWCONNECTIONSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E6ED0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWCURVEGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E6DF0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWLABELSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7410)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWMETADATAGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E74F0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWORIENTATIONANCHORSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E76B0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWORIENTATIONGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7170)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWRELATIVEDISTANCESGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7330)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWTANGENTSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7090)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWTFSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7250)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1A7E8870)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_LOADRUNTIMESETTINGS_OFFSET UNITYSDK_OFFSET(0x1A7E88E0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_MERGEDOUBLELOADED_OFFSET UNITYSDK_OFFSET(0x1A7E8C80)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SAVERUNTIMESETTINGS_OFFSET UNITYSDK_OFFSET(0x1A7E8B00)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWAPPROXIMATIONGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7010)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWBOUNDSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7630)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWCONNECTIONSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E6F30)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWCURVEGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E6E50)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWLABELSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7470)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWMETADATAGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7550)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWORIENTATIONANCHORSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7710)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWORIENTATIONGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E71D0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWRELATIVEDISTANCESGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E7390)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWTANGENTSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E70F0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWTFSGIZMO_OFFSET UNITYSDK_OFFSET(0x1A7E72B0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1A7E87E0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7E8EA0)
#define FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E8E20)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyGlobalManager_TypeDefinitionIndex = 35631;

	class CurvyGlobalManager : public ::FluffyUnderware::DevTools::DTSingleton_1<::FluffyUnderware::Curvy::CurvyGlobalManager*>
	{
	public:
		static ::UnityEngine::Color* StaticGet_DefaultGizmoOrientationColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A00);
		}
		static ::UnityEngine::Color* StaticGet_DefaultDefaultGizmoColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A10);
		}
		static ::FluffyUnderware::Curvy::CurvySplineGizmos* StaticGet_Gizmos()
		{
			return (::FluffyUnderware::Curvy::CurvySplineGizmos*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A20);
		}
		static ::UnityEngine::Color* StaticGet_GizmoOrientationColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A24);
		}
		static ::System::Single* StaticGet_SceneViewResolution()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A34);
		}
		static ::System::Int32* StaticGet_SplineLayer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A38);
		}
		static ::System::Boolean* StaticGet_SaveGeneratorOutputs()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A3C);
		}
		static ::System::Boolean* StaticGet_HideManager()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A3D);
		}
		static ::UnityEngine::Color* StaticGet_DefaultGizmoColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A40);
		}
		static ::UnityEngine::Color* StaticGet_DefaultDefaultGizmoSelectionColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A50);
		}
		static ::FluffyUnderware::Curvy::CurvyInterpolation* StaticGet_DefaultInterpolation()
		{
			return (::FluffyUnderware::Curvy::CurvyInterpolation*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A60);
		}
		static ::UnityEngine::Color* StaticGet_DefaultGizmoSelectionColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A64);
		}
		static ::System::Single* StaticGet_GizmoControlPointSize()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A74);
		}
		static ::System::Single* StaticGet_GizmoOrientationLength()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CurvyGlobalManager_TypeDefinitionIndex)->GetStaticField(0x8A78);
		}
		::FluffyUnderware::DevTools::PoolManager* poolManager; // 0x18
		::FluffyUnderware::DevTools::ComponentPool* controlPointPool; // 0x20
		::FluffyUnderware::Curvy::Pools::ArrayPoolsSettings* arrayPoolsSettings; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_ShowCurveGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWCURVEGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowCurveGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWCURVEGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowConnectionsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWCONNECTIONSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowConnectionsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWCONNECTIONSGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowApproximationGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWAPPROXIMATIONGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowApproximationGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWAPPROXIMATIONGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowTangentsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWTANGENTSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowTangentsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWTANGENTSGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowOrientationGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWORIENTATIONGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowOrientationGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWORIENTATIONGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowTFsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWTFSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowTFsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWTFSGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowRelativeDistancesGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWRELATIVEDISTANCESGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowRelativeDistancesGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWRELATIVEDISTANCESGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowLabelsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWLABELSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowLabelsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWLABELSGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowMetadataGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWMETADATAGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowMetadataGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWMETADATAGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowBoundsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWBOUNDSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowBoundsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWBOUNDSGIZMO_OFFSET))(value);
		}

		static ::System::Boolean get_ShowOrientationAnchorsGizmo()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_SHOWORIENTATIONANCHORSGIZMO_OFFSET))();
		}

		static ::System::Void set_ShowOrientationAnchorsGizmo(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SET_SHOWORIENTATIONANCHORSGIZMO_OFFSET))(value);
		}

		::FluffyUnderware::DevTools::PoolManager* get_PoolManager()
		{
			return ((::FluffyUnderware::DevTools::PoolManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_POOLMANAGER_OFFSET))(this);
		}

		::FluffyUnderware::DevTools::ComponentPool* get_ControlPointPool()
		{
			return ((::FluffyUnderware::DevTools::ComponentPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_CONTROLPOINTPOOL_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Pools::ArrayPoolsSettings* get_ArrayPoolsSettings()
		{
			return ((::FluffyUnderware::Curvy::Pools::ArrayPoolsSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_ARRAYPOOLSSETTINGS_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::CurvyConnection*>* get_Connections()
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::CurvyConnection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GET_CONNECTIONS_OFFSET))(this);
		}

		::Il2CppArray<::FluffyUnderware::Curvy::CurvyConnection*>* GetContainingConnections(::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>* splines)
		{
			return ((::Il2CppArray<::FluffyUnderware::Curvy::CurvyConnection*>*(*)(::PVOID, ::Il2CppArray<::FluffyUnderware::Curvy::CurvySpline*>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_GETCONTAININGCONNECTIONS_OFFSET))(this, splines);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_START_OFFSET))(this);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void LoadRuntimeSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_LOADRUNTIMESETTINGS_OFFSET))();
		}

		static ::System::Void SaveRuntimeSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_SAVERUNTIMESETTINGS_OFFSET))();
		}

		::System::Void MergeDoubleLoaded(::FluffyUnderware::DevTools::IDTSingleton* newInstance)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::DevTools::IDTSingleton*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYGLOBALMANAGER_MERGEDOUBLELOADED_OFFSET))(this, newInstance);
		}
	};
}
