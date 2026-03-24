#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BuddyCollider;
class Class_1_A59025D696FD25CD;
namespace UnityEngine::UI { class Image; }

#define CLASS_1_2CB185F86C732591_METHOD_1_46D5C4F0EA172C6A_OFFSET UNITYSDK_OFFSET(0xAFC4E40)
#define CLASS_1_2CB185F86C732591_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0xAFC4EE0)
#define CLASS_1_2CB185F86C732591_METHOD_1_533EE8D6A1D9B39A_OFFSET UNITYSDK_OFFSET(0xAFC4EC0)
#define CLASS_1_2CB185F86C732591_METHOD_1_8D0A2531C88B32B1_OFFSET UNITYSDK_OFFSET(0xAFC4EF0)
#define CLASS_1_2CB185F86C732591_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAFC4EB0)
#define CLASS_1_2CB185F86C732591_METHOD_1_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0xAFC4ED0)
#define CLASS_1_2CB185F86C732591__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC4DD0)

inline static constexpr unsigned int Class_1_2CB185F86C732591_TypeDefinitionIndex = 50902;

class Class_1_2CB185F86C732591 : public ::System::Object
{
public:
	::BuddyCollider* Field_1_0; // 0x10
	::Class_1_A59025D696FD25CD* Field_1_1; // 0x18
	::UnityEngine::UI::Image* Field_1_6; // 0x20
	::UnityEngine::Vector2 Field_1_3; // 0x28
	::UnityEngine::Vector2 Field_1_7; // 0x30
	::UnityEngine::Vector2 Field_1_4; // 0x38
	::System::Int32 Field_1_5; // 0x40
	::UnityEngine::Vector2 Field_1_2; // 0x44

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_46D5C4F0EA172C6A(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_46D5C4F0EA172C6A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::BuddyCollider* Method_1_533EE8D6A1D9B39A()
	{
		return ((::BuddyCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_533EE8D6A1D9B39A_OFFSET))(this);
	}

	::System::Void Method_1_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::System::Void Method_1_8D0A2531C88B32B1(::Class_1_A59025D696FD25CD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A59025D696FD25CD*))((::PBYTE)hIl2Cpp + CLASS_1_2CB185F86C732591_METHOD_1_8D0A2531C88B32B1_OFFSET))(this, a1);
	}
};
