#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/System/Object.h"

class Class_1_3310A831794D334B;
class Class_1_37D514970FB5DFBF;
class Class_1_B3D1A9F25DF6353D;
class Class_1_EF896E1D0FDF202A;
class Class_2_D0F9C106E2DD0573;
class Class_3_5A883875281844B9;
namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_E45A002CE39DE740;

#define CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET UNITYSDK_OFFSET(0x8D5D930)
#define CLASS_1_D600CCD897E7E742_METHOD_1_078574148B31B206_OFFSET UNITYSDK_OFFSET(0x8D5D350)
#define CLASS_1_D600CCD897E7E742_METHOD_1_0C490FF1F071E8D4_OFFSET UNITYSDK_OFFSET(0x8D60920)
#define CLASS_1_D600CCD897E7E742_METHOD_1_0D4939FA66D5BBCF_OFFSET UNITYSDK_OFFSET(0x8D5D3B0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET UNITYSDK_OFFSET(0x8D603F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET UNITYSDK_OFFSET(0x8D5F010)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET UNITYSDK_OFFSET(0x8D5D7E0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x8D5CF90)
#define CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET UNITYSDK_OFFSET(0x8D61090)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET UNITYSDK_OFFSET(0x8D61630)
#define CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET UNITYSDK_OFFSET(0x8D60590)
#define CLASS_1_D600CCD897E7E742_METHOD_1_312660A857218270_OFFSET UNITYSDK_OFFSET(0x8D5EDB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_35E2DFD39628C4B7_OFFSET UNITYSDK_OFFSET(0x8D616C0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x8D5E170)
#define CLASS_1_D600CCD897E7E742_METHOD_1_41860354C2BB7B9F_OFFSET UNITYSDK_OFFSET(0x8D5E0F0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET UNITYSDK_OFFSET(0x8D5E010)
#define CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET UNITYSDK_OFFSET(0x8D607E0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_558D84418BDB96C4_OFFSET UNITYSDK_OFFSET(0x8D5E920)
#define CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET UNITYSDK_OFFSET(0x8D60600)
#define CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET UNITYSDK_OFFSET(0x8D613A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_71B28D4F0F7F2FC1_OFFSET UNITYSDK_OFFSET(0x8D5DB40)
#define CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET UNITYSDK_OFFSET(0x8D5CE10)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET UNITYSDK_OFFSET(0x8D5D260)
#define CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0x8D5D0D0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_8C114DB1E7F6C119_OFFSET UNITYSDK_OFFSET(0x8D61920)
#define CLASS_1_D600CCD897E7E742_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x8D5BAB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET UNITYSDK_OFFSET(0x8D61B20)
#define CLASS_1_D600CCD897E7E742_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x8D599A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_999E6D8338AE05BE_OFFSET UNITYSDK_OFFSET(0x8D611A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_AED4AD1D1B845350_OFFSET UNITYSDK_OFFSET(0x8D60BA0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET UNITYSDK_OFFSET(0x8D5EC30)
#define CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x8D5EEB0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET UNITYSDK_OFFSET(0x8D61480)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D6021EF926004667_OFFSET UNITYSDK_OFFSET(0x8D61DD0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_D6094B43C2328AAC_OFFSET UNITYSDK_OFFSET(0x8D5FC80)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET UNITYSDK_OFFSET(0x8D614E0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET UNITYSDK_OFFSET(0x8D5C270)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET UNITYSDK_OFFSET(0x8D5FA50)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET UNITYSDK_OFFSET(0x8D5D410)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET UNITYSDK_OFFSET(0x8D5E8A0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET UNITYSDK_OFFSET(0x8D60760)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET UNITYSDK_OFFSET(0x8D61CA0)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET UNITYSDK_OFFSET(0x8D5DA90)
#define CLASS_1_D600CCD897E7E742_METHOD_1_E89B5E85E1E3F103_OFFSET UNITYSDK_OFFSET(0x8D5D580)
#define CLASS_1_D600CCD897E7E742_METHOD_1_EAD0B2CD20468864_OFFSET UNITYSDK_OFFSET(0x8D5C830)
#define CLASS_1_D600CCD897E7E742_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x8D5F160)
#define CLASS_1_D600CCD897E7E742_METHOD_1_F9B57DBF3518EF48_OFFSET UNITYSDK_OFFSET(0x8D5FD30)
#define CLASS_1_D600CCD897E7E742__CCTOR_OFFSET UNITYSDK_OFFSET(0x8D57D20)

inline static constexpr unsigned int Class_1_D600CCD897E7E742_TypeDefinitionIndex = 40910;

class Class_1_D600CCD897E7E742 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet_Field_1_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EF80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>** StaticGet_Field_1_14()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EF88);
	}
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EF90);
	}
	static ::Il2CppArray<::System::Char>** StaticGet_Field_1_15()
	{
		return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EF98);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFA0);
	}
	static ::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>** StaticGet_Field_1_10()
	{
		return (::Foundation::DoubleKeyDictionary_3<::System::Int32, ::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFA8);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFC0);
	}
	static ::Il2CppArray<::MoleMole::Config::DamageHitType>** StaticGet_Field_1_9()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageHitType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_37D514970FB5DFBF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFD0);
	}
	static ::Il2CppArray<::MoleMole::Config::DamageElementType>** StaticGet_Field_1_8()
	{
		return (::Il2CppArray<::MoleMole::Config::DamageElementType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFD8);
	}
	static ::Class_1_E45A002CE39DE740<::System::Int32, ::System::Int32>** StaticGet_Field_1_16()
	{
		return (::Class_1_E45A002CE39DE740<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFE0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0x2EFE8);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xB3F0);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D600CCD897E7E742_TypeDefinitionIndex)->GetStaticField(0xB3F4);
	}
	// static const ::System::Single Field_1_7; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742__CCTOR_OFFSET))();
	}

	static ::System::String* Method_1_2025DD35291324CA(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_OFFSET))(a1);
	}

	static ::System::Void Method_1_01953D7882459DEC(::Class_2_D0F9C106E2DD0573* a1)
	{
		return ((::System::Void(*)(::Class_2_D0F9C106E2DD0573*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_01953D7882459DEC_OFFSET))(a1);
	}

	static ::System::Void Method_1_E53E1BC37B67A643(::MoleMole::Config::BaseProperty& a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::BaseProperty&))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E53E1BC37B67A643_OFFSET))(a1);
	}

	static ::System::Void Method_1_E89B5E85E1E3F103(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E89B5E85E1E3F103_OFFSET))(a1);
	}

	static ::System::Void Method_1_DD05496C2D1E4224(::System::String* a1, ::System::Single a2, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DD05496C2D1E4224_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::String* Method_1_460AE5949F4C524E(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_460AE5949F4C524E_OFFSET))(a1);
	}

	static ::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>* Method_1_41860354C2BB7B9F(::MoleMole::Config::BaseProperty a1, ::MoleMole::Config::PropertyModifyFunction a2)
	{
		return ((::System::Tuple_2<::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction>*(*)(::MoleMole::Config::BaseProperty, ::MoleMole::Config::PropertyModifyFunction))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_41860354C2BB7B9F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_96189EDEF38976A6_OFFSET))();
	}

	static ::System::String* Method_1_558D84418BDB96C4(::Class_3_5A883875281844B9* a1)
	{
		return ((::System::String*(*)(::Class_3_5A883875281844B9*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_558D84418BDB96C4_OFFSET))(a1);
	}

	static ::System::Void Method_1_CDDBE7F12D191EB9(::System::Object* a1)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CDDBE7F12D191EB9_OFFSET))(a1);
	}

	static ::System::String* Method_1_2025DD35291324CA_1(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2025DD35291324CA_1_OFFSET))(a1);
	}

	static ::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_F0D9B6AAFF504D87_OFFSET))();
	}

	static ::System::Void Method_1_E03391BCE5AF2926(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3310A831794D334B*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_3310A831794D334B*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E03391BCE5AF2926_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6094B43C2328AAC(::System::String* a1, ::Class_1_3310A831794D334B* a2)
	{
		return ((::System::Void(*)(::System::String*, ::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D6094B43C2328AAC_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_21378A7EB1BCB13B_OFFSET))();
	}

	static ::System::String* Method_1_1B0FD6E7BF5CEDE2(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_1B0FD6E7BF5CEDE2_OFFSET))(a1);
	}

	static ::System::String* Method_1_0D4939FA66D5BBCF(::MoleMole::Config::DamageHitType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageHitType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_0D4939FA66D5BBCF_OFFSET))(a1);
	}

	static ::System::Void Method_1_7F7BA654D7330B91(::System::String* a1, ::System::Single a2, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_7F7BA654D7330B91_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_2DC90EE759C8637B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2DC90EE759C8637B_OFFSET))(a1);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_OFFSET))();
	}

	static ::System::UInt32 Method_1_5E0897D4702C4CE9(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_5E0897D4702C4CE9_OFFSET))(a1);
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFC95121222309BD(::Class_1_EF896E1D0FDF202A* a1)
	{
		return ((::System::Void(*)(::Class_1_EF896E1D0FDF202A*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_CFC95121222309BD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_507C5AE0B7FFE1BB(::MoleMole::Config::ValueCompareType a1, ::System::Double a2, ::System::Double a3, ::System::Double a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_507C5AE0B7FFE1BB_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_F9B57DBF3518EF48(::Class_1_3310A831794D334B* a1)
	{
		return ((::System::Void(*)(::Class_1_3310A831794D334B*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_F9B57DBF3518EF48_OFFSET))(a1);
	}

	static ::MoleMole::Config::BaseProperty Method_1_E164ECAE7FCAD4A8_1(::MoleMole::Config::DamageElementType a1)
	{
		return ((::MoleMole::Config::BaseProperty(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E164ECAE7FCAD4A8_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_078574148B31B206(::MoleMole::Config::DamageElementType a1)
	{
		return ((::System::String*(*)(::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_078574148B31B206_OFFSET))(a1);
	}

	static ::System::Void Method_1_AED4AD1D1B845350(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_AED4AD1D1B845350_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_24B39354D1FCD13B(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_24B39354D1FCD13B_OFFSET))(a1);
	}

	static ::System::String* Method_1_999E6D8338AE05BE(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_999E6D8338AE05BE_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_61E5085A6684840B(::MoleMole::Config::ValueCompareType a1, ::System::String* a2, ::Foundation::AssetPath a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::String*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_61E5085A6684840B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_8D61BE16C9463302_OFFSET))();
	}

	static ::System::Boolean Method_1_D3C6AECBC4FFB6CD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D3C6AECBC4FFB6CD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* Method_1_DB92C7A10479067F(::MoleMole::Config::BuffGroupName a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_DB92C7A10479067F_OFFSET))(a1);
	}

	static ::System::Void Method_1_0C490FF1F071E8D4(::Class_1_B3D1A9F25DF6353D* a1)
	{
		return ((::System::Void(*)(::Class_1_B3D1A9F25DF6353D*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_0C490FF1F071E8D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_E07323E4DD886B2A(::System::String* a1, ::System::Int32 a2, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E07323E4DD886B2A_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_1_2C34586F670BB0A2(::MoleMole::Config::ValueCompareType a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_2C34586F670BB0A2_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_870AF3CD1D0A67B1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_870AF3CD1D0A67B1_1_OFFSET))();
	}

	static ::Class_3_5A883875281844B9* Method_1_35E2DFD39628C4B7(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Class_3_5A883875281844B9*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_35E2DFD39628C4B7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EAD0B2CD20468864(::System::String* a1, ::System::Single a2, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::System::String*, ::System::Single, ::Class_2_EA1C4A1A308E269F_Enum_3_0343567492C9FE5A, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_EAD0B2CD20468864_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::UInt32 Method_1_8C114DB1E7F6C119(::Class_3_5A883875281844B9* a1)
	{
		return ((::System::UInt32(*)(::Class_3_5A883875281844B9*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_8C114DB1E7F6C119_OFFSET))(a1);
	}

	static ::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_367B9590522079D1_OFFSET))();
	}

	static ::System::UInt32 Method_1_71B28D4F0F7F2FC1(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_71B28D4F0F7F2FC1_OFFSET))(a1);
	}

	static ::System::Void Method_1_312660A857218270(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::Class_1_EF896E1D0FDF202A*>*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_312660A857218270_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E300F8F9BDE9A987(::MoleMole::Config::ValueCompareType a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ValueCompareType, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_E300F8F9BDE9A987_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_94CFEBA1C53E48B0(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_94CFEBA1C53E48B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D6021EF926004667(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D600CCD897E7E742_METHOD_1_D6021EF926004667_OFFSET))(a1);
	}
};
