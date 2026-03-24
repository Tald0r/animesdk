#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Donjon { class DonjonFloorObject; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEFLOOROBJECT_OFFSET UNITYSDK_OFFSET(0x6D16B50)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6D16960)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x6D16A00)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x6D16AA0)
#define FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x6D16D40)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int DonjonFloorManager_TypeDefinitionIndex = 55437;

	class DonjonFloorManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::ViewObject::Donjon::DonjonFloorObject*>* _floorObjects; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_UPDATE_OFFSET))(this, deltaTime);
		}

		::Foundation::ViewObject::Donjon::DonjonFloorObject* CreateFloorObject(::System::Int32 floorID, ::System::String* name)
		{
			return ((::Foundation::ViewObject::Donjon::DonjonFloorObject*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_DONJONFLOORMANAGER_CREATEFLOOROBJECT_OFFSET))(this, floorID, name);
		}
	};
}
