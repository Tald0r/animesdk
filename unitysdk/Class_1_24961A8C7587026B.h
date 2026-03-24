#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_24961A8C7587026B_METHOD_1_04033BEEA7D1EEC5_OFFSET UNITYSDK_OFFSET(0xA0DB660)
#define CLASS_1_24961A8C7587026B_METHOD_1_84FD67F3C79B65C4_OFFSET UNITYSDK_OFFSET(0xA0DB750)
#define CLASS_1_24961A8C7587026B_METHOD_1_9242614AAD60C721_OFFSET UNITYSDK_OFFSET(0xA0DB860)
#define CLASS_1_24961A8C7587026B_METHOD_1_CBC7F7DFDE5B3ECB_OFFSET UNITYSDK_OFFSET(0xA0DB6D0)
#define CLASS_1_24961A8C7587026B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA0DB650)
#define CLASS_1_24961A8C7587026B__CTOR_OFFSET UNITYSDK_OFFSET(0xA0DB960)

inline static constexpr unsigned int Class_1_24961A8C7587026B_TypeDefinitionIndex = 61703;

class Class_1_24961A8C7587026B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_04033BEEA7D1EEC5(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_METHOD_1_04033BEEA7D1EEC5_OFFSET))(this, a1);
	}

	::System::String* Method_1_CBC7F7DFDE5B3ECB(::Foundation::AssetPath a1)
	{
		return ((::System::String*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_METHOD_1_CBC7F7DFDE5B3ECB_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_84FD67F3C79B65C4(::System::String* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_METHOD_1_84FD67F3C79B65C4_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::String*> Method_1_9242614AAD60C721(::Foundation::AssetPath a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::String*>(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_24961A8C7587026B_METHOD_1_9242614AAD60C721_OFFSET))(this, a1);
	}
};
