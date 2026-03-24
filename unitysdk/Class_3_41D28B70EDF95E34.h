#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7808BF09EBF8C35A.h"

namespace UnityEngine { class Transform; }

#define CLASS_3_41D28B70EDF95E34_METHOD_3_6F1A049270AD7843_OFFSET UNITYSDK_OFFSET(0xAAAB420)
#define CLASS_3_41D28B70EDF95E34__CTOR_OFFSET UNITYSDK_OFFSET(0xAAAB3D0)

inline static constexpr unsigned int Class_3_41D28B70EDF95E34_TypeDefinitionIndex = 44150;

class Class_3_41D28B70EDF95E34 : public ::Class_2_7808BF09EBF8C35A
{
public:
	::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6F1A049270AD7843()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_41D28B70EDF95E34_METHOD_3_6F1A049270AD7843_OFFSET))(this);
	}
};
