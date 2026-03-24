#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/Donjon/DonjonFloorComponent_1.h"

namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_BORNTELEPORTID_OFFSET UNITYSDK_OFFSET(0x6C44160)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x6C44120)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x6C44140)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_INITDATA_OFFSET UNITYSDK_OFFSET(0x6C44240)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_ONCREATE_OFFSET UNITYSDK_OFFSET(0x6C44180)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x6C441E0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_BORNTELEPORTID_OFFSET UNITYSDK_OFFSET(0x6C44170)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x6C44130)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x6C44150)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x6C442C0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT___BASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x6C442D0)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT___BASE_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x6C442E0)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorMustDataComponent_TypeDefinitionIndex = 80312;

	class FloorMustDataComponent : public ::Foundation::ViewObject::Donjon::DonjonFloorComponent_1<::Foundation::ViewObject::Donjon::FloorMustDataComponent*>
	{
	public:
		::System::String* _floorName_k__BackingField; // 0x18
		::System::Int32 _floorID_k__BackingField; // 0x20
		::System::Int32 _bornTeleportID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_floorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_floorID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_FLOORID_OFFSET))(this, value);
		}

		::System::String* get_floorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_FLOORNAME_OFFSET))(this);
		}

		::System::Void set_floorName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_FLOORNAME_OFFSET))(this, value);
		}

		::System::Int32 get_bornTeleportID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_GET_BORNTELEPORTID_OFFSET))(this);
		}

		::System::Void set_bornTeleportID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_SET_BORNTELEPORTID_OFFSET))(this, value);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_ONCREATE_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_ONRECYCLE_OFFSET))(this);
		}

		::System::Void InitData(::System::Int32 floorID, ::System::String* floorName, ::System::Int32 bornTeleportID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT_INITDATA_OFFSET))(this, floorID, floorName, bornTeleportID);
		}

		::System::Void __base_OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT___BASE_ONCREATE_OFFSET))(this);
		}

		::System::Void __base_OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORMUSTDATACOMPONENT___BASE_ONRECYCLE_OFFSET))(this);
		}
	};
}
