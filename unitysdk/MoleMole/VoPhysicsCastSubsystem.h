#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

template <typename T1, typename T2> class Class_1_57D808FBDC3F6D5A;

#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x939E710)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x939E8A0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x939E800)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_REGISTERVOPHYSICSCASTTARGET_OFFSET UNITYSDK_OFFSET(0x939E9F0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_UNREGISTERVOPHYSICSCASTTARGET_OFFSET UNITYSDK_OFFSET(0x939EA90)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x939EB30)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x939EB50)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x939EBB0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x939EC10)

namespace MoleMole
{
	inline static constexpr unsigned int VoPhysicsCastSubsystem_TypeDefinitionIndex = 46505;

	class VoPhysicsCastSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::VoPhysicsCastSubsystem*>
	{
	public:
		::Class_1_57D808FBDC3F6D5A<::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle>* GroupToTargetViewObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterVoPhysicsCastTarget(::System::UInt32 groupID, ::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_REGISTERVOPHYSICSCASTTARGET_OFFSET))(this, groupID, handle);
		}

		::System::Void UnregisterVoPhysicsCastTarget(::System::UInt32 groupID, ::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_UNREGISTERVOPHYSICSCASTTARGET_OFFSET))(this, groupID, handle);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
