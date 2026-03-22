#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BE71B422DBACB61A_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xCE51F80)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_14D20794BC5A04FC_OFFSET UNITYSDK_OFFSET(0xCE526D0)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0xCE51340)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_1C79C55CF9C65BBD_1_OFFSET UNITYSDK_OFFSET(0xCE525A0)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_1C79C55CF9C65BBD_OFFSET UNITYSDK_OFFSET(0xCE52470)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_2776BE952E91858D_OFFSET UNITYSDK_OFFSET(0xCE51920)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_3B000A390A450EC7_OFFSET UNITYSDK_OFFSET(0xCE527E0)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_4038FE4A72B0ACDC_OFFSET UNITYSDK_OFFSET(0xCE51970)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0xCE52350)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xCE52330)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xCE52340)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0xCE528F0)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xCE51960)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_915FA1011590C065_OFFSET UNITYSDK_OFFSET(0xCE51E30)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_9513835C64537273_OFFSET UNITYSDK_OFFSET(0xCE51BD0)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_BCFE161307D6197E_OFFSET UNITYSDK_OFFSET(0xCE52900)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_BEFDECFA5BC01CF3_1_OFFSET UNITYSDK_OFFSET(0xCE52360)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_BEFDECFA5BC01CF3_OFFSET UNITYSDK_OFFSET(0xCE52140)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_E8C6ABD8121E8FDE_OFFSET UNITYSDK_OFFSET(0xCE52250)
#define CLASS_2_BE71B422DBACB61A_METHOD_2_F01FF1DAB59625C1_OFFSET UNITYSDK_OFFSET(0xCE51F90)
#define CLASS_2_BE71B422DBACB61A_ONATTACH_OFFSET UNITYSDK_OFFSET(0xCE512C0)
#define CLASS_2_BE71B422DBACB61A_ONCREATE_OFFSET UNITYSDK_OFFSET(0xCE510C0)
#define CLASS_2_BE71B422DBACB61A_ONDETACH_OFFSET UNITYSDK_OFFSET(0xCE51740)
#define CLASS_2_BE71B422DBACB61A_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xCE516A0)
#define CLASS_2_BE71B422DBACB61A_ONVISITONE_OFFSET UNITYSDK_OFFSET(0xCE51890)
#define CLASS_2_BE71B422DBACB61A__CTOR_OFFSET UNITYSDK_OFFSET(0xCE51910)

inline static constexpr unsigned int Class_2_BE71B422DBACB61A_TypeDefinitionIndex = 72711;

class Class_2_BE71B422DBACB61A : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_BE71B422DBACB61A*>
{
public:
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* Field_2_2; // 0x20
	::Foundation::Unreal::FGameplayTagContainer Field_2_0; // 0x28
	::System::String* Field_2_3; // 0x98
	::System::Boolean Field_2_1; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_ONCREATE_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_ONATTACH_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_ONDETACH_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_ONVISITONE_OFFSET))(this, a1);
	}

	::Foundation::Unreal::FGameplayTagContainer Method_2_2776BE952E91858D()
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_2776BE952E91858D_OFFSET))(this);
	}

	::System::Void Method_2_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_2_4038FE4A72B0ACDC(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_4038FE4A72B0ACDC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_915FA1011590C065(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_915FA1011590C065_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_F01FF1DAB59625C1(::Foundation::Unreal::FGameplayTag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_F01FF1DAB59625C1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BEFDECFA5BC01CF3(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_BEFDECFA5BC01CF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8C6ABD8121E8FDE(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_E8C6ABD8121E8FDE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_9513835C64537273(::Foundation::Unreal::FGameplayTag a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_9513835C64537273_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BEFDECFA5BC01CF3_1(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_BEFDECFA5BC01CF3_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C79C55CF9C65BBD(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_1C79C55CF9C65BBD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1C79C55CF9C65BBD_1(::Foundation::Unreal::FGameplayTagContainer a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_1C79C55CF9C65BBD_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_14D20794BC5A04FC(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_14D20794BC5A04FC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_3B000A390A450EC7(::Foundation::Unreal::FGameplayTagContainer a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::Unreal::FGameplayTagContainer))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_3B000A390A450EC7_OFFSET))(this, a1);
	}

	::System::Void Method_2_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_2_BCFE161307D6197E(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BE71B422DBACB61A_METHOD_2_BCFE161307D6197E_OFFSET))(this, a1, a2);
	}
};
