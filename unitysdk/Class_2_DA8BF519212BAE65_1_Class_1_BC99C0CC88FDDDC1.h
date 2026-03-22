#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_DA8BF519212BAE65_1;
class Class_3_2159197412A91599;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_DA8BF519212BAE65_1_CLASS_1_BC99C0CC88FDDDC1_METHOD_1_CBFA0E1B6979D74F_OFFSET UNITYSDK_OFFSET(0x7C1AF10)
#define CLASS_2_DA8BF519212BAE65_1_CLASS_1_BC99C0CC88FDDDC1__CTOR_OFFSET UNITYSDK_OFFSET(0x7C1AF00)

inline static constexpr unsigned int Class_2_DA8BF519212BAE65_1_Class_1_BC99C0CC88FDDDC1_TypeDefinitionIndex = 54465;

class Class_2_DA8BF519212BAE65_1_Class_1_BC99C0CC88FDDDC1 : public ::System::Object
{
public:
	::Class_2_DA8BF519212BAE65_1* Field_1_0; // 0x10
	::System::Action_2<::System::Boolean, ::Class_3_2159197412A91599*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_1_BC99C0CC88FDDDC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBFA0E1B6979D74F(::System::Boolean a1, ::Class_3_2159197412A91599* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_3_2159197412A91599*))((::PBYTE)hIl2Cpp + CLASS_2_DA8BF519212BAE65_1_CLASS_1_BC99C0CC88FDDDC1_METHOD_1_CBFA0E1B6979D74F_OFFSET))(this, a1, a2);
	}
};
