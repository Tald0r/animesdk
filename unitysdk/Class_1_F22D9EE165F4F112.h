#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_F22D9EE165F4F112_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9051D50)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x9051E20)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x9051CE0)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_4D10873DB5CC58E4_OFFSET UNITYSDK_OFFSET(0x9052390)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_9CA5A80F6B5B9E01_OFFSET UNITYSDK_OFFSET(0x9051CD0)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9051E90)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9051DC0)
#define CLASS_1_F22D9EE165F4F112_METHOD_1_D97EDDBA73589114_OFFSET UNITYSDK_OFFSET(0x9051F00)
#define CLASS_1_F22D9EE165F4F112__CTOR_OFFSET UNITYSDK_OFFSET(0x9051EF0)

inline static constexpr unsigned int Class_1_F22D9EE165F4F112_TypeDefinitionIndex = 76669;

class Class_1_F22D9EE165F4F112 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_9CA5A80F6B5B9E01()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_9CA5A80F6B5B9E01_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Collider* Method_1_D97EDDBA73589114(::UnityEngine::Transform* a1, ::System::String* a2, ::UnityEngine::Collider* a3)
	{
		return ((::UnityEngine::Collider*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_D97EDDBA73589114_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4D10873DB5CC58E4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F22D9EE165F4F112_METHOD_1_4D10873DB5CC58E4_OFFSET))(this, a1);
	}
};
