#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeEventHandle.h"
#include "unitysdk/System/Reflection/MemberInfo.h"
#include "unitysdk/System/Reflection/MemberTypes.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Reflection { class EventInfo_AddEventAdapter; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_083577508CCFDAF3_OFFSET UNITYSDK_OFFSET(0x1A0C1630)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_12482E77452F6A88_1_OFFSET UNITYSDK_OFFSET(0x1A0C13D0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_12482E77452F6A88_OFFSET UNITYSDK_OFFSET(0x1A0C1360)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_3A30E25BB294B133_OFFSET UNITYSDK_OFFSET(0x1A0C11A0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_49E3FA61F17A6A16_OFFSET UNITYSDK_OFFSET(0x1A0C1180)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1A0C1190)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_1_OFFSET UNITYSDK_OFFSET(0x1A0C1680)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_OFFSET UNITYSDK_OFFSET(0x1A0C1650)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_9CE5F7206222B7DB_OFFSET UNITYSDK_OFFSET(0x1A0C1720)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_A8FC6ACEB00A3EC2_OFFSET UNITYSDK_OFFSET(0x1A0C16B0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A0C1640)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_D05FB211DC6EAC7E_OFFSET UNITYSDK_OFFSET(0x1A0C14B0)
#define SYSTEM_REFLECTION_EVENTINFO_METHOD_2_DF325AA53F4BA122_OFFSET UNITYSDK_OFFSET(0x1A0C1080)

namespace System::Reflection
{
	inline static constexpr unsigned int EventInfo_TypeDefinitionIndex = 576;

	class EventInfo : public ::System::Reflection::MemberInfo
	{
	public:
		::System::Reflection::EventInfo_AddEventAdapter* Field_2_0; // 0x10

		::System::Void Method_2_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_832295EC279E5994_OFFSET))(this);
		}

		::System::Type* Method_2_DF325AA53F4BA122()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_DF325AA53F4BA122_OFFSET))(this);
		}

		::System::Reflection::MemberTypes Method_2_49E3FA61F17A6A16()
		{
			return ((::System::Reflection::MemberTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_49E3FA61F17A6A16_OFFSET))(this);
		}

		::System::Void Method_2_3A30E25BB294B133(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_3A30E25BB294B133_OFFSET))(this, target, handler);
		}

		::System::Reflection::MethodInfo* Method_2_12482E77452F6A88()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_12482E77452F6A88_OFFSET))(this);
		}

		::System::Reflection::MethodInfo* Method_2_12482E77452F6A88_1()
		{
			return ((::System::Reflection::MethodInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_12482E77452F6A88_1_OFFSET))(this);
		}

		::System::Void Method_2_D05FB211DC6EAC7E(::System::Object* target, ::System::Delegate* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Delegate*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_D05FB211DC6EAC7E_OFFSET))(this, target, handler);
		}

		::System::Boolean Method_2_083577508CCFDAF3(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_083577508CCFDAF3_OFFSET))(this, obj);
		}

		::System::Int32 Method_2_C74CF020AA42ED85()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
		}

		static ::System::Boolean Method_2_89C61BA98593C1C4(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_OFFSET))(left, right);
		}

		static ::System::Boolean Method_2_89C61BA98593C1C4_1(::System::Reflection::EventInfo* left, ::System::Reflection::EventInfo* right)
		{
			return ((::System::Boolean(*)(::System::Reflection::EventInfo*, ::System::Reflection::EventInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_89C61BA98593C1C4_1_OFFSET))(left, right);
		}

		static ::System::Reflection::EventInfo* Method_2_A8FC6ACEB00A3EC2(::System::IntPtr event_handle, ::System::IntPtr type_handle)
		{
			return ((::System::Reflection::EventInfo*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_A8FC6ACEB00A3EC2_OFFSET))(event_handle, type_handle);
		}

		static ::System::Reflection::EventInfo* Method_2_9CE5F7206222B7DB(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType)
		{
			return ((::System::Reflection::EventInfo*(*)(::Mono::RuntimeEventHandle, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EVENTINFO_METHOD_2_9CE5F7206222B7DB_OFFSET))(handle, reflectedType);
		}
	};
}
