#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool; }
namespace UnityEngine { class Object; }

#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0xD718B60)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_INSTANCEOBJECT_OFFSET UNITYSDK_OFFSET(0xD718B40)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xD718BB0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_POOL_OFFSET UNITYSDK_OFFSET(0xD718B90)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_RESERVEDOBJECTPOOLDATAHANDLE_OFFSET UNITYSDK_OFFSET(0xD718B20)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xD718BD0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_ISVALID_OFFSET UNITYSDK_OFFSET(0xD718D10)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_PUSHSELF_OFFSET UNITYSDK_OFFSET(0xD718C20)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_RELEASESELF_OFFSET UNITYSDK_OFFSET(0xD718D90)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_HANDLE_OFFSET UNITYSDK_OFFSET(0xD718B80)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_INSTANCEOBJECT_OFFSET UNITYSDK_OFFSET(0xD718B50)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_ISINPOOL_OFFSET UNITYSDK_OFFSET(0xD718BC0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_POOL_OFFSET UNITYSDK_OFFSET(0xD718BA0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xD718BE0)
#define FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD718BF0)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool_ReservedObjectPoolData_TypeDefinitionIndex = 64177;

	class ReservedObjectPool_ReservedObjectPoolData : public ::System::Object
	{
	public:
		::Foundation::ReservedObjectPool* _Pool_k__BackingField; // 0x10
		::Foundation::AssetRequestHandle _Handle_k__BackingField; // 0x18
		::UnityEngine::Object* _InstanceObject_k__BackingField; // 0x38
		::System::UInt32 _Version_k__BackingField; // 0x40
		::System::Boolean _IsInPool_k__BackingField; // 0x44

		::System::Void _ctor(::UnityEngine::Object* instanceObject, ::Foundation::AssetRequestHandle handle, ::Foundation::ReservedObjectPool* pool, ::System::Boolean isInPool)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle, ::Foundation::ReservedObjectPool*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA__CTOR_OFFSET))(this, instanceObject, handle, pool, isInPool);
		}

		::Foundation::ReservedObjectPoolDataHandle get_ReservedObjectPoolDataHandle()
		{
			return ((::Foundation::ReservedObjectPoolDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_RESERVEDOBJECTPOOLDATAHANDLE_OFFSET))(this);
		}

		::UnityEngine::Object* get_InstanceObject()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_INSTANCEOBJECT_OFFSET))(this);
		}

		::System::Void set_InstanceObject(::UnityEngine::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_INSTANCEOBJECT_OFFSET))(this, value);
		}

		::Foundation::AssetRequestHandle get_Handle()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_HANDLE_OFFSET))(this);
		}

		::System::Void set_Handle(::Foundation::AssetRequestHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_HANDLE_OFFSET))(this, value);
		}

		::Foundation::ReservedObjectPool* get_Pool()
		{
			return ((::Foundation::ReservedObjectPool*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_POOL_OFFSET))(this);
		}

		::System::Void set_Pool(::Foundation::ReservedObjectPool* value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ReservedObjectPool*))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_POOL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInPool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_ISINPOOL_OFFSET))(this);
		}

		::System::Void set_IsInPool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_ISINPOOL_OFFSET))(this, value);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_SET_VERSION_OFFSET))(this, value);
		}

		::System::Void PushSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_PUSHSELF_OFFSET))(this);
		}

		::System::Void ReleaseSelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_RELEASESELF_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL_RESERVEDOBJECTPOOLDATA_ISVALID_OFFSET))(this);
		}
	};
}
