#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x6576770)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_73DE55699C2EC611_OFFSET UNITYSDK_OFFSET(0x6576470)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x65768D0)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781__CTOR_OFFSET UNITYSDK_OFFSET(0x6576460)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781_TypeDefinitionIndex = 69924;

class Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_3; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::Il2CppArray<::System::Boolean>* Field_1_2; // 0x20
	::UnityEngine::Animator* Field_1_5; // 0x28
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_1; // 0x30
	::MoleMole::UIAvatarAnimator* Field_1_4; // 0x38
	::MoleMole::Battle::Entity* Field_1_6; // 0x40
	::System::Boolean Field_1_8; // 0x48
	::System::Int32 Field_1_7; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_73DE55699C2EC611(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_73DE55699C2EC611_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_BCC994F93231B781_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}
};
