#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0.h"
#include "unitysdk/Enum_3_E18DD7D3DEDDD336.h"
#include "unitysdk/Enum_3_EB457EC35BBF1AAD.h"
#include "unitysdk/Foundation/ViewObject/SuiteInfo.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"

class Class_1_01A2F0F366B462D1;
class Class_1_204C453CC79AE4E0;
class Class_1_204C453CC79AE4E0_1;
class Class_1_204C453CC79AE4E0_2;
class Class_1_50E88D52C3691096;
class Class_1_E795C5D5DDF30620;
class Class_2_14986121AA61AD99;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_1_D8480A60B429B44D;

#define MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0xB892D40)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET UNITYSDK_OFFSET(0xB892A60)
#define MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET UNITYSDK_OFFSET(0xB892110)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET UNITYSDK_OFFSET(0xB891010)
#define MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET UNITYSDK_OFFSET(0xB890E90)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB8932E0)
#define MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET UNITYSDK_OFFSET(0xB8932F0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB8916A0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB891CA0)
#define MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET UNITYSDK_OFFSET(0xB893CC0)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET UNITYSDK_OFFSET(0xB892540)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET UNITYSDK_OFFSET(0xB8922B0)
#define MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET UNITYSDK_OFFSET(0xB891EE0)
#define MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET UNITYSDK_OFFSET(0xB893730)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET UNITYSDK_OFFSET(0xB8913E0)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET UNITYSDK_OFFSET(0xB891230)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET UNITYSDK_OFFSET(0xB893300)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET UNITYSDK_OFFSET(0xB892810)
#define MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET UNITYSDK_OFFSET(0xB893550)
#define MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0xB893A50)
#define MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET UNITYSDK_OFFSET(0xB8937E0)
#define MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xB893E60)
#define MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xB893E40)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xB893EF0)
#define MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB893F50)

namespace MoleMole
{
	inline static constexpr unsigned int FloorSubsystem_TypeDefinitionIndex = 79469;

	class FloorSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::FloorSubsystem*>
	{
	public:
		static ::Class_2_14986121AA61AD99** StaticGet_actorAbility()
		{
			return (::Class_2_14986121AA61AD99**)Il2CppClass::FromTypeDefinitionIndex(FloorSubsystem_TypeDefinitionIndex)->GetStaticField(0x31620);
		}
		::Class_1_01A2F0F366B462D1* _configFloor; // 0x10
		::System::Collections::Generic::Dictionary_2<::FluffyUnderware::Curvy::CurvySpline*, ::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>>* m_Spline2Key; // 0x18
		::Class_1_D8480A60B429B44D<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>* m_TriggerMap; // 0x20
		::Class_1_D8480A60B429B44D<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>* m_SplineMap; // 0x28
		::System::Int32 _floorID; // 0x30
		::Enum_3_EB457EC35BBF1AAD _floorUsage; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM__CCTOR_OFFSET))();
		}

		::Class_1_204C453CC79AE4E0_2* GetConfigTrigger(::System::UInt32 groupID, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::Class_1_204C453CC79AE4E0_2*(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_OFFSET))(this, groupID, key, suiteInfo);
		}

		::System::Boolean TryGetConfigBattleRegion(::System::UInt32 groupID, ::System::String* key, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::Class_1_50E88D52C3691096*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Foundation::ViewObject::SuiteInfo, ::Class_1_50E88D52C3691096*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_OFFSET))(this, groupID, key, suiteInfo, battleRegion, ownerGroupID);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*> Request(::System::String* key, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher)
		{
			return ((::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>(*)(::PVOID, ::System::String*, ::MoleMole::MonoTriggerEventDispatcher*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_OFFSET))(this, key, dispatcher);
		}

		::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*> Request_1(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo, ::System::String* key, ::MoleMole::MonoTriggerEventDispatcher*& dispatcher)
		{
			return ((::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo, ::System::String*, ::MoleMole::MonoTriggerEventDispatcher*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUEST_1_OFFSET))(this, groupId, suiteInfo, key, dispatcher);
		}

		::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*> RequestSpline(::System::UInt32 groupId, ::System::String* key, ::FluffyUnderware::Curvy::CurvySpline*& spline)
		{
			return ((::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::FluffyUnderware::Curvy::CurvySpline*>(*)(::PVOID, ::System::UInt32, ::System::String*, ::FluffyUnderware::Curvy::CurvySpline*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_REQUESTSPLINE_OFFSET))(this, groupId, key, spline);
		}

		::MoleMole::MonoTriggerEventDispatcher* CreateTriggerEventDispatcher(::Class_1_204C453CC79AE4E0_2* configTrigger)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::PVOID, ::Class_1_204C453CC79AE4E0_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATETRIGGEREVENTDISPATCHER_OFFSET))(this, configTrigger);
		}

		::FluffyUnderware::Curvy::CurvySpline* CreateCurvySpline(::Class_1_204C453CC79AE4E0_1* configTrigger)
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID, ::Class_1_204C453CC79AE4E0_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_CREATECURVYSPLINE_OFFSET))(this, configTrigger);
		}

		static ::MoleMole::MonoTriggerEventDispatcher* AddDynamicConfigTrigger(::Class_1_E795C5D5DDF30620* config, ::UnityEngine::Transform* parent, ::Enum_3_E18DD7D3DEDDD336 configurableColliderType)
		{
			return ((::MoleMole::MonoTriggerEventDispatcher*(*)(::Class_1_E795C5D5DDF30620*, ::UnityEngine::Transform*, ::Enum_3_E18DD7D3DEDDD336))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ADDDYNAMICCONFIGTRIGGER_OFFSET))(config, parent, configurableColliderType);
		}

		::System::Int32 get_FloorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORID_OFFSET))(this);
		}

		::Enum_3_EB457EC35BBF1AAD get_FloorUsage()
		{
			return ((::Enum_3_EB457EC35BBF1AAD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GET_FLOORUSAGE_OFFSET))(this);
		}

		::Class_1_204C453CC79AE4E0_2* GetConfigTrigger_1(::System::UInt32 groupID, ::System::String* key)
		{
			return ((::Class_1_204C453CC79AE4E0_2*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_GETCONFIGTRIGGER_1_OFFSET))(this, groupID, key);
		}

		::System::Boolean TryGetConfigPoint(::System::UInt32 groupID, ::System::String* key, ::Class_1_204C453CC79AE4E0*& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_204C453CC79AE4E0*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGPOINT_OFFSET))(this, groupID, key, point);
		}

		::System::Boolean TryGetConfigSpline(::System::UInt32 groupID, ::System::String* key, ::Class_1_204C453CC79AE4E0_1*& spline)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_204C453CC79AE4E0_1*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGSPLINE_OFFSET))(this, groupID, key, spline);
		}

		::System::Boolean TryGetSplineKey(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::UInt32& groupID, ::System::String*& splineName)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETSPLINEKEY_OFFSET))(this, curvySpline, groupID, splineName);
		}

		::System::Boolean TryGetConfigBattleRegion_1(::System::UInt32 groupID, ::System::String* key, ::Class_1_50E88D52C3691096*& battleRegion, ::System::UInt32& ownerGroupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::Class_1_50E88D52C3691096*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_TRYGETCONFIGBATTLEREGION_1_OFFSET))(this, groupID, key, battleRegion, ownerGroupID);
		}

		::System::Void SetFloorID(::System::Int32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_SETFLOORID_OFFSET))(this, floorID);
		}

		::System::Void UpdateTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UPDATETRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void UnloadTriggerDispatcherBySuiteInfo(::System::UInt32 groupId, ::Foundation::ViewObject::SuiteInfo suiteInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::SuiteInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_UNLOADTRIGGERDISPATCHERBYSUITEINFO_OFFSET))(this, groupId, suiteInfo);
		}

		::System::Void OnSectionSwitched(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM_ONSECTIONSWITCHED_OFFSET))(this, args);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOORSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}
	};
}
