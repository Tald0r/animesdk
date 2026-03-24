#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Singleton_1.h"

class Class_0_16E4307DCC419505_4;
class Class_0_16E4307DCC419505_5;
class Class_1_9545B07472DE9BFD;
class Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_40;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_251C7056F2EE8C4B_METHOD_2_0284F1D77D50E3ED_OFFSET UNITYSDK_OFFSET(0x8D48030)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_0545E5B583A15FF9_OFFSET UNITYSDK_OFFSET(0x8D481A0)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x8D47F50)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_4916D20B06AD3334_OFFSET UNITYSDK_OFFSET(0x8D48620)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_88AD2FF46F46C80C_OFFSET UNITYSDK_OFFSET(0x8D48420)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_A054D52A250D3E38_OFFSET UNITYSDK_OFFSET(0x8D48490)
#define CLASS_2_251C7056F2EE8C4B_METHOD_2_FE41EBA18C59EB8A_OFFSET UNITYSDK_OFFSET(0x8D48510)
#define CLASS_2_251C7056F2EE8C4B__CTOR_OFFSET UNITYSDK_OFFSET(0x8D47EB0)

inline static constexpr unsigned int Class_2_251C7056F2EE8C4B_TypeDefinitionIndex = 66679;

class Class_2_251C7056F2EE8C4B : public ::Foundation::Singleton_1<::Class_2_251C7056F2EE8C4B*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_40*>* Field_2_1; // 0x18
	::System::Action_1<::Class_0_16E4307DCC419505_5*>* Field_2_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0284F1D77D50E3ED(::System::UInt16 a1, ::System::Action_1<::Class_0_16E4307DCC419505_4*>* a2, ::System::Action_1<::Class_0_16E4307DCC419505_4*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Action_1<::Class_0_16E4307DCC419505_4*>*, ::System::Action_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_0284F1D77D50E3ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_0545E5B583A15FF9(::Class_0_16E4307DCC419505_5* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_0545E5B583A15FF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_88AD2FF46F46C80C(::System::Action_1<::Class_0_16E4307DCC419505_5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_0_16E4307DCC419505_5*>*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_88AD2FF46F46C80C_OFFSET))(this, a1);
	}

	::System::Void Method_2_A054D52A250D3E38(::System::UInt16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_A054D52A250D3E38_OFFSET))(this, a1);
	}

	::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_40* Method_2_FE41EBA18C59EB8A(::System::UInt32 a1)
	{
		return ((::Class_2_251C7056F2EE8C4B_Class_0_16E7307DCC43CB2C_40*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_FE41EBA18C59EB8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Int32 Method_2_4916D20B06AD3334(::Class_1_9545B07472DE9BFD* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_9545B07472DE9BFD*))((::PBYTE)hIl2Cpp + CLASS_2_251C7056F2EE8C4B_METHOD_2_4916D20B06AD3334_OFFSET))(this, a1);
	}
};
