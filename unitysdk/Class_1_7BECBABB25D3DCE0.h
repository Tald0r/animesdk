#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

class Class_3_402121D94A91AFBA;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Exception; }

#define CLASS_1_7BECBABB25D3DCE0_METHOD_1_036E8DCCBB0F23FF_OFFSET UNITYSDK_OFFSET(0xDA1C210)
#define CLASS_1_7BECBABB25D3DCE0_METHOD_1_0C44FB644D25C1C2_OFFSET UNITYSDK_OFFSET(0xDA1C0D0)
#define CLASS_1_7BECBABB25D3DCE0_METHOD_1_212746AF52890492_OFFSET UNITYSDK_OFFSET(0xDA1C310)
#define CLASS_1_7BECBABB25D3DCE0_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xDA1C040)
#define CLASS_1_7BECBABB25D3DCE0_METHOD_1_FA606D8166F0B8FE_OFFSET UNITYSDK_OFFSET(0xDA1C150)
#define CLASS_1_7BECBABB25D3DCE0__CTOR_OFFSET UNITYSDK_OFFSET(0xDA1BD30)

inline static constexpr unsigned int Class_1_7BECBABB25D3DCE0_TypeDefinitionIndex = 56363;

class Class_1_7BECBABB25D3DCE0 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_0; // 0x10
	::Class_3_402121D94A91AFBA* Field_1_1; // 0x18

	::System::Void _ctor(::Class_3_402121D94A91AFBA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_402121D94A91AFBA*))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_7BECBABB25D3DCE0* Method_1_FA606D8166F0B8FE(::Class_3_402121D94A91AFBA* a1)
	{
		return ((::Class_1_7BECBABB25D3DCE0*(*)(::Class_3_402121D94A91AFBA*))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0_METHOD_1_FA606D8166F0B8FE_OFFSET))(a1);
	}

	::System::Void Method_1_036E8DCCBB0F23FF(::System::Exception* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0_METHOD_1_036E8DCCBB0F23FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C44FB644D25C1C2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0_METHOD_1_0C44FB644D25C1C2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_212746AF52890492()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0_METHOD_1_212746AF52890492_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BECBABB25D3DCE0_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
