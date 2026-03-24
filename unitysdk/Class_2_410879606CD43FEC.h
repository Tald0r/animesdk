#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_1_254A1D88361B2006;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define CLASS_2_410879606CD43FEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1565E6C0)
#define CLASS_2_410879606CD43FEC_METHOD_2_2DD8EB2A8AB21975_OFFSET UNITYSDK_OFFSET(0x1565F0D0)
#define CLASS_2_410879606CD43FEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15660090)
#define CLASS_2_410879606CD43FEC_METHOD_2_6157A8A12A1BC0AD_OFFSET UNITYSDK_OFFSET(0x15660200)
#define CLASS_2_410879606CD43FEC_METHOD_2_64E5F20693684FCA_OFFSET UNITYSDK_OFFSET(0x1565FEB0)
#define CLASS_2_410879606CD43FEC_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x1565EF70)
#define CLASS_2_410879606CD43FEC_METHOD_2_82547333C5FC5949_OFFSET UNITYSDK_OFFSET(0x1565ED10)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1565EB30)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1565F070)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x15660A20)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x15660A80)
#define CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1565EAD0)
#define CLASS_2_410879606CD43FEC_METHOD_2_D000AFCB3190F6D3_OFFSET UNITYSDK_OFFSET(0x15660600)
#define CLASS_2_410879606CD43FEC_METHOD_2_EA6544627C0A9669_OFFSET UNITYSDK_OFFSET(0x1565F980)
#define CLASS_2_410879606CD43FEC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x156601F0)
#define CLASS_2_410879606CD43FEC_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1565E720)
#define CLASS_2_410879606CD43FEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1565ECD0)
#define CLASS_2_410879606CD43FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x1565EB90)

inline static constexpr unsigned int Class_2_410879606CD43FEC_TypeDefinitionIndex = 58232;

class Class_2_410879606CD43FEC : public ::Foundation::SingletonDisposable_1<::Class_2_410879606CD43FEC*>
{
public:
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0xB890);
	}
	static ::System::Single* StaticGet_Field_2_5()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0xB894);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0xB898);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0xB89C);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_410879606CD43FEC_TypeDefinitionIndex)->GetStaticField(0xB8A0);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_254A1D88361B2006*>* Field_2_9; // 0x10
	::System::Collections::Generic::List_1<::Class_1_254A1D88361B2006*>* Field_2_7; // 0x18
	::Il2CppArray<::System::Collections::Generic::HashSet_1<::Class_1_254A1D88361B2006*>*>* Field_2_8; // 0x20
	::System::Single Field_2_6; // 0x28
	::System::Boolean Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_82547333C5FC5949(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_82547333C5FC5949_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_2DD8EB2A8AB21975(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_2DD8EB2A8AB21975_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_64E5F20693684FCA(::System::Collections::Generic::HashSet_1<::Class_1_254A1D88361B2006*>* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_254A1D88361B2006*>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_64E5F20693684FCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6157A8A12A1BC0AD(::UnityEngine::Animator* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_6157A8A12A1BC0AD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D000AFCB3190F6D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_D000AFCB3190F6D3_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_2_EA6544627C0A9669(::Class_1_254A1D88361B2006* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_254A1D88361B2006*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_EA6544627C0A9669_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_CA373AA1C7054598_4_OFFSET))(this);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_254A1D88361B2006* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_254A1D88361B2006*))((::PBYTE)hIl2Cpp + CLASS_2_410879606CD43FEC_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}
};
