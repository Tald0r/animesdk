#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_4F2E1A9F7CA83F80_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x7431280)
#define CLASS_1_4F2E1A9F7CA83F80_METHOD_1_589A5BE7B472C547_OFFSET UNITYSDK_OFFSET(0x74314B0)
#define CLASS_1_4F2E1A9F7CA83F80_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x7431300)
#define CLASS_1_4F2E1A9F7CA83F80__CTOR_OFFSET UNITYSDK_OFFSET(0x7430F70)

inline static constexpr unsigned int Class_1_4F2E1A9F7CA83F80_TypeDefinitionIndex = 48683;

class Class_1_4F2E1A9F7CA83F80 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::UI::Text* Field_1_2; // 0x18
	::UnityEngine::UI::Text* Field_1_1; // 0x20

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_4F2E1A9F7CA83F80__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F2E1A9F7CA83F80_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F2E1A9F7CA83F80_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_589A5BE7B472C547(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4F2E1A9F7CA83F80_METHOD_1_589A5BE7B472C547_OFFSET))(this, a1, a2, a3, a4);
	}
};
