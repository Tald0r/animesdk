#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B686E029302D4EC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_82F90598C881C204_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x7B93D90)
#define CLASS_2_82F90598C881C204_METHOD_2_98CC2C3EFF9B2AB5_OFFSET UNITYSDK_OFFSET(0x7B93E00)
#define CLASS_2_82F90598C881C204_METHOD_2_CF6EEB0206D60DE3_OFFSET UNITYSDK_OFFSET(0x7B94140)
#define CLASS_2_82F90598C881C204_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7B93D80)
#define CLASS_2_82F90598C881C204__CTOR_OFFSET UNITYSDK_OFFSET(0x7B940D0)

inline static constexpr unsigned int Class_2_82F90598C881C204_TypeDefinitionIndex = 44624;

class Class_2_82F90598C881C204 : public ::Class_1_2B686E029302D4EC
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::String* a2, ::UnityEngine::Transform* a3, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_2_82F90598C881C204__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F90598C881C204_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F90598C881C204_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_98CC2C3EFF9B2AB5(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_82F90598C881C204_METHOD_2_98CC2C3EFF9B2AB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CF6EEB0206D60DE3(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_82F90598C881C204_METHOD_2_CF6EEB0206D60DE3_OFFSET))(this, a1, a2);
	}
};
