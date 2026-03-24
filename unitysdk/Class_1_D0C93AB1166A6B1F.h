#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_169;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define CLASS_1_D0C93AB1166A6B1F_METHOD_1_036E8DCCBB0F23FF_OFFSET UNITYSDK_OFFSET(0xD4B0170)
#define CLASS_1_D0C93AB1166A6B1F_METHOD_1_066B4A2C516F676F_OFFSET UNITYSDK_OFFSET(0xD4B02A0)
#define CLASS_1_D0C93AB1166A6B1F_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0xD4B00F0)
#define CLASS_1_D0C93AB1166A6B1F_METHOD_1_212746AF52890492_OFFSET UNITYSDK_OFFSET(0xD4B0270)
#define CLASS_1_D0C93AB1166A6B1F_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD4B0060)
#define CLASS_1_D0C93AB1166A6B1F__CTOR_OFFSET UNITYSDK_OFFSET(0xD4AFC00)

inline static constexpr unsigned int Class_1_D0C93AB1166A6B1F_TypeDefinitionIndex = 45571;

class Class_1_D0C93AB1166A6B1F : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_169* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_169* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_169*))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_036E8DCCBB0F23FF(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F_METHOD_1_036E8DCCBB0F23FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_212746AF52890492()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F_METHOD_1_212746AF52890492_OFFSET))(this);
	}

	static ::Class_1_D0C93AB1166A6B1F* Method_1_066B4A2C516F676F(::Class_0_16E4307DCC419505_169* a1)
	{
		return ((::Class_1_D0C93AB1166A6B1F*(*)(::Class_0_16E4307DCC419505_169*))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F_METHOD_1_066B4A2C516F676F_OFFSET))(a1);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0C93AB1166A6B1F_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}
};
