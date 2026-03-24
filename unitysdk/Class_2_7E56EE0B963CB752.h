#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

#define CLASS_2_7E56EE0B963CB752_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x654F260)
#define CLASS_2_7E56EE0B963CB752_GET_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x654F450)
#define CLASS_2_7E56EE0B963CB752_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x654F1A0)
#define CLASS_2_7E56EE0B963CB752_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x654F4F0)
#define CLASS_2_7E56EE0B963CB752__CTOR_OFFSET UNITYSDK_OFFSET(0x654F460)

inline static constexpr unsigned int Class_2_7E56EE0B963CB752_TypeDefinitionIndex = 58085;

class Class_2_7E56EE0B963CB752 : public ::Foundation::Singleton_1<::Class_2_7E56EE0B963CB752*>
{
public:
	::System::Double Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E56EE0B963CB752__CTOR_OFFSET))(this);
	}

	::System::Double get_Timestamp()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E56EE0B963CB752_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Single get_DeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E56EE0B963CB752_GET_DELTATIME_OFFSET))(this);
	}

	::System::Boolean get_IsThreadSafeInWorkThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E56EE0B963CB752_GET_ISTHREADSAFEINWORKTHREAD_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E56EE0B963CB752_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
