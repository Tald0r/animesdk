#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_A6B31396C0667910_CLASS_1_7803A07D68834F37_STARTCOROUTINE_OFFSET UNITYSDK_OFFSET(0xC3076A0)
#define CLASS_3_A6B31396C0667910_CLASS_1_7803A07D68834F37__CTOR_OFFSET UNITYSDK_OFFSET(0xC307740)

inline static constexpr unsigned int Class_3_A6B31396C0667910_Class_1_7803A07D68834F37_TypeDefinitionIndex = 57941;

class Class_3_A6B31396C0667910_Class_1_7803A07D68834F37 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_CLASS_1_7803A07D68834F37__CTOR_OFFSET))(this);
	}

	::UnityEngine::Coroutine* StartCoroutine(::System::Collections::IEnumerator* a1)
	{
		return ((::UnityEngine::Coroutine*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + CLASS_3_A6B31396C0667910_CLASS_1_7803A07D68834F37_STARTCOROUTINE_OFFSET))(this, a1);
	}
};
