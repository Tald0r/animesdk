#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define CLASS_1_0A7E1C949F3AB732_CLASS_1_C030259E59A0E7A9_METHOD_1_F1E51E4CA54AD3F9_OFFSET UNITYSDK_OFFSET(0x7B43810)
#define CLASS_1_0A7E1C949F3AB732_CLASS_1_C030259E59A0E7A9__CTOR_OFFSET UNITYSDK_OFFSET(0x7B43800)

inline static constexpr unsigned int Class_1_0A7E1C949F3AB732_Class_1_C030259E59A0E7A9_TypeDefinitionIndex = 39946;

class Class_1_0A7E1C949F3AB732_Class_1_C030259E59A0E7A9 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_2; // 0x10
	::Il2CppArray<::System::String*>* Field_1_1; // 0x18
	::System::String* Field_1_0; // 0x20
	::UnityEngine::LayerMask Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_CLASS_1_C030259E59A0E7A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F1E51E4CA54AD3F9(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_1_0A7E1C949F3AB732_CLASS_1_C030259E59A0E7A9_METHOD_1_F1E51E4CA54AD3F9_OFFSET))(this, a1);
	}
};
