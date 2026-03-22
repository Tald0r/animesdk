#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_D4F7234966C2AB79_2_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x95A45D0)
#define CLASS_1_D4F7234966C2AB79_2_METHOD_1_8FD0952225841B46_OFFSET UNITYSDK_OFFSET(0x95A4520)
#define CLASS_1_D4F7234966C2AB79_2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x95A4510)
#define CLASS_1_D4F7234966C2AB79_2__CTOR_OFFSET UNITYSDK_OFFSET(0x95A43F0)

inline static constexpr unsigned int Class_1_D4F7234966C2AB79_2_TypeDefinitionIndex = 42380;

class Class_1_D4F7234966C2AB79_2 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::Class_2_60DDD9C206686F44* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::System::Action_2<::System::Boolean, ::System::String*>* Field_1_4; // 0x28
	::System::Boolean Field_1_0; // 0x30

	::System::Void _ctor(::System::Boolean a1, ::Class_2_60DDD9C206686F44* a2, ::UnityEngine::Transform* a3, ::System::String* a4, ::System::Action_2<::System::Boolean, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_60DDD9C206686F44*, ::UnityEngine::Transform*, ::System::String*, ::System::Action_2<::System::Boolean, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D4F7234966C2AB79_2__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4F7234966C2AB79_2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_8FD0952225841B46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D4F7234966C2AB79_2_METHOD_1_8FD0952225841B46_OFFSET))(this);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D4F7234966C2AB79_2_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}
};
