#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CLASS_1_29606631DBDC3F74_METHOD_1_42D4A8391AEE2ECD_OFFSET UNITYSDK_OFFSET(0x7CD3210)
#define CLASS_1_29606631DBDC3F74_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x7CD3160)
#define CLASS_1_29606631DBDC3F74_METHOD_1_7E169EED13A717AB_OFFSET UNITYSDK_OFFSET(0x7CD3350)
#define CLASS_1_29606631DBDC3F74_METHOD_1_84FD67F3C79B65C4_OFFSET UNITYSDK_OFFSET(0x7CD2EF0)
#define CLASS_1_29606631DBDC3F74_METHOD_1_9242614AAD60C721_OFFSET UNITYSDK_OFFSET(0x7CD3010)
#define CLASS_1_29606631DBDC3F74_METHOD_1_A8959E1258286D13_OFFSET UNITYSDK_OFFSET(0x7CD2CC0)
#define CLASS_1_29606631DBDC3F74_METHOD_1_CAFC805D6FEDABCD_OFFSET UNITYSDK_OFFSET(0x7CD2DC0)
#define CLASS_1_29606631DBDC3F74_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7CD2CB0)
#define CLASS_1_29606631DBDC3F74__CTOR_OFFSET UNITYSDK_OFFSET(0x7CD3150)

inline static constexpr unsigned int Class_1_29606631DBDC3F74_TypeDefinitionIndex = 69821;

class Class_1_29606631DBDC3F74 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_A8959E1258286D13(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_A8959E1258286D13_OFFSET))(this, a1);
	}

	::System::String* Method_1_CAFC805D6FEDABCD(::Foundation::AssetPath a1)
	{
		return ((::System::String*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_CAFC805D6FEDABCD_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_84FD67F3C79B65C4(::System::String* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_84FD67F3C79B65C4_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_9242614AAD60C721(::Foundation::AssetPath a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_9242614AAD60C721_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::IO::Stream*> Method_1_42D4A8391AEE2ECD(::Foundation::AssetPath a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::IO::Stream*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_42D4A8391AEE2ECD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E169EED13A717AB(::Foundation::AssetPath a1, ::System::IO::Stream*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::IO::Stream*&))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_METHOD_1_7E169EED13A717AB_OFFSET))(this, a1, a2);
	}
};
