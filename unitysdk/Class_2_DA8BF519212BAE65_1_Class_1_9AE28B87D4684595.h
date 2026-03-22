#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DA8BF519212BAE65_1;
class Class_3_2159197412A91599;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_DA8BF519212BAE65_1_CLASS_1_9AE28B87D4684595_METHOD_1_803EEEE72DF59F97_OFFSET UNITYSDK_OFFSET(0x6DEDFD0)
#define CLASS_2_DA8BF519212BAE65_1_CLASS_1_9AE28B87D4684595__CTOR_OFFSET UNITYSDK_OFFSET(0x6DEDFC0)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_1_Class_1_9AE28B87D4684595_TypeDefinitionIndex = 54466;

class Class_2_DA8BF519212BAE65_1_Class_1_9AE28B87D4684595 : public ::System::Object
{
public:
	::System::Action_2<::System::Boolean, ::Class_3_2159197412A91599*>* Field_1_2; // 0x10
	::Class_2_DA8BF519212BAE65_1* Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_1_9AE28B87D4684595__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_803EEEE72DF59F97(::System::Boolean a1, ::Class_3_2159197412A91599* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_2159197412A91599*))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_1_9AE28B87D4684595_METHOD_1_803EEEE72DF59F97_OFFSET))(this, a1, a2);
	}
};
