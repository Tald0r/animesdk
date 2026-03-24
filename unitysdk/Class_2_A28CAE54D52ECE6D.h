#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_3_1A345EAE5F749316_43;
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_0_16E4307DCC419505_118;
template <typename T> class Class_0_16E4307DCC419505_96;
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_2_A28CAE54D52ECE6D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x75C06A0)
#define CLASS_2_A28CAE54D52ECE6D_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x75C0CE0)
#define CLASS_2_A28CAE54D52ECE6D_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x75C0FA0)
#define CLASS_2_A28CAE54D52ECE6D_METHOD_2_72890DC273E2282B_OFFSET UNITYSDK_OFFSET(0x75C08D0)
#define CLASS_2_A28CAE54D52ECE6D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x75C0840)
#define CLASS_2_A28CAE54D52ECE6D_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x75C05A0)
#define CLASS_2_A28CAE54D52ECE6D__CTOR_OFFSET UNITYSDK_OFFSET(0x75C07C0)

inline static constexpr unsigned int Class_2_A28CAE54D52ECE6D_TypeDefinitionIndex = 54252;

class Class_2_A28CAE54D52ECE6D : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_118<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* Field_2_1; // 0x60
	::System::Collections::Generic::Queue_1<::Il2CppArray<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*>* Field_2_2; // 0x68
	::Class_0_16E4307DCC419505_96<::System::Boolean>* Field_2_0; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_72890DC273E2282B(::Class_1_4109B64C3CE1B638<::Class_3_1A345EAE5F749316_43*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4109B64C3CE1B638<::Class_3_1A345EAE5F749316_43*>*))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_METHOD_2_72890DC273E2282B_OFFSET))(this, a1);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A28CAE54D52ECE6D_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}
};
