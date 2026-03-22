#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Cysharp::Threading::Tasks { class AutoResetUniTaskCompletionSource; }
namespace System::IO { class Stream; }
namespace UnityEngine { class Object; }

#define CLASS_1_29606631DBDC3F74_CLASS_1_24CB0F16A964F1CE_METHOD_1_6647AC7A23B57DA8_OFFSET UNITYSDK_OFFSET(0x747A500)
#define CLASS_1_29606631DBDC3F74_CLASS_1_24CB0F16A964F1CE__CTOR_OFFSET UNITYSDK_OFFSET(0x747A4F0)

inline static constexpr unsigned int Class_1_29606631DBDC3F74_Class_1_24CB0F16A964F1CE_TypeDefinitionIndex = 42275;

class Class_1_29606631DBDC3F74_Class_1_24CB0F16A964F1CE : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::AutoResetUniTaskCompletionSource* Field_1_1; // 0x10
	::System::IO::Stream* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_CLASS_1_24CB0F16A964F1CE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6647AC7A23B57DA8(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_29606631DBDC3F74_CLASS_1_24CB0F16A964F1CE_METHOD_1_6647AC7A23B57DA8_OFFSET))(this, a1, a2);
	}
};
