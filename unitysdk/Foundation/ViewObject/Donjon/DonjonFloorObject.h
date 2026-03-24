#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class ComponentContainer_1; }
namespace Foundation::ViewObject::Donjon { class IDonjonFloorComponent; }
namespace System { class String; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x74DDC50)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x74DDAF0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x74DDB10)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_MARKDESTROY_OFFSET UNITYSDK_OFFSET(0x74DDBF0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET UNITYSDK_OFFSET(0x74DDD80)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_RECYCLE_OFFSET UNITYSDK_OFFSET(0x74DDB90)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x74DDC60)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x74DDB00)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORNAME_OFFSET UNITYSDK_OFFSET(0x74DDB20)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x74DDB30)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorObject_TypeDefinitionIndex = 64281;

	class DonjonFloorObject : public ::System::Object
	{
	public:
		::Foundation::ViewObject::Container::ComponentContainer_1<::Foundation::ViewObject::Donjon::IDonjonFloorComponent*>* ComponentContainer; // 0x10
		::System::String* _floorName_k__BackingField; // 0x18
		::System::Int32 _floorID_k__BackingField; // 0x20
		::System::Boolean _enable; // 0x24

		::System::Void _ctor(::System::Int32 floorID, ::System::String* floorName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT__CTOR_OFFSET))(this, floorID, floorName);
		}

		::System::Int32 get_floorID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_floorID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORID_OFFSET))(this, value);
		}

		::System::String* get_floorName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_FLOORNAME_OFFSET))(this);
		}

		::System::Void set_floorName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_FLOORNAME_OFFSET))(this, value);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_RECYCLE_OFFSET))(this);
		}

		::System::Void MarkDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_MARKDESTROY_OFFSET))(this);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void NotifyComponentUpdateEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOOROBJECT_NOTIFYCOMPONENTUPDATEENABLE_OFFSET))(this);
		}
	};
}
