#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DAB41DAFBDB7AAF8;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_3F643AFB4574EC02_METHOD_1_63AF6E26D9D839FF_OFFSET UNITYSDK_OFFSET(0xA9E8280)
#define CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_3F643AFB4574EC02__CTOR_OFFSET UNITYSDK_OFFSET(0xA9E8270)

inline static constexpr unsigned int Class_1_DAB41DAFBDB7AAF8_Class_1_3F643AFB4574EC02_TypeDefinitionIndex = 77352;

class Class_1_DAB41DAFBDB7AAF8_Class_1_3F643AFB4574EC02 : public ::System::Object
{
public:
	::Class_1_DAB41DAFBDB7AAF8* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::UnityEngine::GameObject*>* Field_1_5; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x34
	::UnityEngine::Quaternion Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_3F643AFB4574EC02__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_63AF6E26D9D839FF(::System::Boolean a1, ::Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_DAB41DAFBDB7AAF8_Struct_2_E9D871EB4F62E1AD))((::PBYTE)hIl2Cpp + CLASS_1_DAB41DAFBDB7AAF8_CLASS_1_3F643AFB4574EC02_METHOD_1_63AF6E26D9D839FF_OFFSET))(this, a1, a2);
	}
};
