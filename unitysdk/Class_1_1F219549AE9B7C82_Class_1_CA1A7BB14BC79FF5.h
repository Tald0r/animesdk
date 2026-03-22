#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_CA1A7BB14BC79FF5_METHOD_1_942D0BCA7667749C_OFFSET UNITYSDK_OFFSET(0xD08C290)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_CA1A7BB14BC79FF5__CTOR_OFFSET UNITYSDK_OFFSET(0xD08C280)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_CA1A7BB14BC79FF5_TypeDefinitionIndex = 57072;

class Class_1_1F219549AE9B7C82_Class_1_CA1A7BB14BC79FF5 : public ::System::Object
{
public:
	::UnityEngine::Sprite* Field_1_0; // 0x10
	::System::Action_2<::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_CA1A7BB14BC79FF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_942D0BCA7667749C(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_CA1A7BB14BC79FF5_METHOD_1_942D0BCA7667749C_OFFSET))(this, a1, a2);
	}
};
