#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F2B17BA55377659F;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_96164EDB43336CD8_CLASS_1_5571C2F322BE6394_METHOD_1_1A54E3DF1B02B1B9_OFFSET UNITYSDK_OFFSET(0x9FCEE00)
#define CLASS_1_96164EDB43336CD8_CLASS_1_5571C2F322BE6394__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCEDF0)

inline static constexpr unsigned int Class_1_96164EDB43336CD8_Class_1_5571C2F322BE6394_TypeDefinitionIndex = 54570;

class Class_1_96164EDB43336CD8_Class_1_5571C2F322BE6394 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::Class_1_F2B17BA55377659F*>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_5571C2F322BE6394__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1A54E3DF1B02B1B9(::Class_1_F2B17BA55377659F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F2B17BA55377659F*))((::PBYTE)hIl2Cpp + CLASS_1_96164EDB43336CD8_CLASS_1_5571C2F322BE6394_METHOD_1_1A54E3DF1B02B1B9_OFFSET))(this, a1);
	}
};
