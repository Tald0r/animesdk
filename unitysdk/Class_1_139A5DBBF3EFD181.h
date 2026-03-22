#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_1_139A5DBBF3EFD181_METHOD_1_3B4D8A6E1C38CAD8_OFFSET UNITYSDK_OFFSET(0x6C3F240)
#define CLASS_1_139A5DBBF3EFD181__CTOR_OFFSET UNITYSDK_OFFSET(0x6C3F230)

inline static constexpr unsigned int Class_1_139A5DBBF3EFD181_TypeDefinitionIndex = 52238;

class Class_1_139A5DBBF3EFD181 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::UnityEngine::RectTransform* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_139A5DBBF3EFD181__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_3B4D8A6E1C38CAD8(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_139A5DBBF3EFD181_METHOD_1_3B4D8A6E1C38CAD8_OFFSET))(this, a1, a2);
	}
};
