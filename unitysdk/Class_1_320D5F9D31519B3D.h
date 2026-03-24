#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_320D5F9D31519B3D_METHOD_1_23B7C160CB6CEA95_OFFSET UNITYSDK_OFFSET(0xB2FDF30)
#define CLASS_1_320D5F9D31519B3D_METHOD_1_67092B198ADCB2A8_OFFSET UNITYSDK_OFFSET(0xB2FE040)
#define CLASS_1_320D5F9D31519B3D__CTOR_OFFSET UNITYSDK_OFFSET(0xB2FDD60)

inline static constexpr unsigned int Class_1_320D5F9D31519B3D_TypeDefinitionIndex = 58555;

class Class_1_320D5F9D31519B3D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_320D5F9D31519B3D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_23B7C160CB6CEA95(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_320D5F9D31519B3D_METHOD_1_23B7C160CB6CEA95_OFFSET))(this, a1);
	}

	::System::Void Method_1_67092B198ADCB2A8(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_320D5F9D31519B3D_METHOD_1_67092B198ADCB2A8_OFFSET))(this, a1);
	}
};
