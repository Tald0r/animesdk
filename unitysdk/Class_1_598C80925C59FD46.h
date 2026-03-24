#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_451601B8BB62C38C_1;
class Class_2_A944C35C433158AC;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_598C80925C59FD46_METHOD_1_5813D60FB9DD5D10_OFFSET UNITYSDK_OFFSET(0x9C24510)
#define CLASS_1_598C80925C59FD46__CTOR_OFFSET UNITYSDK_OFFSET(0x9C24500)

inline static constexpr unsigned int Class_1_598C80925C59FD46_TypeDefinitionIndex = 43295;

class Class_1_598C80925C59FD46 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_598C80925C59FD46__CTOR_OFFSET))(this);
	}

	static ::Class_2_A944C35C433158AC* Method_1_5813D60FB9DD5D10(::System::String* a1, ::System::Action_1<::UnityEngine::Transform*>* a2, ::System::Action_1<::UnityEngine::Transform*>* a3, ::System::Action* a4, ::System::Action* a5, ::System::Boolean a6, ::UnityEngine::Transform* a7, ::System::Boolean a8, ::System::String* a9, ::Class_1_451601B8BB62C38C_1* a10)
	{
		return ((::Class_2_A944C35C433158AC*(*)(::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean, ::System::String*, ::Class_1_451601B8BB62C38C_1*))((::PBYTE)hIl2Cpp + CLASS_1_598C80925C59FD46_METHOD_1_5813D60FB9DD5D10_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}
};
