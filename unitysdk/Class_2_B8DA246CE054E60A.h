#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

class Class_1_A03C9A14CD8D41B5_1;
class Class_3_0E7EF0781F9BE53A_11;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_B8DA246CE054E60A_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x77DE630)
#define CLASS_2_B8DA246CE054E60A_METHOD_2_CB17EEE86A7BEFD9_OFFSET UNITYSDK_OFFSET(0x77DE120)
#define CLASS_2_B8DA246CE054E60A_METHOD_2_E8F40979B3DD5EA5_OFFSET UNITYSDK_OFFSET(0x77DE300)
#define CLASS_2_B8DA246CE054E60A_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x77DDF70)
#define CLASS_2_B8DA246CE054E60A__CTOR_OFFSET UNITYSDK_OFFSET(0x77DE010)

inline static constexpr unsigned int Class_2_B8DA246CE054E60A_TypeDefinitionIndex = 38310;

class Class_2_B8DA246CE054E60A : public ::Class_1_F57C3EEEB03201AF
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A03C9A14CD8D41B5_1*>* Field_2_0; // 0x60
	::Class_2_000597E145D7A42A<::System::Int32>* Field_2_2; // 0x68
	::System::Int32 Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_A03C9A14CD8D41B5_1*>* Method_2_CB17EEE86A7BEFD9()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A03C9A14CD8D41B5_1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_CB17EEE86A7BEFD9_OFFSET))(this);
	}

	::System::Void Method_2_E8F40979B3DD5EA5(::Class_3_0E7EF0781F9BE53A_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0E7EF0781F9BE53A_11*))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_E8F40979B3DD5EA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8DA246CE054E60A_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}
};
