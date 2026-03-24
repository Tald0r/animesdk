#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/LoginLoadType.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace Foundation { class IEnumeratorLoader; }
namespace Foundation { class IEnumeratorLoaderNode; }
namespace Foundation { class ILoader; }
namespace MoleMole { class NewAutoConfigMetaConfig; }
namespace MoleMole { class NewConfigMetaConfig; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x924EA40)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_1C6AD2DA62FB6EB1_OFFSET UNITYSDK_OFFSET(0x924E990)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET UNITYSDK_OFFSET(0x924EE60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x6EE8F10)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET UNITYSDK_OFFSET(0x924F620)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET UNITYSDK_OFFSET(0x6EE7BE0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x6EE8C40)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_360AEA6D5E7DA4A5_OFFSET UNITYSDK_OFFSET(0x6EE7CF0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x924E900)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x6EEAE60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x6EE8BE0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x6EE8DA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x6EE76D0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_6582BFFD353FBBA5_OFFSET UNITYSDK_OFFSET(0x6EEAFD0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x6EE73B0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_75CB4980FED2E377_OFFSET UNITYSDK_OFFSET(0x6EEA0C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET UNITYSDK_OFFSET(0x6EE8640)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET UNITYSDK_OFFSET(0x924F260)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0x6EE6F10)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET UNITYSDK_OFFSET(0x6EE7F40)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_907E24F785836BA0_OFFSET UNITYSDK_OFFSET(0x6EE7730)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET UNITYSDK_OFFSET(0x924F100)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET UNITYSDK_OFFSET(0x6EE7990)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET UNITYSDK_OFFSET(0x6EE8CA0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET UNITYSDK_OFFSET(0x6EE8E60)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET UNITYSDK_OFFSET(0x924EDC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x6EE7E90)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_1_OFFSET UNITYSDK_OFFSET(0x924F8F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_2_OFFSET UNITYSDK_OFFSET(0x6EE8240)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET UNITYSDK_OFFSET(0x924F730)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET UNITYSDK_OFFSET(0x6EE7A30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET UNITYSDK_OFFSET(0x6EEB2F0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x6EE9150)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_B7A43C06FD78D78B_OFFSET UNITYSDK_OFFSET(0x6EE88A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BCB2842DA683C01F_OFFSET UNITYSDK_OFFSET(0x6EEA790)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET UNITYSDK_OFFSET(0x924F320)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET UNITYSDK_OFFSET(0x6EE8A80)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET UNITYSDK_OFFSET(0x6EEAE70)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET UNITYSDK_OFFSET(0x6EE8920)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6EE8D40)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x924F2C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x6EE8E00)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x6EEB5C0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET UNITYSDK_OFFSET(0x924F4A0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x6EE7F30)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x924F400)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_EEA082F774806CCC_OFFSET UNITYSDK_OFFSET(0x924EEC0)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x6EE8F00)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET UNITYSDK_OFFSET(0x6EEB560)
#define CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET UNITYSDK_OFFSET(0x924F1A0)
#define CLASS_2_E9DF3AE65046D8DB_ONCREATE_OFFSET UNITYSDK_OFFSET(0x924E8A0)
#define CLASS_2_E9DF3AE65046D8DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x924EC30)
#define CLASS_2_E9DF3AE65046D8DB__CTOR_OFFSET UNITYSDK_OFFSET(0x924EAB0)

inline static constexpr unsigned int Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex = 53066;

class Class_2_E9DF3AE65046D8DB : public ::Foundation::SingletonDisposable_1<::Class_2_E9DF3AE65046D8DB*>
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_2_8()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x2F700);
	}
	static ::Foundation::AssetPath* StaticGet_Field_2_37()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x2F708);
	}
	static ::Foundation::AssetPath* StaticGet_Field_2_36()
	{
		return (::Foundation::AssetPath*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x2F718);
	}
	static ::System::Action_1<::System::Single>** StaticGet_Field_2_11()
	{
		return (::System::Action_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0x2F728);
	}
	static ::System::Boolean* StaticGet_Field_2_45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB980);
	}
	static ::Foundation::LoginLoadType* StaticGet_Field_2_13()
	{
		return (::Foundation::LoginLoadType*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB981);
	}
	static ::System::Boolean* StaticGet_Field_2_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB982);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB984);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB988);
	}
	static ::System::Int32* StaticGet_Field_2_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB98C);
	}
	static ::System::Int32* StaticGet_Field_2_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB990);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB994);
	}
	static ::System::Int32* StaticGet_Field_2_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB998);
	}
	static ::System::Int32* StaticGet_Field_2_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB99C);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A0);
	}
	static ::System::Boolean* StaticGet_Field_2_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A1);
	}
	static ::System::Boolean* StaticGet_Field_2_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A2);
	}
	static ::System::Boolean* StaticGet_Field_2_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A3);
	}
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A4);
	}
	static ::System::Boolean* StaticGet_Field_2_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A8);
	}
	static ::System::Boolean* StaticGet_Field_2_42()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9A9);
	}
	static ::System::Boolean* StaticGet_Field_2_44()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9AA);
	}
	static ::System::Boolean* StaticGet_Field_2_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9AB);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9AC);
	}
	static ::System::Int32* StaticGet_Field_2_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9B0);
	}
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_E9DF3AE65046D8DB_TypeDefinitionIndex)->GetStaticField(0xB9B4);
	}
	// static const ::System::Single Field_2_19; // 0x0
	// static const ::System::Single Field_2_20; // 0x0
	// static const ::System::Single Field_2_21; // 0x0
	// static const ::System::Single Field_2_22; // 0x0
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetPath, ::System::Func_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>*>>* Field_2_33; // 0x10
	::MoleMole::NewConfigMetaConfig* Field_2_38; // 0x18
	::MoleMole::NewAutoConfigMetaConfig* Field_2_39; // 0x20
	::System::Collections::Generic::Stack_1<::System::ValueTuple_2<::Foundation::AssetRequestHandle, ::System::Action_1<::Foundation::AssetRequestHandle>*>>* Field_2_34; // 0x28
	::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>* Field_2_35; // 0x30
	::Foundation::ILoader* Field_2_32; // 0x38
	::System::Int32 Field_2_31; // 0x40
	::System::Int32 Field_2_28; // 0x44
	::System::Int32 Field_2_26; // 0x48
	::System::Int32 Field_2_27; // 0x4C
	::System::Int32 Field_2_29; // 0x50
	::System::Int32 Field_2_24; // 0x54
	::System::Boolean Field_2_40; // 0x58
	::System::Boolean Field_2_46; // 0x59
	::System::Int32 Field_2_30; // 0x5C
	::System::Single Field_2_23; // 0x60
	::System::Int32 Field_2_25; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_1C6AD2DA62FB6EB1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_1C6AD2DA62FB6EB1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_DISPOSE_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_OFFSET))(a1);
	}

	static ::System::Void Method_2_1DA89DF9585853CF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_1DA89DF9585853CF_OFFSET))(a1);
	}

	static ::System::Void Method_2_EEA082F774806CCC(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_EEA082F774806CCC_OFFSET))(a1);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_1(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_1_OFFSET))(a1);
	}

	::System::Collections::IEnumerator* Method_2_F7F8016EAE618A49(::System::Action_1<::System::Single>* a1, ::System::Single a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F7F8016EAE618A49_OFFSET))(this, a1, a2);
	}

	static ::Foundation::LoginLoadType Method_2_85B4C71C1FFFFA63()
	{
		return ((::Foundation::LoginLoadType(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_85B4C71C1FFFFA63_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_2_BDBE58599E9AD74D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BDBE58599E9AD74D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_2_E006F30F38C951FF(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E006F30F38C951FF_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_20D6605E17B95057(::System::Single a1)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_20D6605E17B95057_OFFSET))(a1);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97531026950BAE0D(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_OFFSET))(this, a1, a2);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97531026950BAE0D_1(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_885DF4DA0F709E3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_885DF4DA0F709E3E_OFFSET))(this);
	}

	static ::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_2_907E24F785836BA0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_907E24F785836BA0_OFFSET))(this);
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_2(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_2_OFFSET))(a1);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::String* Method_2_9F2E2B246015406C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9F2E2B246015406C_OFFSET))(this);
	}

	static ::System::Void Method_2_2449FEA34439A117(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_2449FEA34439A117_OFFSET))(a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::Foundation::ILoader* Method_2_8891042993F02C3D()
	{
		return ((::Foundation::ILoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_8891042993F02C3D_OFFSET))(this);
	}

	::System::Void Method_2_B7A43C06FD78D78B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B7A43C06FD78D78B_OFFSET))(this);
	}

	::System::String* Method_2_C101CD8C5CF89A5A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_OFFSET))(this);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_1_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_97531026950BAE0D_2(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_97531026950BAE0D_2_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_1_OFFSET))();
	}

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_3(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_3_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5790A55946AA509D_2_OFFSET))();
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Collections::IEnumerator* Method_2_92C6D4C022363DAC_4(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_92C6D4C022363DAC_4_OFFSET))(a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_2045BA2947DBDBCE_OFFSET))(this);
	}

	static ::System::Void Method_2_75CB4980FED2E377(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_75CB4980FED2E377_OFFSET))(a1, a2);
	}

	::Foundation::ILoader* Method_2_BCB2842DA683C01F(::System::Action_1<::System::Single>* a1, ::System::Single a2, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>* a3)
	{
		return ((::Foundation::ILoader*(*)(::PVOID, ::System::Action_1<::System::Single>*, ::System::Single, ::System::Action_1<::System::Collections::Generic::List_1<::System::Exception*>*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_BCB2842DA683C01F_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::String* Method_2_C101CD8C5CF89A5A_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_C101CD8C5CF89A5A_2_OFFSET))(this);
	}

	::Foundation::IEnumeratorLoaderNode* Method_2_79E682FACD4FC49F(::Foundation::IEnumeratorLoader* a1, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>* a2)
	{
		return ((::Foundation::IEnumeratorLoaderNode*(*)(::PVOID, ::Foundation::IEnumeratorLoader*, ::Il2CppArray<::Foundation::IEnumeratorLoaderNode*>*))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_79E682FACD4FC49F_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_6582BFFD353FBBA5(::System::String* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_6582BFFD353FBBA5_OFFSET))(a1, a2, a3);
	}

	::System::String* Method_2_B12F645A576BB7A1(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B12F645A576BB7A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	static ::System::Void Method_2_F15E2703830306E1(::Foundation::LoginLoadType a1)
	{
		return ((::System::Void(*)(::Foundation::LoginLoadType))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_F15E2703830306E1_OFFSET))(a1);
	}

	static ::System::Void Method_2_360AEA6D5E7DA4A5(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_360AEA6D5E7DA4A5_OFFSET))(a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9DF3AE65046D8DB_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}
};
