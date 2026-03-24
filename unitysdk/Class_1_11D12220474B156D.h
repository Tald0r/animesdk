#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_5;
class Class_1_80D3E4DC7BC9DF13;
class Class_2_CC8926C75B527F8D_Class_2_9E10F61E218DF1FF;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET UNITYSDK_OFFSET(0x69844B0)
#define CLASS_1_11D12220474B156D_METHOD_1_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x6984E20)
#define CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET UNITYSDK_OFFSET(0x69846B0)
#define CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET UNITYSDK_OFFSET(0x6984AD0)
#define CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x6984A60)
#define CLASS_1_11D12220474B156D__CTOR_OFFSET UNITYSDK_OFFSET(0x6984430)

inline static constexpr unsigned int Class_1_11D12220474B156D_TypeDefinitionIndex = 41300;

class Class_1_11D12220474B156D : public ::System::Object
{
public:
	::Class_2_CC8926C75B527F8D_Class_2_9E10F61E218DF1FF* Field_1_0; // 0x10
	::Class_1_80D3E4DC7BC9DF13* Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* Field_1_1; // 0x20

	::System::Void _ctor(::Class_2_CC8926C75B527F8D_Class_2_9E10F61E218DF1FF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CC8926C75B527F8D_Class_2_9E10F61E218DF1FF*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F2138E056F9294A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_0F2138E056F9294A_OFFSET))(this);
	}

	::System::Void Method_1_B8ADD1482F0B3E5B(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_B8ADD1482F0B3E5B_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C0390E47015795E7(::MoleMole::UIBaseController* a1, ::Class_1_80D3E4DC7BC9DF13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_C0390E47015795E7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4982E67EAD90F790(::Class_1_80D3E4DC7BC9DF13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_80D3E4DC7BC9DF13*))((::PBYTE)hIl2Cpp + CLASS_1_11D12220474B156D_METHOD_1_4982E67EAD90F790_OFFSET))(this, a1);
	}
};
