#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace UnityEngine { class Object; }

#define CLASS_1_4F1AA8D8DBB407B1_CLASS_1_239A7C3F1E21935F_METHOD_1_35DEE2146EB8FCC0_OFFSET UNITYSDK_OFFSET(0xB99FE10)
#define CLASS_1_4F1AA8D8DBB407B1_CLASS_1_239A7C3F1E21935F__CTOR_OFFSET UNITYSDK_OFFSET(0xB99FE00)

inline static constexpr unsigned int Class_1_4F1AA8D8DBB407B1_Class_1_239A7C3F1E21935F_TypeDefinitionIndex = 74868;

class Class_1_4F1AA8D8DBB407B1_Class_1_239A7C3F1E21935F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_CLASS_1_239A7C3F1E21935F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_35DEE2146EB8FCC0(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_4F1AA8D8DBB407B1_CLASS_1_239A7C3F1E21935F_METHOD_1_35DEE2146EB8FCC0_OFFSET))(this, a1, a2);
	}
};
