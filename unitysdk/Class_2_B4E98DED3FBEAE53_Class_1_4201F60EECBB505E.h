#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FCCAFAFEDD17B2C1;
class Class_2_B4E98DED3FBEAE53;
namespace MoleMole { class ConfigUIUrbanMap; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_4201F60EECBB505E_METHOD_1_322500385B6812CF_OFFSET UNITYSDK_OFFSET(0x66F5E80)
#define CLASS_2_B4E98DED3FBEAE53_CLASS_1_4201F60EECBB505E__CTOR_OFFSET UNITYSDK_OFFSET(0x66F5E70)

inline static constexpr unsigned int Class_2_B4E98DED3FBEAE53_Class_1_4201F60EECBB505E_TypeDefinitionIndex = 44506;

class Class_2_B4E98DED3FBEAE53_Class_1_4201F60EECBB505E : public ::System::Object
{
public:
	::System::Action* Field_1_8; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::UnityEngine::Camera* Field_1_7; // 0x20
	::UnityEngine::Transform* Field_1_2; // 0x28
	::System::String* Field_1_4; // 0x30
	::Class_2_B4E98DED3FBEAE53* Field_1_1; // 0x38
	::Class_1_FCCAFAFEDD17B2C1* Field_1_3; // 0x40
	::MoleMole::ConfigUIUrbanMap* Field_1_5; // 0x48
	::System::Int32 Field_1_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_4201F60EECBB505E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_322500385B6812CF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_B4E98DED3FBEAE53_CLASS_1_4201F60EECBB505E_METHOD_1_322500385B6812CF_OFFSET))(this, a1);
	}
};
