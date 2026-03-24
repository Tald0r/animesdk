#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_1F219549AE9B7C82_CLASS_1_B34F6EDFE46B4F7B_METHOD_1_232E79648899E21B_OFFSET UNITYSDK_OFFSET(0x75BBF00)
#define CLASS_1_1F219549AE9B7C82_CLASS_1_B34F6EDFE46B4F7B__CTOR_OFFSET UNITYSDK_OFFSET(0x75BBEF0)

inline static constexpr unsigned int Class_1_1F219549AE9B7C82_Class_1_B34F6EDFE46B4F7B_TypeDefinitionIndex = 62838;

class Class_1_1F219549AE9B7C82_Class_1_B34F6EDFE46B4F7B : public ::System::Object
{
public:
	::System::Action_1<::System::Action*>* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Action*>* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Action*>*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_B34F6EDFE46B4F7B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_232E79648899E21B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F219549AE9B7C82_CLASS_1_B34F6EDFE46B4F7B_METHOD_1_232E79648899E21B_OFFSET))(this);
	}
};
