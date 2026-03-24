#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_0AECE78A0888504E_CLASS_1_152B1E66C356777F_METHOD_1_9CCD72BD799352F4_OFFSET UNITYSDK_OFFSET(0x95F8160)
#define CLASS_3_0AECE78A0888504E_CLASS_1_152B1E66C356777F__CTOR_OFFSET UNITYSDK_OFFSET(0x95F8150)

inline static constexpr unsigned int Class_3_0AECE78A0888504E_Class_1_152B1E66C356777F_TypeDefinitionIndex = 65738;

class Class_3_0AECE78A0888504E_Class_1_152B1E66C356777F : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CLASS_1_152B1E66C356777F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9CCD72BD799352F4(::UnityEngine::Renderer* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + CLASS_3_0AECE78A0888504E_CLASS_1_152B1E66C356777F_METHOD_1_9CCD72BD799352F4_OFFSET))(this, a1);
	}
};
