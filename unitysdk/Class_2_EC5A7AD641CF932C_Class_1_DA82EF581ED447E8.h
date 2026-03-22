#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xA220690)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA220610)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_8267359422381F6D_OFFSET UNITYSDK_OFFSET(0xA220A70)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xA220D40)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_FAC753E63F8C786F_OFFSET UNITYSDK_OFFSET(0xA220720)
#define CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8__CTOR_OFFSET UNITYSDK_OFFSET(0xA220600)

inline static constexpr unsigned int Class_2_EC5A7AD641CF932C_Class_1_DA82EF581ED447E8_TypeDefinitionIndex = 69916;

class Class_2_EC5A7AD641CF932C_Class_1_DA82EF581ED447E8 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::Class_2_EC5A7AD641CF932C_Class_1_BCC994F93231B781* Field_1_5; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::UnityEngine::GameObject* Field_1_2; // 0x28
	::System::Boolean Field_1_1; // 0x30
	::System::Int32 Field_1_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_FAC753E63F8C786F(::UnityEngine::Object* a1, ::Foundation::AssetRequestHandle a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_FAC753E63F8C786F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8267359422381F6D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_8267359422381F6D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC5A7AD641CF932C_CLASS_1_DA82EF581ED447E8_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
