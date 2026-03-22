#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_6AA49EBF8AA1872E_OFFSET UNITYSDK_OFFSET(0x92DFA70)
#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_70FE6500EF5897AC_OFFSET UNITYSDK_OFFSET(0x92DF8F0)
#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_8AE88CC79AC0221D_OFFSET UNITYSDK_OFFSET(0x92DF6F0)
#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x92DFA10)
#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_BEE62D95742790F2_OFFSET UNITYSDK_OFFSET(0x92DF840)
#define CLASS_1_8E5ABE1F13A7DA84_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92DF7D0)
#define CLASS_1_8E5ABE1F13A7DA84__CTOR_OFFSET UNITYSDK_OFFSET(0x92DF6E0)

inline static constexpr unsigned int Class_1_8E5ABE1F13A7DA84_TypeDefinitionIndex = 61583;

class Class_1_8E5ABE1F13A7DA84 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_3; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::UnityEngine::Vector2 Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_8AE88CC79AC0221D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_8AE88CC79AC0221D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_BEE62D95742790F2(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_BEE62D95742790F2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_6AA49EBF8AA1872E(::UnityEngine::GameObject* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_6AA49EBF8AA1872E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_70FE6500EF5897AC(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_8E5ABE1F13A7DA84_METHOD_1_70FE6500EF5897AC_OFFSET))(this, a1);
	}
};
