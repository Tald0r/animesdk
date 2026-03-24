#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System { class String; }
namespace UnityEngine { class Object; }

#define CLASS_1_29606631DBDC3F74_CLASS_1_81AAFEC156C931F6_METHOD_1_7006A7B565FE3961_OFFSET UNITYSDK_OFFSET(0xA7472B0)
#define CLASS_1_29606631DBDC3F74_CLASS_1_81AAFEC156C931F6__CTOR_OFFSET UNITYSDK_OFFSET(0xA7472A0)

inline static constexpr unsigned int Class_1_29606631DBDC3F74_Class_1_81AAFEC156C931F6_TypeDefinitionIndex = 69822;

class Class_1_29606631DBDC3F74_Class_1_81AAFEC156C931F6 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_CLASS_1_81AAFEC156C931F6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7006A7B565FE3961(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_CLASS_1_81AAFEC156C931F6_METHOD_1_7006A7B565FE3961_OFFSET))(this, a1, a2);
	}
};
