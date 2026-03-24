#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_2_E7199313189EE055;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E7199313189EE055_CLASS_1_07F9F3A41FB2B841_METHOD_1_27251A3945436E8E_OFFSET UNITYSDK_OFFSET(0x7CEBEE0)
#define CLASS_2_E7199313189EE055_CLASS_1_07F9F3A41FB2B841__CTOR_OFFSET UNITYSDK_OFFSET(0x7CEBED0)

inline static constexpr unsigned int Class_2_E7199313189EE055_Class_1_07F9F3A41FB2B841_TypeDefinitionIndex = 76212;

class Class_2_E7199313189EE055_Class_1_07F9F3A41FB2B841 : public ::System::Object
{
public:
	::System::Action_2<::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*>* Field_1_2; // 0x10
	::Class_2_E7199313189EE055* Field_1_0; // 0x18
	::System::UInt32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_07F9F3A41FB2B841__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_27251A3945436E8E(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_E7199313189EE055_CLASS_1_07F9F3A41FB2B841_METHOD_1_27251A3945436E8E_OFFSET))(this, a1);
	}
};
