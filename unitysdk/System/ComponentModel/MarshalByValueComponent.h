#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventHandler; }
namespace System { class String; }
namespace System { class Type; }
namespace System::ComponentModel { class EventHandlerList; }
namespace System::ComponentModel { class IContainer; }
namespace System::ComponentModel { class ISite; }

#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_ADD_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1A5EFAD0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5EFE10)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5EFDC0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5EFA60)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GETSERVICE_OFFSET UNITYSDK_OFFSET(0x1A5F01E0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_CONTAINER_OFFSET UNITYSDK_OFFSET(0x1A5F0100)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_DESIGNMODE_OFFSET UNITYSDK_OFFSET(0x1A5F02C0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1A5EFC40)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_SITE_OFFSET UNITYSDK_OFFSET(0x1A5EFDA0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_REMOVE_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1A5EFC90)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_SET_SITE_OFFSET UNITYSDK_OFFSET(0x1A5EFDB0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A5F03A0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5F04F0)
#define SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5EFA50)

namespace System::ComponentModel
{
	inline static constexpr unsigned int MarshalByValueComponent_TypeDefinitionIndex = 2944;

	class MarshalByValueComponent : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_EventDisposed()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MarshalByValueComponent_TypeDefinitionIndex)->GetStaticField(0x25B0);
		}
		::System::ComponentModel::ISite* site; // 0x10
		::System::ComponentModel::EventHandlerList* events; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_FINALIZE_OFFSET))(this);
		}

		::System::Void add_Disposed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_ADD_DISPOSED_OFFSET))(this, value);
		}

		::System::Void remove_Disposed(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_REMOVE_DISPOSED_OFFSET))(this, value);
		}

		::System::ComponentModel::EventHandlerList* get_Events()
		{
			return ((::System::ComponentModel::EventHandlerList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_EVENTS_OFFSET))(this);
		}

		::System::ComponentModel::ISite* get_Site()
		{
			return ((::System::ComponentModel::ISite*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_SITE_OFFSET))(this);
		}

		::System::Void set_Site(::System::ComponentModel::ISite* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISite*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_SET_SITE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::ComponentModel::IContainer* get_Container()
		{
			return ((::System::ComponentModel::IContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_CONTAINER_OFFSET))(this);
		}

		::System::Object* GetService(::System::Type* service)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GETSERVICE_OFFSET))(this, service);
		}

		::System::Boolean get_DesignMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_GET_DESIGNMODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_MARSHALBYVALUECOMPONENT_TOSTRING_OFFSET))(this);
		}
	};
}
