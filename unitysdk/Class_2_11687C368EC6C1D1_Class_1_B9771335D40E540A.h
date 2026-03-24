#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_3_32CD58E95ADFF8F5_4;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_11687C368EC6C1D1_CLASS_1_B9771335D40E540A_METHOD_1_75D342994F4FD41F_OFFSET UNITYSDK_OFFSET(0xAFBAD70)
#define CLASS_2_11687C368EC6C1D1_CLASS_1_B9771335D40E540A__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBAD60)

inline static constexpr unsigned int Class_2_11687C368EC6C1D1_Class_1_B9771335D40E540A_TypeDefinitionIndex = 66590;

class Class_2_11687C368EC6C1D1_Class_1_B9771335D40E540A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_3_32CD58E95ADFF8F5_4*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11687C368EC6C1D1_CLASS_1_B9771335D40E540A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75D342994F4FD41F(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_11687C368EC6C1D1_CLASS_1_B9771335D40E540A_METHOD_1_75D342994F4FD41F_OFFSET))(this, a1);
	}
};
