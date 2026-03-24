#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_84358921ABCB4E84_CLASS_1_E86B2A10B97ED8FE_5_METHOD_1_FD68C66EACD6313C_OFFSET UNITYSDK_OFFSET(0xA611190)
#define CLASS_1_84358921ABCB4E84_CLASS_1_E86B2A10B97ED8FE_5__CTOR_OFFSET UNITYSDK_OFFSET(0xA611180)

inline static constexpr unsigned int Class_1_84358921ABCB4E84_Class_1_E86B2A10B97ED8FE_5_TypeDefinitionIndex = 71969;

class Class_1_84358921ABCB4E84_Class_1_E86B2A10B97ED8FE_5 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_CLASS_1_E86B2A10B97ED8FE_5__CTOR_OFFSET))(this);
	}

	::Foundation::DualQuaternion Method_1_FD68C66EACD6313C()
	{
		return ((::Foundation::DualQuaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_84358921ABCB4E84_CLASS_1_E86B2A10B97ED8FE_5_METHOD_1_FD68C66EACD6313C_OFFSET))(this);
	}
};
